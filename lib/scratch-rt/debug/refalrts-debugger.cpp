#include "refalrts-utils.h"
#include "refalrts-debugger.h"

#include <stdlib.h>
#include <string.h>

//FROM refalrts-dynamic
#include "refalrts-dynamic.h"
//FROM refalrts-vm
#include "refalrts-vm.h"


//=============================================================================
// Пошаговый отладчик
//=============================================================================

//=============================================================================
//  Классы отладчика и вспомогательных структур
//=============================================================================

namespace refalrts {

namespace debugger {

static const char *const s_H = "h";
static const char *const s_HELP = "help";
static const char *const s_B = "b";
static const char *const s_BREAK = "break";
static const char *const s_BREAKPOINT = "breakpoint";
static const char *const s_CL = "cl";
static const char *const s_CLEAR = "clear";
static const char *const s_RM = "rm";
static const char *const s_STEPLIMIT = "steplimit";
static const char *const s_MEMORYLIMIT = "memorylimit";
static const char *const s_RUN = "run";
static const char *const s_R = "r";
/*static*/ const char *const s_STEP = "step";
static const char *const s_S = "s";
static const char *const s_NEXT = "next";
static const char *const s_N = "n";
static const char *const s_VARS = "vars";
static const char *const s_P = "p";
static const char *const s_PRINT = "print";
static const char *const s_ARG = "arg";
static const char *const s_CALL = "call";
static const char *const s_CALLEE = "callee";
static const char *const s_RES = "res";
static const char *const s_DOT = ".";
static const char *const s_TR = "tr";
static const char *const s_TRACE = "trace";
static const char *const s_NOTR = "notr";
static const char *const s_NOTRACE = "notrace";
static const char *const s_Q = "q";
static const char *const s_QUIT = "quit";

enum { cMaxLen = 1024 };
void close_out(FILE*);

} // namespace debugger

} // namespace refalrts

//=============================================================================
//  Определения методов отладчика и вспомогательных структур
//=============================================================================
//  Отладочная таблица переменных

std::pair<std::string, int>
refalrts::debugger::VariableDebugTable::parse_var_name(
  const char *full_name
) {
  char *dash_ptr = strchr((char*)full_name, '#');
  int depth = -1;
  char var_name[cMaxLen] = {0};
  if (dash_ptr != NULL) {
    size_t n = (dash_ptr-full_name);
    strncpy(var_name, full_name, n);
      // небольшой костыль, почему-то при n=4 копируются 5 символов
    var_name[n] = 0;
    depth = atoi(dash_ptr+1);
  } else {
    strcpy(var_name, full_name);
  }
  return std::pair<std::string, int>(std::string(var_name), depth);
}

void refalrts::debugger::VariableDebugTable::variable_bounds(
  refalrts::Iter& var_begin, refalrts::Iter& var_end, char type, int offset
) {
  var_begin = m_context[offset];
  switch (type) {
    case 's':
      var_end = var_begin;
      break;

    case 't':
      if (is_open_bracket(var_begin)) {
        var_end = var_begin->link_info;
      } else {
        var_end = var_begin;
      }
      break;

    case 'e':
      var_end = m_context[offset + 1];
      break;

    default:
      refalrts_switch_default_violation(type);
  }
}


void refalrts::debugger::VariableDebugTable::insert_var(
  const RASLCommand *next
) {
  if (m_first == 0) {
    m_first = next;
  }
  m_last = next;
}

void refalrts::debugger::VariableDebugTable::clear() {
  m_first = m_last = 0;
}

std::map<int, int> refalrts::debugger::VariableDebugTable::find_var(
  const char *var_name
) {
  std::pair<std::string, int> input_pair = parse_var_name(var_name);
  bool has_depth = input_pair.second >= 0;
  std::map<int, int> var_depth_offset_map;
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    std::pair<std::string, int> table_pair =
      parse_var_name(m_strings[it->val1].string);
    if (input_pair.first == table_pair.first) {
      if (has_depth) {
        if (table_pair.second == input_pair.second) {
          var_depth_offset_map.insert(
            std::pair<int, int>(input_pair.second, it->bracket)
          );
        }
      } else {
        var_depth_offset_map.insert(
          std::pair<int, int>(table_pair.second, it->bracket)
        );
      }
    }
  }
  return var_depth_offset_map;
}

void refalrts::debugger::VariableDebugTable::print(FILE *out) {
  fprintf(
    out,
    "==========================Variable debug table=========================\n"
  );
  for (const RASLCommand *it = m_first; it != 0 && it<=m_last; ++it) {
    const char *var_name = m_strings[it->val1].string;
    fprintf(out, "  \"%.20s\"\t-  ", var_name);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->bracket);
    m_vm->print_seq(out, var_begin, var_end, false);
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

void refalrts::debugger::VariableDebugTable::print_var(
  const char *var_name, FILE *out
) {
  std::map<int, int> var_depth_offset_map = find_var(var_name);
  std::pair<std::string, int> var_parse_name = parse_var_name(var_name);
  for (
    std::map<int, int>::iterator it = var_depth_offset_map.begin();
    it != var_depth_offset_map.end();
    ++it
  ) {
    fprintf(out, "  %s#%d\t== ", var_parse_name.first.c_str(), it->first);
    refalrts::Iter var_begin = 0;
    refalrts::Iter var_end = 0;
    variable_bounds(var_begin, var_end, var_name[0], it->second);
    m_vm->print_seq(out, var_begin, var_end, false);
  }
}

void refalrts::debugger::VariableDebugTable::set_string_items(
  const StringItem *items
) {
  m_strings = items;
}

void refalrts::debugger::VariableDebugTable::set_context(Iter *context) {
  m_context = context;
}

//=============================================================================
//  Таблица трассируемых функций

void refalrts::debugger::TracedFunctionTable::trace_func(
  const char *func_name, FILE *trace_out
) {
  m_traced_func_table.insert(
    std::pair<std::string, FILE*>(std::string(func_name), trace_out)
  );
}

void refalrts::debugger::TracedFunctionTable::notrace_func(
  const char *func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(std::string(func_name));
  if (found != m_traced_func_table.end()) {
    close_out(found->second);
    m_traced_func_table.erase(std::string(func_name));
  }
}

void refalrts::debugger::TracedFunctionTable::clear() {
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    close_out(it->second);
  }
  m_traced_func_table.clear();
}

bool refalrts::debugger::TracedFunctionTable::is_traced_func(
  const char *func_name
) {
  return
    m_traced_func_table.find(std::string(func_name)) !=
      m_traced_func_table.end();
}

FILE *refalrts::debugger::TracedFunctionTable::get_trace_outstream (
  const char * func_name
) {
  std::map<std::string, FILE*>::iterator found =
    m_traced_func_table.find(std::string(func_name));
  if (found == m_traced_func_table.end()) {
    return 0;
  }
  return found->second;
}

void refalrts::debugger::TracedFunctionTable::print(FILE *out) {
  fprintf(
    out,
    "=========================Traced function table=========================\n"
  );
  for (
    std::map<std::string, FILE*>::iterator it = m_traced_func_table.begin();
    it != m_traced_func_table.end();
    ++it
  ) {
    fprintf(out, "  \"%.20s\"", it->first.c_str());
    if (it->second == stdout) {
      fprintf(out, "\tin stdout\n");
    } else {
      fprintf(out, "\tin file\n");
    }
  }
  fprintf(
    out,
    "=======================================================================\n"
  );
}

//=============================================================================
//  Множество точек прерывания

void refalrts::debugger::BreakpointSet::add_breakpoint(int step_numb) {
  m_step_breaks.insert(step_numb);
}

void refalrts::debugger::BreakpointSet::add_breakpoint(const char *func_name) {
  m_func_breaks.insert(std::string(func_name));
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(int step_numb) {
  m_step_breaks.erase(step_numb);
}

void refalrts::debugger::BreakpointSet::rm_breakpoint(const char *func_name) {
  m_func_breaks.erase(std::string(func_name));
}

bool refalrts::debugger::BreakpointSet::is_breakpoint(
  int cur_step_numb, const char *cur_func_name
) {
  std::set<int>::iterator step_found = m_step_breaks.find(cur_step_numb);
  std::set<std::string>::iterator func_found =
    m_func_breaks.find(std::string(cur_func_name));
  return step_found != m_step_breaks.end() || func_found != m_func_breaks.end();
}

void refalrts::debugger::BreakpointSet::print(FILE *out) {
  fprintf(out, "Step breakpoint set:\n");
  for (
    std::set<int>::iterator step_it = m_step_breaks.begin();
    step_it != m_step_breaks.end();
    ++step_it
  ) {
    fprintf(out, "\t%d\n", *step_it);
  }
  fprintf(out, "Function breakpoint set:\n");
  for (
    std::set<std::string>::iterator func_it = m_func_breaks.begin();
    func_it != m_func_breaks.end();
    ++func_it
  ) {
    fprintf(out, "\t<%s ...>\n", func_it->c_str());
  }
}

//=============================================================================
//  Работа с потоками вывода и парсинг строки

refalrts::debugger::RefalDebugger::RedirectionType
refalrts::debugger::RefalDebugger::parse_redirection(char **line) {
  char *line_ptr = *line;

  skip_space(&line_ptr);

  RedirectionType result = check_bracket(&line_ptr);
  if (result == cRedirectionType_None) {
    return cRedirectionType_None;
  }

  refalrts::debugger::RefalDebugger::skip_space(&line_ptr);

  if (*line_ptr == '"') {
    if (! quotation_mark_parse(line_ptr+1, *line)) {
      return cRedirectionType_None;
    }
  } else {
    *line = line_ptr;
    char *end = skip_nonspace(line_ptr);
    *end = '\0';
  }

  return result;
}

void refalrts::debugger::RefalDebugger::skip_space(char **ptr) {
  while (**ptr == '\n' || **ptr == '\t' || **ptr == ' ') {
    (*ptr)++;
  }
}

char *refalrts::debugger::RefalDebugger::skip_nonspace(char *ptr) {
  while (*ptr != '\n' && *ptr != '\t' && *ptr != ' ') {
    ptr++;
  }

  return ptr;
}

refalrts::debugger::RefalDebugger::RedirectionType
refalrts::debugger::RefalDebugger::check_bracket(char **ptr) {
  if (**ptr == '>') {
    (*ptr)++;
    if (**ptr == '>') {
      (*ptr)++;
      return cRedirectionType_Append;
    }
    return cRedirectionType_Write;
  }
  return cRedirectionType_None;
}

// from - источкник, из которого копируем строку
// out - назначение, по которому копируется строка
// и дописывается 1 байт val (от эскейп-последовательности)
// str_p - адрес, до которого происходит копирование из from
// (*str_p - *from) - количество байт, которое копируем
void refalrts::debugger::RefalDebugger::write_byte(
  char **from, char **out, char **str_p, char val
) {
  memmove(*out, *from, *str_p - *from);
  *out += (*str_p - *from) + 1;
  *(*out - 1) = val;
  *str_p += 2;
  *from = *str_p;
}

int refalrts::debugger::RefalDebugger::parse2hex(unsigned char *in) {
  unsigned char ret;
  if ( (*in - '0') <= 9){
    ret = static_cast<unsigned char>(*in - '0');
  } else if ( (*in & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    // обнулением 6-го бита, мы переводим маленькие латинские буквы в большие
    // см. ASCII table
    ret = static_cast<unsigned char>(((*in & ~(1 << 5)) - 'A') + 10);
  } else {
    return cBadHexVal;
  }
  ret <<= 4;

  if ( (*(in+1) - '0') <= 9) {
    ret |= static_cast<unsigned char>(*(in+1) - '0');
  } else if ( (*(in+1) & ~(1 << 5)) - 'A' <= 'F' - 'A') {
    ret |= static_cast<unsigned char>((*(in+1) & ~(1 << 5)) - 'A' + 10);
  } else {
    return cBadHexVal;
  }
  return ret;
}

bool refalrts::debugger::RefalDebugger::quotation_mark_parse(
  char *from, char *out
) {
  char *str_p = from;

  for (;;) {
    switch (*str_p) {
    case '"':
      switch (*(str_p + 1)) {
      case '\n':
      case '\t':
      case ' ':
      case '\0':
        memmove(out, from, str_p - from);
        *(out + (str_p - from)) = '\0';
        return true;

      case 'a':
        write_byte(&from, &out, &str_p, '\a');
        continue;

      case 'b':
        write_byte(&from, &out, &str_p, '\b');
        continue;

      case 'f':
        write_byte(&from, &out, &str_p, '\f');
        continue;

      case 'n':
        write_byte(&from, &out, &str_p, '\n');
        continue;

      case 'r':
        write_byte(&from, &out, &str_p, '\r');
        continue;

      case 't':
        write_byte(&from, &out, &str_p, '\t');
        continue;

      case 'v':
        write_byte(&from, &out, &str_p, '\v');
        continue;

      case '"':
        write_byte(&from, &out, &str_p, '"');
        continue;

      case 'x':
        {
          int hexval = parse2hex((unsigned char *)str_p + 2);
          if (hexval == cBadHexVal) {
            return false;
          }
          memmove(out, from, str_p - from);
          out += (str_p - from) + 1;
          *(out-1) = static_cast<char>(hexval);
          str_p += 4;
          from = str_p;
          continue;
        }

      default:
        return false;
      }

    case '\0':
      return false;

    default :
      str_p++;
      continue;
    }
  }
}


FILE *refalrts::debugger::RefalDebugger::get_out() {
  char line[cMaxLen] = {0};
  char *line_ptr = line;
  if (fgets(line, cMaxLen, m_in) == 0) {
    return stdout;
  }
  RedirectionType type = parse_redirection(&line_ptr);
  if (type == cRedirectionType_Append) {
    return fopen(line_ptr, "a");
  } else if (type == cRedirectionType_Write) {
    return fopen(line_ptr, "w");
  } else {
    return stdout;
  }
}

void refalrts::debugger::close_out(FILE *out) {
  if (out != stdout) {
    fclose(out);
  }
}

//=============================================================================
//  Класс отладчика

bool refalrts::debugger::RefalDebugger::mem_cond() {
  bool res = m_vm->domain()->memory_use() > m_memory_limit;
  if (res) {
    m_memory_limit = -1;
    printf("stopped on memory overflow\n");
  }
  return res;
}

bool refalrts::debugger::RefalDebugger::next_cond(Iter begin) {
  m_dot = s_NEXT;
  bool stop = begin == m_next_expr;
  if (stop) {
    printf("stopped on next\n");
    m_next_expr = 0;
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::run_cond(RefalFunction *callee) {
  m_dot = s_RUN;
  bool stop = break_set.is_breakpoint(
    m_vm->step_counter(), callee == 0 ? "" : callee->name.name
  );
  if (stop) {
    printf("stopped on function breakpoint\n");
  }
  return stop;
}

bool refalrts::debugger::RefalDebugger::step_cond() {
  bool scond = (m_vm->step_counter() == m_step_numb);
  m_step_numb = m_vm->step_counter();
  m_dot = s_STEP;
  if (scond) {
    printf("stopped on step\n");
  }
  return scond;
}

bool refalrts::debugger::RefalDebugger::is_debug_stop(
  Iter begin, RefalFunction *callee
) {
  bool stop = step_cond();
  stop = next_cond(begin) || stop;
  stop = run_cond(callee) || stop;
  stop = mem_cond() || stop;
  return stop;
}

void refalrts::debugger::RefalDebugger::debug_trace(
  Iter begin, Iter end, RefalFunction *callee
) {
  if (callee != 0 && func_trace_table.is_traced_func(callee->name.name)) {
    FILE *trace_out = func_trace_table.get_trace_outstream(callee->name.name);
    fprintf(
      trace_out, "//==================================================\n"
    );
    fprintf(trace_out, "Scope function: ");
    print_callee_option(begin, end, trace_out);
    fprintf(trace_out, "\n");
    fprintf(trace_out, "Traced call:   ");
    m_vm->print_seq(trace_out, begin, end, false);
    fprintf(
      trace_out, "//==================================================\n"
    );
  }
}

void refalrts::debugger::RefalDebugger::set_step_res(Iter begin, Iter end) {
  if (begin != 0 && end != 0) {
    m_res_begin = begin->prev;
    m_res_end = end->next;
  }
}

void refalrts::debugger::RefalDebugger::help_option() {
  printf("===============Common help for all allowed options==============\n");
  printf("%s, %s\t\t\t%s\n", s_H, s_HELP, "print help for debugger options");
  printf(
    "%s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT,
    "set breakpoint by function name\n"
    "\t\t\t  or step number (\'#\'ddd)"
  );
  printf(
    "%s, %s, %s\t\t%s\n",
    s_CL, s_CLEAR, s_RM,
    "remove breakpoint from function by its name\n"
    "\t\t\t  or from step by its number (\'#\'ddd)"
  );
  printf(
    "%s\t\t%s\n",
    s_STEPLIMIT, "set limit for step number; there will be breakpoint"
  );
  printf(
    "%s\t\t%s\n",
    s_MEMORYLIMIT,
    "set limit for memory node number; there will be\n"
      "\t\t\t  breakpoint"
  );
  printf("%s, %s\t\t%s\n", s_TR, s_TRACE, "set up tracing for function");
  printf(
    "%s, %s\t\t%s\n", s_NOTR, s_NOTRACE, "remove tracing settings for function"
  );
  printf(
    "%s, %s\t\t\t%s\n", s_R, s_RUN, "continue program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_S, s_STEP, "make the only one step in program execution"
  );
  printf(
    "%s, %s\t\t\t%s\n",
    s_N, s_NEXT, "execute next active function until passive result"
  );
  printf("%s\t\t\t%s\n", s_VARS, "print the variable debug table");
  printf("%s, %s\t\t\t%s\n", s_P, s_PRINT, "print by parameter commands");
  printf(
    "  %s\t%s\n",
    "\'e.\'|\'t.\'|\'s.\'nnn", "print variable value by its name"
  );
  printf("  %s\t\t\t%s\n", s_CALL, "print current active expression");
  printf("  %s\t\t%s\n", s_CALLEE, "print the therm after \'<\'");
  printf(
    "  %s\t\t\t%s\n",
    s_ARG,
    "print the argument - the expression after\n"
    "\t\t\t  the callee-therm and before \'>\'"
  );
  printf("  %s\t\t\t%s\n", s_RES, "print the result of previous step");
  printf(
    "  %s, %s, %s\t%s\n",
    s_B, s_BREAK, s_BREAKPOINT, "print set of all placed breakpoints"
  );
  printf("  %s, %s\t\t%s\n", s_TR, s_TRACE, "print table of all traced functions");
  printf("%s\t\t\t%s\n", s_DOT, "repeat previous debugger command");
  printf("\n");
  printf("================================================================\n");
}

void refalrts::debugger::RefalDebugger::break_option(const char *arg) {
  if (arg[0] == '#') {
    int step_break = atoi(arg+1);
    break_set.add_breakpoint(step_break);
  } else {
    break_set.add_breakpoint(arg);
  }
}

void refalrts::debugger::RefalDebugger::clear_option(const char *arg) {
  if (arg[0] == '#') {
    int step_break = atoi(arg+1);
    break_set.rm_breakpoint(step_break);
  } else {
    break_set.rm_breakpoint(arg);
  }
}

void refalrts::debugger::RefalDebugger::print_callee_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  Iter callee_end = callee;
  if (is_open_bracket(callee)) {
    callee_end = callee->link_info;
  }

  m_vm->print_seq(out, callee, callee_end, false);
}

void refalrts::debugger::RefalDebugger::print_arg_option(
  refalrts::Iter begin, refalrts::Iter end, FILE *out
) {
  move_left(begin, end);
  move_right(begin, end);

  Iter callee = 0;
  tvar_left(callee, begin, end);

  m_vm->print_seq(out, begin, end, false);
}

void refalrts::debugger::RefalDebugger::print_res_option(FILE *out) {
  if (m_res_begin != 0 && m_res_end != 0) {
    m_vm->print_seq(out, m_res_begin->next, m_res_end->prev, false);
  } else {
    fprintf(out, "[NONE]\n");
  }
}

bool refalrts::debugger::RefalDebugger::print_var_option(
  const char *var_name, FILE *out
) {
  if (var_name[1] == '.') {
    switch(var_name[0]) {
      case 'e':
      case 's':
      case 't':
        var_debug_table.print_var(var_name, out);
        break;
      default:
        refalrts_switch_default_violation(var_name[0]);
    }
    // распозналось, как имя переменной
    // пусть и с неправильным типом в одной из веток
    close_out(out);
    return true;
  }
  // не может быть именем переменной
  close_out(out);
  return false;
}

namespace {

bool str_equal(const char *lhs, const char *rhs) {
  return strcmp(lhs, rhs) == 0;
}

} // безымянное namespace

refalrts::FnResult refalrts::debugger::RefalDebugger::debugger_loop(
  refalrts::Iter begin, refalrts::Iter end
) {
  char debcmd[16] = {0};
  char strparam[cMaxLen] = {0};
  for ( ; ; ) {
    printf("debug>");
    bool ok = fscanf(m_in, "%15s", debcmd) == 1;
    if (! ok) {
      break;
    }
    if (str_equal(debcmd, s_H) || str_equal(debcmd, s_HELP)) {
      help_option();
    } else if (
      str_equal(debcmd, s_B)
      || str_equal(debcmd, s_BREAK)
      || str_equal(debcmd, s_BREAKPOINT)
    ) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        break_option(strparam);
      }
    } else if (
      str_equal(debcmd, s_CL)
      || str_equal(debcmd, s_CLEAR)
      || str_equal(debcmd, s_RM)
    ) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        clear_option(strparam);
      }
    } else if (str_equal(debcmd, s_STEPLIMIT)) {
      int step_lim = 0;
      ok = fscanf(m_in, "%d", &step_lim) == 1;
      if (ok) {
        break_set.add_breakpoint(m_vm->step_counter()+step_lim);
      }
    } else if (str_equal(debcmd, s_MEMORYLIMIT)) {
      ok = fscanf(m_in, "%u", &m_memory_limit) == 1;
      (void) ok;
    } else if (str_equal(debcmd, s_TR) || str_equal(debcmd, s_TRACE)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        func_trace_table.trace_func(strparam, get_out());
      }
    } else if (str_equal(debcmd, s_NOTR) || str_equal(debcmd, s_NOTRACE)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (ok) {
        func_trace_table.notrace_func(strparam);
      }
    } else if (
      str_equal(debcmd, s_R)
      || str_equal(debcmd, s_RUN)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_RUN))
    ) {
      m_dot = s_RUN;
      break;
    } else if (
      str_equal(debcmd, s_S)
      || str_equal(debcmd, s_STEP)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_STEP))
    ) {
      m_step_numb = m_vm->step_counter()+1;
      m_dot = s_STEP;
      break;
    } else if (str_equal(debcmd, s_Q) || str_equal(debcmd, s_QUIT)) {
      m_vm->set_return_code(0);
      return cExit;
    } else if (
      str_equal(debcmd, s_N)
      || str_equal(debcmd, s_NEXT)
      || (str_equal(debcmd, s_DOT) && str_equal(m_dot, s_NEXT))
    ) {
      m_next_expr = m_vm->stack_ptr();
      m_dot = s_NEXT;
      break;
    } else if (str_equal(debcmd, s_VARS)) {
      FILE *out = get_out();
      var_debug_table.print(out);
      close_out(out);
    } else if (str_equal(debcmd, s_P) || str_equal(debcmd, s_PRINT)) {
      ok = fscanf(m_in, "%1023s", strparam) == 1;
      if (! ok) {
        continue;
      }
      FILE *out = get_out();
      if (str_equal(strparam, s_ARG)) {
        print_arg_option(begin, end, out);
      } else if (str_equal(strparam, s_CALL)) {
        m_vm->print_seq(out, begin, end, true);
      } else if (str_equal(strparam, s_CALLEE)) {
        print_callee_option(begin, end, out);
      } else if (str_equal(strparam, s_RES)) {
        print_res_option(out);
      } else if (
        str_equal(strparam, s_B)
        || str_equal(strparam, s_BREAK)
        || str_equal(strparam, s_BREAKPOINT)
      ) {
        break_set.print(out);
      } else if (str_equal(strparam, s_TR) || str_equal(strparam, s_TRACE)) {
        func_trace_table.print(out);
      } else if (! print_var_option(strparam, out)) {
        fprintf(
          stderr,
          "Unrecognised print option is found: %s \"%s\"\n",
          debcmd, strparam
        );
      }
      close_out(out);
    } else if (! print_var_option(debcmd, get_out())) {
      fprintf(stderr, "Unrecognised option is found: \"%s\"\n", debcmd);
    }
  }
  return refalrts::cSuccess;
}

refalrts::FnResult
refalrts::debugger::RefalDebugger::handle_function_call(
  refalrts::Iter begin, refalrts::Iter end, refalrts::RefalFunction *callee
) {
  debug_trace(begin, end, callee);
  if (is_debug_stop(begin, callee)) {
    printf(
      "Step #%d; Function <%s ...>\n",
      m_vm->step_counter(), callee == 0 ? "" : callee->name.name
    );
    if (debugger_loop(begin, end) == refalrts::cExit) {
      return cExit;
    }
  }
  var_debug_table.clear();
  set_step_res(begin, end);

  return refalrts::cSuccess;
}

refalrts::Debugger *refalrts::debugger::create_debugger(refalrts::VM *vm) {
  return new RefalDebugger(vm);
}

int refalrts::debugger::find_debugger_flag(int argc, char **argv) {
  int i = 1;
  while (i < argc && ! str_equal(argv[i], "++enable+debugger++")) {
    ++i;
  }

  if (i < argc) {
    return i;
  } else {
    return -1;
  }
}
