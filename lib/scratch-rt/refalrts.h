#ifndef RefalRTS_H_
#define RefalRTS_H_

#include <stddef.h>


namespace refalrts {

class Domain;
class Module;
class VM;

enum FnResult {
  cRecognitionImpossible = 0,
  cNoMemory = 1,
  cSuccess = 2,
  cExit = 3,
  cStepLimit = 4,
  cIdentTableLimit = 5
};

struct Node;

typedef struct Node *NodePtr;

typedef struct Node *Iter;

enum DataTag {
  cDataIllegal = 0,
  cDataChar,
  cDataNumber,
  cDataFunction,
  cDataIdentifier,
  cDataOpenADT, cDataCloseADT,
  cDataOpenBracket, cDataCloseBracket,
  cDataOpenCall, cDataCloseCall,
  cDataFile,
  cDataClosure,
  cDataUnwrappedClosure,
  cDataClosureHead,
  cData_COUNT
};

typedef FnResult (*RefalFunctionPtr) (VM *vm, Iter begin, Iter end);

typedef unsigned int UInt32;

struct RefalFuncName {
  const char *name;
  UInt32 cookie1;
  UInt32 cookie2;

  RefalFuncName(const char *name, UInt32 cookie1, UInt32 cookie2)
    : name(name), cookie1(cookie1), cookie2(cookie2)
  {
    /* пусто */
  }
};

struct RefalFunction;

RefalFunction *lookup_function_in_domain(VM *vm, const RefalFuncName& name);
RefalFunction *lookup_function_in_module(
  VM *vm, Module *module, const RefalFuncName& name
);

inline RefalFunction *lookup_function_in_domain(
  VM *vm, UInt32 cookie1, UInt32 cookie2, const char *name
) {
  return lookup_function_in_domain(vm, RefalFuncName(name, cookie1, cookie2));
}

inline RefalFunction *lookup_function_in_module(
  VM *vm, Module *module, UInt32 cookie1, UInt32 cookie2, const char *name
) {
  return lookup_function_in_module(
    vm, module, RefalFuncName(name, cookie1, cookie2)
  );
}

const RefalFuncName *function_name(const RefalFunction *func);

typedef UInt32 RefalNumber;

class RefalIdentDescr;
typedef const RefalIdentDescr *RefalIdentifier;

class RefalIdentDescr {
  // Запрет копирования
  RefalIdentDescr(const RefalIdentDescr&);
  RefalIdentDescr& operator=(const RefalIdentDescr&);

  RefalIdentDescr(const char *name);

public:
  ~RefalIdentDescr();

  const char *name() const {
    return m_name;
  }

  static RefalIdentifier implode(Domain *domain, const char *name);

private:
  const char *m_name;
};

inline RefalIdentifier ident_implode(Domain *domain, const char *name) {
  return RefalIdentDescr::implode(domain, name);
}

RefalIdentifier ident_implode(VM *vm, const char *name);

struct Node {
  NodePtr prev;
  NodePtr next;
  DataTag tag;
  union {
    char char_info;
    RefalNumber number_info;
    RefalFunction *function_info;
    RefalIdentifier ident_info;
    NodePtr link_info;
    void *file_info;
  };

  Node() {}

  Node(NodePtr prev, NodePtr next)
    : prev(prev), next(next), tag(cDataIllegal)
  {
    file_info = 0;
  }
};

extern void use(Iter&);

void zeros(Iter context[], int size);

void load_constants(
  Iter arg_begin,
  RefalFunction ***functions,
  const RefalIdentifier **identifiers
);

// Операции реинициализации

extern void reinit_svar(Iter res, Iter sample);
extern void reinit_char(Iter res, char ch);
extern void update_char(Iter res, char ch);
extern void reinit_number(Iter res, RefalNumber num);
extern void update_number(Iter res, RefalNumber num);
extern void reinit_name(Iter res, RefalFunction *func);
extern void update_name(Iter res, RefalFunction *func);
extern void reinit_ident(Iter res, RefalIdentifier ident);
extern void update_ident(Iter res, RefalIdentifier ident);

extern void reinit_open_bracket(Iter res);
extern void reinit_close_bracket(Iter res);

extern void reinit_open_adt(Iter res);
extern void reinit_close_adt(Iter res);

extern void reinit_open_call(Iter res);
extern void reinit_close_call(Iter res);

extern void reinit_closure_head(Iter res);
extern void reinit_unwrapped_closure(Iter res, Iter head);


// Операции распознавания образца

extern void move_left(Iter& begin, Iter& end);
extern void move_right(Iter& begin, Iter& end);
extern bool empty_seq(Iter begin, Iter end);

extern bool function_term(const RefalFunction *func, Iter pos);
extern Iter function_left(const RefalFunction *func, Iter& first, Iter& last);
extern Iter function_right(const RefalFunction *func, Iter& first, Iter& last);

extern bool char_term(char ch, Iter& pos);
extern Iter char_left(char ch, Iter& first, Iter& last);
extern Iter char_right(char ch, Iter& first, Iter& last);

extern bool number_term(RefalNumber num, Iter& pos);
extern Iter number_left(RefalNumber num, Iter& first, Iter& last);
extern Iter number_right(RefalNumber num, Iter& first, Iter& last);

extern bool ident_term(RefalIdentifier ident, Iter& pos);
extern Iter ident_left(RefalIdentifier ident, Iter& first, Iter& last);
extern Iter ident_right(RefalIdentifier ident, Iter& first, Iter& last);

extern Iter adt_term(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter pos
);
extern Iter adt_left(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter& first, Iter &last
);
extern Iter adt_right(
  Iter& res_first, Iter& res_last,
  const RefalFunction *tag,
  Iter& first, Iter &last
);

extern Iter call_left(
  Iter& res_first, Iter& res_last,
  Iter first, Iter last
);

extern void call_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket);
extern void adt_pointers(Iter left_bracket, Iter& tag, Iter& right_bracket);
extern void bracket_pointers(Iter left_bracket, Iter& right_bracket);

extern bool brackets_term(Iter& res_first, Iter& res_last, Iter& pos);
extern Iter brackets_left(
  Iter& res_first, Iter& res_last, Iter& first, Iter& last
);
extern Iter brackets_right(
  Iter& res_first, Iter& res_last, Iter& first, Iter& last
);

extern bool svar_term(Iter svar, Iter pos);
extern bool svar_left(Iter& svar, Iter& first, Iter& last);
extern bool svar_right(Iter& svar, Iter& first, Iter& last);

extern refalrts::Iter tvar_left(Iter& tvar, Iter& first, Iter& last);
extern refalrts::Iter tvar_right(Iter& tvar, Iter& first, Iter& last);

extern bool repeated_stvar_term(VM *vm, Iter stvar_sample, Iter pos);
extern refalrts::Iter repeated_stvar_left(
  VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);
extern refalrts::Iter repeated_stvar_right(
  VM *vm, Iter& stvar, Iter stvar_sample, Iter& first, Iter& last
);

extern bool repeated_evar_left(
  VM *vm,
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool repeated_evar_right(
  VM *vm,
  Iter& evar_b, Iter& evar_e,
  Iter evar_b_sample, Iter evar_e_sample,
  Iter& first, Iter& last
);

extern bool open_evar_advance(
  Iter& evar_b, Iter& evar_e,
  Iter& first, Iter& last
);

extern unsigned read_chars(
  char buffer[], unsigned buflen, Iter& first, Iter& last
);

bool is_metatable(VM *vm, RefalFunction *func);
RefalFunction *function_for_ident(
  VM *vm, RefalFunction *metatable, RefalIdentifier ident
);
RefalFunction *function_for_name(
  VM *vm, RefalFunction *metatable, const char *name
);

// Операции построения результата

extern void reset_allocator(VM *vm);

extern void copy_evar(
  VM *vm, Iter& evar_res_b, Iter& evar_res_e,
  Iter evar_b_sample, Iter evar_e_sample
);

extern void copy_stvar(VM *vm, Iter& stvar_res, Iter stvar_sample);

extern void alloc_char(VM *vm, Iter& res, char ch);
extern void alloc_number(VM *vm, Iter& res, RefalNumber num);
extern void alloc_name(VM *vm, Iter& res, RefalFunction *func);
extern void alloc_ident(VM *vm, Iter& res, RefalIdentifier ident);
extern void alloc_open_adt(VM *vm, Iter& res);
extern void alloc_close_adt(VM *vm, Iter& res);
extern void alloc_open_bracket(VM *vm, Iter& res);
extern void alloc_close_bracket(VM *vm, Iter& res);
extern void alloc_open_call(VM *vm, Iter& res);
extern void alloc_close_call(VM *vm, Iter& res);
extern void alloc_closure_head(VM *vm, Iter& res);
extern void alloc_unwrapped_closure(VM *vm, Iter& res, Iter head);

#ifndef alloc_copy_svar
#define alloc_copy_svar alloc_copy_svar_
#endif

#ifndef alloc_copy_tvar
#define alloc_copy_tvar copy_stvar
#endif

extern void alloc_copy_evar(
  VM *vm, Iter& res, Iter evar_b_sample, Iter evar_e_sample
);
extern void alloc_copy_svar_(VM *vm, Iter& svar_res, Iter svar_sample);

extern void alloc_chars(
  VM *vm, Iter& res_b, Iter& res_e, const char buffer[], unsigned buflen
);
extern void alloc_string(VM *vm, Iter& res_b, Iter& res_e, const char *string);

typedef FnResult (*CheckedAllocFn)(VM *vm, void *data);
extern FnResult checked_alloc(VM *vm, CheckedAllocFn fn, void *data);

extern void push_stack(VM *vm, Iter call_bracket);
extern void link_brackets(Iter left, Iter right);

extern Iter splice_elem(Iter res, Iter elem);
extern Iter splice_stvar(Iter res, Iter var);
extern Iter splice_evar(Iter res, Iter first, Iter last);
extern void splice_to_freelist(VM *vm, Iter first, Iter last);
extern void splice_to_freelist_open(VM *vm, Iter before_first, Iter after_last);
extern Iter splice_from_freelist(VM *vm, Iter pos);

Iter unwrap_closure(Iter closure); // Развернуть замыкание
Iter wrap_closure(Iter closure); // Свернуть замыкание

// Профилирование

extern void this_is_generated_function(VM *vm);
extern void stop_sentence(VM *vm);
extern void start_e_loop(VM *vm);

enum PerformanceCounters {
  cPerformanceCounter_TotalTime,
  cPerformanceCounter_BuiltInTime,
  cPerformanceCounter_RuntimeTime,
  cPerformanceCounter_NativeTime,
  cPerformanceCounter_RefalTime,
  cPerformanceCounter_PatternMatchTime,
  cPerformanceCounter_BuildResultTime,
  cPerformanceCounter_TotalSteps,
  cPerformanceCounter_HeapSize,
  cPerformanceCounter_TEvarCopyTime,
  cPerformanceCounter_ContextCopyTime,
  cPerformanceCounter_RepeatTvarMatchTime,
  cPerformanceCounter_RepeatTvarMatchTimeOutsideECycle,
  cPerformanceCounter_RepeatEvarMatchTime,
  cPerformanceCounter_RepeatEvarMatchTimeOutsideECycle,
  cPerformanceCounter_OpenELoopTime,
  cPerformanceCounter_OpenELoopTimeClear,
  cPerformanceCounter_LinearRefalTime,
  cPerformanceCounter_LinearPatternTime,
  cPerformanceCounter_LinearResultTime,
  cPerformanceCounter_IdentsAllocated,
  cPerformanceCounter_COUNTERS_NUMBER
};

extern double ticks_per_second();
extern void read_performance_counters(VM *vm, double counters[]);

// Прочие функции

extern void set_return_code(VM *vm, int retcode);
extern FnResult recursive_call_main_loop(VM *vm);
extern void use_counter(unsigned& counter);
inline void set_return_code(VM *vm, RefalNumber retcode) {
  set_return_code(vm, static_cast<int>(retcode));
}

const char* arg(VM *vm, unsigned int param);

/*
  Функция производит печать рефал-выражения в поток file
  в том же формате, как и при отладочном дампе памяти.

  Переменная file представляет собой стандартный файловый
  поток FILE* из stdio.h. Сделана она была void* только
  для того, чтобы не включать сюда лишние заголовочные файлы
  (пусть даже и стандартные).
*/
void debug_print_expr(VM *vm, void *file, Iter first, Iter last);


/* Без этого атрибута GNU C++ выдаёт много предупреждений */
#if defined(__GNUC__)
__attribute__((noreturn))
#endif
void switch_default_violation_impl(
  const char *filename, int line_no, long bad_switch_value, const char *bad_expr
);

#define refalrts_switch_default_violation(bad_switch_value) \
  ( \
    ::refalrts::switch_default_violation_impl( \
      __FILE__, __LINE__, (bad_switch_value), #bad_switch_value \
    ) \
  )

struct NativeReference {
  const char *name;
  UInt32 cookie1;
  UInt32 cookie2;
  RefalFunctionPtr code;
  NativeReference *next;

  NativeReference(
    const char *name,
    UInt32 cookie1,
    UInt32 cookie2,
    RefalFunctionPtr code
  );

  RefalFuncName refal_func_name() const {
    return RefalFuncName(name, cookie1, cookie2);
  }
};


class GlobalRefBase {
  size_t m_offset;

protected:
  GlobalRefBase(size_t size);

  void *ptr(VM *vm);
};

template <typename T>
class GlobalRef: private GlobalRefBase {
  // Объединение более-менее обеспечивает выравнивание,
  // кроме того, требует чтобы тип T не имел нетривиальных
  // конструкторов (C++98).
  union Aligned {
    T t;
    void *p;
    double d;
  };

public:
  GlobalRef(size_t count = 1)
    : GlobalRefBase(sizeof(Aligned) * count)
  {
    /* пусто */
  }

  T& ref(VM *vm, size_t index = 0) {
    return static_cast<T*>(ptr(vm))[index];
  }
};

Module *current_module(VM *vm);

enum ModuleLoadingError {
  cModuleLoadingError_ModuleNotFound,
  cModuleLoadingError_CantObtainModuleName,
  cModuleLoadingError_InvalidRasl,
  cModuleLoadingError_CantAllocMemory,
  cModuleLoadingError_CantAllocIdent,
  cModuleLoadingError_UnresolvedExternal,
  cModuleLoadingError_UnresolvedNative,
  cModuleLoadingError_FunctionIsRedeclared,
  cModuleLoadingError_CantLoadNativeModule,
  cModuleLoadingError_NativeModuleEntryPointNotFound,
};

struct ModuleLoadingErrorDetail {
  const char *message;
  RefalFuncName func_name;
  const char *module_name;

  ModuleLoadingErrorDetail()
    : message("")
    , func_name(RefalFuncName("", 0, 0))
    , module_name("")
  {
    /* пусто */
  }
};

typedef void (*LoadModuleEvent)(
  ModuleLoadingError error,
  ModuleLoadingErrorDetail *detail,
  void *callback_data
);

Module *load_module(
  VM *vm, Iter pos, const char *name,
  LoadModuleEvent event, void *callback_data,
  FnResult& result
);
void unload_module(VM *vm, Iter pos, Module *module, FnResult& result);

RefalFunction *load_module_rep(
  VM *vm, Iter pos, const char *name,
  LoadModuleEvent event, void *callback_data,
  FnResult& result
);
bool unload_module(
  VM *vm, Iter pos, RefalFunction *module_rep, FnResult& result
);

Module *module_from_function_rep(VM *vm, RefalFunction *module_rep);

// Особое состояние во время выполнения загрузки и выгрузки модулей
// (во время выполнения их кода инициализации и финализации).
// Запрещено в это время загружать другие модули и вызывать <Exit …>
bool dangerous_state(VM *vm);


} // namespace refalrts

#endif // RefalRTS_H_
