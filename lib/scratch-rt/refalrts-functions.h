#ifndef RefalRTS_FUNCTIONS_H_
#define RefalRTS_FUNCTIONS_H_

#include <string>
#include <vector>

#include "refalrts.h"


namespace refalrts {

struct RASLCommand;
class Module;

struct RefalFunction {
  const RASLCommand *rasl;
  std::string base_name;
  RefalFuncName name;
  Module *module;

  RefalFunction(const RASLCommand rasl[], RefalFuncName name)
    : rasl(rasl)
    , base_name(name.name)
    , name(base_name.c_str(), name.cookie1, name.cookie2)
    , module(0)
  {
    /* пусто */
  }

  virtual ~RefalFunction() {
    /* пусто */
  }

  void deactivate();
};

struct RefalNativeFunction: public RefalFunction {
  RefalFunctionPtr ptr;
  RefalFunction **functions;
  const RefalIdentifier *idents;

  RefalNativeFunction(
    RefalFunction **functions,
    const RefalIdentifier *idents,
    RefalFuncName name
  )
    : RefalFunction(run, name)
    , ptr(0)
    , functions(functions)
    , idents(idents)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalSwap: public RefalFunction {
  Iter left_call;

  RefalSwap(RefalFuncName name)
    : RefalFunction(run, name), left_call()
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalEmptyFunction: public RefalFunction {
  RefalEmptyFunction(RefalFuncName name)
    : RefalFunction(run, name)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionRasl: public RefalFunction {
  RefalCondFunctionRasl(RefalFuncName name)
    : RefalFunction(run, name)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};

struct RefalCondFunctionNative: public RefalFunction {
  RefalCondFunctionNative(RefalFuncName name)
    : RefalFunction(run, name)
  {
    /* пусто */
  }

  static const RASLCommand run[];
};


/*
  Для эффективной обработки на современных процессорах
  команду выровляли по размеру в 4 байта.
*/
struct RASLCommand {
  unsigned char cmd;
  unsigned char val1;
  unsigned char val2;
  unsigned char bracket;
};

struct StringItem {
  const char *string;
  UInt32 string_len;
};

struct RASLFunction: public RefalFunction {
  RefalFunction **functions;
  const RefalIdentifier *idents;
  const RefalNumber *numbers;
  const StringItem *strings;
  const char *filename;

  RASLFunction(
    RefalFuncName name,
    const RASLCommand *rasl,
    RefalFunction **functions,
    const RefalIdentifier *idents,
    const RefalNumber *numbers,
    const StringItem *strings,
    const char *filename
  )
    : RefalFunction(rasl, name)
    , functions(functions)
    , idents(idents)
    , numbers(numbers)
    , strings(strings)
    , filename(filename)
  {
    /* пусто */
  }
};

struct ModuleRepresentant : public RefalFunction {
  static const UInt32 FAKE_COOKIE = static_cast<UInt32>(-1);

  ModuleRepresentant(const std::string& name, Module *module)
    : RefalFunction(
        RefalEmptyFunction::run,
        RefalFuncName(name.c_str(), FAKE_COOKIE, FAKE_COOKIE)
      )
    , module(module)
  {
    /* пусто */
  }

  ~ModuleRepresentant() {
    module = 0;
  }

  Module *module;
};

struct Metatable: public RefalFunction {
  struct Pair {
    UInt32 ident;
    UInt32 func;
  };

  std::vector<Pair> pairs;
  RefalFunction **functions;
  const RefalIdentifier *idents;

  Metatable(
    RefalFuncName name,
    RefalFunction **functions,
    const RefalIdentifier *idents
  )
    : RefalFunction(RefalEmptyFunction::run, name)
    , functions(functions)
    , idents(idents)
  {
    /* пусто */
  }

  RefalFunction *lookup(const RefalIdentifier ident);
  RefalFunction *lookup(const char *);
};


} // namespace refalrts


#endif // RefalRTS_FUNCTIONS_H_
