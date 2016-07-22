// Automatically generated file. Don't edit!
#include "refalrts.h"


extern refalrts::FnResult CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Dec(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Fetch(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Inc(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult Map(refalrts::Iter arg_begin, refalrts::Iter arg_end);
extern refalrts::FnResult UnBracket(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen_K(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult LengthComp(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PreparePatternsFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult PreparePatternsFastGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult SplitReps_Brackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UnBracketAndNum(refalrts::Iter arg_begin, refalrts::Iter arg_end);
static refalrts::FnResult UnBracketInBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end);

// identifier #ADT_Brackets
template <typename SREFAL_PARAM_INT>
struct ident_ADT_Brackets {
  static const char *name() {
    return "ADT_Brackets";
  }
};

// identifier #Atom
template <typename SREFAL_PARAM_INT>
struct ident_Atom {
  static const char *name() {
    return "Atom";
  }
};

// identifier #Brackets
template <typename SREFAL_PARAM_INT>
struct ident_Brackets {
  static const char *name() {
    return "Brackets";
  }
};

// identifier #E
template <typename SREFAL_PARAM_INT>
struct ident_E {
  static const char *name() {
    return "E";
  }
};

// identifier #Eq
template <typename SREFAL_PARAM_INT>
struct ident_Eq {
  static const char *name() {
    return "Eq";
  }
};

// identifier #NotEq
template <typename SREFAL_PARAM_INT>
struct ident_NotEq {
  static const char *name() {
    return "NotEq";
  }
};

// identifier #S
template <typename SREFAL_PARAM_INT>
struct ident_S {
  static const char *name() {
    return "S";
  }
};

// identifier #T
template <typename SREFAL_PARAM_INT>
struct ident_T {
  static const char *name() {
    return "T";
  }
};

static refalrts::FnResult UnBracketAndNum(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & UnBracketAndNum/4 s.Num#1/9 (/7 e.Any#1/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    // closed e.Any#1 as range 5
    {refalrts::icsVarLeft, 0, 9, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & UnBracketAndNum/4 s.Num#1/9 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: s.Num1 #9/0 } Tile{ AsIs: e.Any#1/5 } Tile{ ]] }
    {refalrts::icReinitSVar, 0, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & UnBracketAndNum/4 s.Num#1/9 (/7 e.Any#1/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.Any#1 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & UnBracketAndNum/4 s.Num#1/9 (/7 {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: s.Num1 #9/0 } Tile{ AsIs: e.Any#1/5 } Tile{ ]] }
  refalrts::reinit_svar( context[0], context[9] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult UnBracketInBrackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 16 elems
  refalrts::Iter context[16];
  refalrts::zeros( context, 16 );
#ifdef INTERPRET
  using refalrts::functions;
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S E 
    //GLOBAL GEN:S E 
    // </0 & UnBracketInBrackets/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //1 ((E ))
    // </0 & UnBracketInBrackets/4 1/5 (/8 (/12 e.Smth#1/10 )/13 )/9 >/1
    {refalrts::icNumTerm, 0, 1, 5},
    {refalrts::icSave, 0, 14, 2},
    {refalrts::icBracketLeftSave, 0, 6, 14},
    {refalrts::icBracketLeftSave, 0, 10, 6},
    {refalrts::icEmpty, 0, 0, 6},
    {refalrts::icEmpty, 0, 0, 14},
    // closed e.Smth#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 1/5 (/8 (/12 {REMOVED TILE}  )/13 )/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Smth#1/10 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S E 
    // </0 & UnBracketInBrackets/4 s.Other#1/5 e.Any#1/2 >/1
    // closed e.Any#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 s.Other#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Any#1/2 } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S E 
  //GLOBAL GEN:S E 
  // </0 & UnBracketInBrackets/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    //1 ((E ))
    // </0 & UnBracketInBrackets/4 1/5 (/8 (/12 e.Smth#1/10 )/13 )/9 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    context[14] = context[2];
    context[15] = context[3];
    context[6] = 0;
    context[7] = 0;
    context[8] = refalrts::brackets_left( context[6], context[7], context[14], context[15] );
    if( ! context[8] )
      continue;
    refalrts::bracket_pointers(context[8], context[9]);
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[6], context[7] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[6], context[7] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    // closed e.Smth#1 as range 10

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 1/5 (/8 (/12 {REMOVED TILE}  )/13 )/9 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: e.Smth#1/10 } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S E 
  // </0 & UnBracketInBrackets/4 s.Other#1/5 e.Any#1/2 >/1
  // closed e.Any#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & UnBracketInBrackets/4 s.Other#1/5 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: e.Any#1/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PreparePatternsFastGen_Aux_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 24 elems
  refalrts::Iter context[24];
  refalrts::zeros( context, 24 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_Atom<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(S E )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icsVarLeft, 0, 9, 5},
    // closed e.idxBV#0 as range 5
    {refalrts::icOnFailGoTo, +16, 0, 0},
    //(S (E )((E )))
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 s.type#2/9 (/12 e.idx#2/10 )/13 (/16 (/20 e.Replacement#2/18 )/21 )/17 )/8 >/1
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icBracketLeftSave, 0, 10, 22},
    {refalrts::icBracketLeftSave, 0, 14, 22},
    {refalrts::icBracketLeftSave, 0, 18, 14},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmpty, 0, 0, 22},
    // closed e.idx#2 as range 10
    // closed e.Replacement#2 as range 18
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  (/12 e.idx#2/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.type#2/9 } Tile{ HalfReuse: '$'/13 AsIs: (/16 AsIs: (/20 AsIs: e.Replacement#2/18 AsIs: )/21 AsIs: )/17 AsIs: )/8 } Tile{ ]] }
    {refalrts::icReinitChar, 0, '$', 13},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 20, 21, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 13, 8, 0},
    {refalrts::icSpliceTile, 7, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //(#BracketsE )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 9},
    // closed e.inBrackets#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: 1/4 HalfReuse: </7 HalfReuse: & PreparePatternsFastGen_Aux/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 10},
    {refalrts::icReinitIdent, 0, 2, 0},
    {refalrts::icReinitInt, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 0, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 10, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 10, 10, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //(#ADT_Brackets(E )E )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 9},
    {refalrts::icSave, 0, 22, 5},
    {refalrts::icBracketLeftSave, 0, 10, 22},
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 22(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/14 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen_Aux/4 } Tile{ AsIs: e.inBrackets#2/22(5) } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocInt, 0, 1, 14},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 22},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(#AtomE )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # Atom/9 e.any#2/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 0, 9},
    // closed e.any#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.any#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[3];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(S E )
  // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  do {
    refalrts::start_sentence();
    //(S (E )((E )))
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 s.type#2/9 (/12 e.idx#2/10 )/13 (/16 (/20 e.Replacement#2/18 )/21 )/17 )/8 >/1
    context[22] = context[5];
    context[23] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[22], context[23] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = 0;
    context[19] = 0;
    context[20] = refalrts::brackets_left( context[18], context[19], context[14], context[15] );
    if( ! context[20] )
      continue;
    refalrts::bracket_pointers(context[20], context[21]);
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[22], context[23] ) )
      continue;
    // closed e.idx#2 as range 10
    // closed e.Replacement#2 as range 18

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  (/12 e.idx#2/10 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: s.type#2/9 } Tile{ HalfReuse: '$'/13 AsIs: (/16 AsIs: (/20 AsIs: e.Replacement#2/18 AsIs: )/21 AsIs: )/17 AsIs: )/8 } Tile{ ]] }
    refalrts::reinit_char( context[13], '$' );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[20], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[8] );
    res = refalrts::splice_evar( res, context[7], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#BracketsE )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # Brackets/9 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Brackets<int>::name, context[9] ) )
      continue;
    // closed e.inBrackets#2 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/10 Tile{ HalfReuse: # Brackets/0 HalfReuse: 1/4 HalfReuse: </7 HalfReuse: & PreparePatternsFastGen_Aux/9 AsIs: e.inBrackets#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_open_bracket( context[10] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_ident( context[0], & ident_Brackets<int>::name );
    refalrts::reinit_number( context[4], 1UL );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[10], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[0];
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ADT_Brackets(E )E )
    // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 e.inBrackets#2/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_ADT_Brackets<int>::name, context[9] ) )
      continue;
    context[22] = context[5];
    context[23] = context[6];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[22], context[23] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    // closed e.inBrackets#2 as range 22(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/14 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen_Aux/4 } Tile{ AsIs: e.inBrackets#2/22(5) } Tile{ HalfReuse: >/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_number( context[14], 1UL ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(#AtomE )
  // </0 & lambda_PreparePatternsFastGen_Aux_0/4 (/7 # Atom/9 e.any#2/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_Atom<int>::name, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.any#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_PreparePatternsFastGen_Aux_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # Atom/9 AsIs: e.any#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PreparePatternsFastGen_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PreparePatternsFastGen_Aux_0, "lambda_PreparePatternsFastGen_Aux_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & PreparePatternsFastGen_Aux/4 e.Pattern#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Pattern#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_Aux_0/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & PreparePatternsFastGen_Aux/4 e.Pattern#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Pattern#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_Aux_0/4 AsIs: e.Pattern#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PreparePatternsFastGen_Aux_0, "lambda_PreparePatternsFastGen_Aux_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_PreparePatternsFastGen_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & lambda_PreparePatternsFastGen_0/4 (/7 e.sent#2/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.sent#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PreparePatternsFastGen_Aux/7 AsIs: e.sent#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 4},
    {refalrts::icReinitFunc, 0, 0, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & lambda_PreparePatternsFastGen_0/4 (/7 e.sent#2/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.sent#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: </4 HalfReuse: & PreparePatternsFastGen_Aux/7 AsIs: e.sent#2/5 HalfReuse: >/8 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_call( context[4] );
  refalrts::reinit_name( context[7], PreparePatternsFastGen_Aux, "PreparePatternsFastGen_Aux" );
  refalrts::reinit_close_call( context[8] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[1] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[4] );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult PreparePatternsFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_PreparePatternsFastGen_0, "lambda_PreparePatternsFastGen_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & PreparePatternsFastGen/4 e.all#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.all#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_0/4 AsIs: e.all#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & PreparePatternsFastGen/4 e.all#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.all#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_PreparePatternsFastGen_0/4 AsIs: e.all#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_PreparePatternsFastGen_0, "lambda_PreparePatternsFastGen_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SplitReps_Aux(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 38 elems
  refalrts::Iter context[38];
  refalrts::zeros( context, 38 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Dec, "Dec" },
    { SplitReps_Aux, "SplitReps_Aux" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S E (E )(E )
    // </0 & SplitReps_Aux/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxVVB#0 as range 9
    // closed e.idxVVTB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +5, 0, 0},
    //0 E (E )(E )
    // </0 & SplitReps_Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icNumTerm, 0, 0, 13},
    // closed e.Any#1 as range 2
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & SplitReps_Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //S (#BracketsS )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    {refalrts::icIdentLeftSave, 18, 1, 14},
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 19, 14},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # Brackets/1 } s.ONum#1/19/20 )/21 )/22 >/23 Tile{ ]] }
    {refalrts::icCopySTVar, 20, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 1, 1},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 22, 0},
    {refalrts::icLinkBrackets, 8, 21, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 23, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    //S (#BracketsS ((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    {refalrts::icIdentLeftSave, 18, 1, 14},
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 19, 14},
    {refalrts::icBracketLeftSave, 0, 20, 14},
    {refalrts::icBracketLeftSave, 0, 24, 20},
    {refalrts::icEmpty, 0, 0, 20},
    // closed e.Rep#1 as range 24
    // closed e.Replacements#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 } Tile{ HalfReuse: # Brackets/22 HalfReuse: s.ONum1 #19/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 } Tile{ AsIs: e.Replacements#1/14 } Tile{ AsIs: )/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitIdent, 0, 1, 22},
    {refalrts::icReinitSVar, 0, 19, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 11, 23, 0},
    {refalrts::icLinkBrackets, 12, 27, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 7, 7, 0},
    {refalrts::icSpliceTile, 22, 23, 0},
    {refalrts::icSpliceTile, 11, 12, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //S (#ADT_Brackets(E )S )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icBracketLeftSave, 0, 19, 14},
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 23, 14},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/1 } (/24 e.Name#1/19/25 )/27 s.ONum#1/23/28 )/29 )/30 >/31 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icCopyEVar, 25, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icCopySTVar, 28, 23, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 30, 0},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 31, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S (#ADT_Brackets(E )S ((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 (/26 (/30 e.Rep#1/28 )/31 )/27 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icBracketLeftSave, 0, 19, 14},
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 23, 14},
    {refalrts::icBracketLeftSave, 0, 24, 14},
    {refalrts::icBracketLeftSave, 0, 28, 24},
    {refalrts::icEmpty, 0, 0, 24},
    // closed e.Rep#1 as range 28
    // closed e.Replacements#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/26 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 } Tile{ AsIs: e.Rep#1/28 } Tile{ HalfReuse: )/11 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/1 } Tile{ AsIs: (/30 } e.Name#1/19/32 Tile{ AsIs: )/31 HalfReuse: s.ONum1 #23/27 AsIs: e.Replacements#1/14 AsIs: )/17 } )/34 >/35 Tile{ ]] }
    {refalrts::icCopyEVar, 32, 19, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 11},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitIdent, 0, 0, 1},
    {refalrts::icReinitSVar, 0, 23, 27},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 34, 0},
    {refalrts::icLinkBrackets, 8, 17, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icLinkBrackets, 26, 12, 0},
    {refalrts::icLinkBrackets, 16, 11, 0},
    {refalrts::icLinkBrackets, 21, 22, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 34, 35, 0},
    {refalrts::icSpliceTile, 31, 17, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 16, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 26, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //S (S '$'((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 '$'/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.otherRep#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 18, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icBracketLeftSave, 0, 20, 14},
    {refalrts::icBracketLeftSave, 0, 24, 20},
    {refalrts::icEmpty, 0, 0, 20},
    // closed e.Rep#1 as range 24
    // closed e.otherRep#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } '$'/28 Tile{ AsIs: e.otherRep#1/14 } )/29 )/30 >/31 Tile{ ]] }
    {refalrts::icAllocChar, 0, '$', 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 31},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitSVar, 0, 18, 1},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 30, 0},
    {refalrts::icLinkBrackets, 8, 29, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 16, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //S (S S E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 s.Type#1/19 e.Value#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icSave, 0, 36, 2},
    {refalrts::icBracketLeftSave, 0, 14, 36},
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icsVarLeft, 0, 18, 14},
    {refalrts::icsVarLeft, 0, 19, 14},
    // closed e.Value#1 as range 14
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: s.Type#1/19 AsIs: e.Value#1/14 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } s.Type#1/19/20 e.Value#1/14/21 )/23 )/24 >/25 Tile{ ]] }
    {refalrts::icCopySTVar, 20, 19, 0},
    {refalrts::icCopyEVar, 21, 14, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 8},
    {refalrts::icReinitSVar, 0, 18, 1},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 24, 0},
    {refalrts::icLinkBrackets, 8, 23, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 25, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 36},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 HalfReuse: )/7 } </15 & SplitReps_Aux/16 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Num#1/13 } >/17 Tile{ AsIs: e.Else#1/5 } (/18 )/19 (/20 Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 15},
    {refalrts::icAllocFunc, 0, 1, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 15},
    {refalrts::icLinkBrackets, 20, 8, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 14, 7, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 18, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 11, 7, 0},
    {refalrts::icSpliceTile, 14, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[7];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:S E (E )(E )
  // </0 & SplitReps_Aux/4 s.idx#0/13 e.idxV#0/2 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    //0 E (E )(E )
    // </0 & SplitReps_Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    if( ! refalrts::number_term( 0UL, context[13] ) )
      continue;
    // closed e.Any#1 as range 2
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & SplitReps_Aux/4 0/13 e.Any#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (#BracketsS )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # Brackets/1 } s.ONum#1/19/20 )/21 )/22 >/23 Tile{ ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], & ident_Brackets<int>::name );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[22] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[23] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (#BracketsS ((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # Brackets/18 s.ONum#1/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Rep#1 as range 24
    // closed e.Replacements#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 HalfReuse: (/12 } Tile{ HalfReuse: # Brackets/22 HalfReuse: s.ONum1 #19/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Else#1/5 } Tile{ AsIs: (/16 AsIs: # Brackets/18 AsIs: s.ONum#1/19 } Tile{ AsIs: e.Replacements#1/14 } Tile{ AsIs: )/17 } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_ident( context[22], & ident_Brackets<int>::name );
    refalrts::reinit_svar( context[26], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[11], context[23] );
    refalrts::link_brackets( context[12], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (#ADT_Brackets(E )S )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/1 } (/24 e.Name#1/19/25 )/27 s.ONum#1/23/28 )/29 )/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[28], context[23]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], & ident_ADT_Brackets<int>::name );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[31] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (#ADT_Brackets(E )S ((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 # ADT_Brackets/18 (/21 e.Name#1/19 )/22 s.ONum#1/23 (/26 (/30 e.Rep#1/28 )/31 )/27 e.Replacements#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[14], context[15] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    // closed e.Name#1 as range 19
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[23], context[14], context[15] ) )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[14], context[15] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[24], context[25] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    if( ! refalrts::empty_seq( context[24], context[25] ) )
      continue;
    // closed e.Rep#1 as range 28
    // closed e.Replacements#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/26 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: # ADT_Brackets/18 AsIs: (/21 AsIs: e.Name#1/19 AsIs: )/22 AsIs: s.ONum#1/23 } Tile{ AsIs: e.Rep#1/28 } Tile{ HalfReuse: )/11 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: # ADT_Brackets/1 } Tile{ AsIs: (/30 } e.Name#1/19/32 Tile{ AsIs: )/31 HalfReuse: s.ONum1 #23/27 AsIs: e.Replacements#1/14 AsIs: )/17 } )/34 >/35 Tile{ ]] }
    if (! refalrts::copy_evar(context[32], context[33], context[19], context[20]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[35] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_bracket( context[11] );
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_ident( context[1], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_svar( context[27], context[23] );
    refalrts::push_stack( context[35] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[34] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[26], context[12] );
    refalrts::link_brackets( context[16], context[11] );
    refalrts::link_brackets( context[21], context[22] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[34], context[35] );
    res = refalrts::splice_evar( res, context[31], context[17] );
    res = refalrts::splice_evar( res, context[32], context[33] );
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[26], context[26] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (S '$'((E ))E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 '$'/19 (/22 (/26 e.Rep#1/24 )/27 )/23 e.otherRep#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    // closed e.Rep#1 as range 24
    // closed e.otherRep#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.Rep#1/24 AsIs: )/27 AsIs: )/23 } Tile{ AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } '$'/28 Tile{ AsIs: e.otherRep#1/14 } )/29 )/30 >/31 Tile{ ]] }
    if( ! refalrts::alloc_char( context[28], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[31] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[18] );
    refalrts::push_stack( context[31] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[30] );
    refalrts::link_brackets( context[8], context[29] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[31] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (S S E )E (E )(E )
    // </0 & SplitReps_Aux/4 s.Num#1/13 (/16 s.Mode#1/18 s.Type#1/19 e.Value#1/14 )/17 e.Tail#1/2 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
    context[36] = context[2];
    context[37] = context[3];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[36], context[37] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.Tail#1 as range 36(2)
    // closed e.Scanned#1 as range 9
    // closed e.Else#1 as range 5
    if( ! refalrts::svar_left( context[18], context[14], context[15] ) )
      continue;
    if( ! refalrts::svar_left( context[19], context[14], context[15] ) )
      continue;
    // closed e.Value#1 as range 14

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & SplitReps_Aux/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.Tail#1/36(2) } Tile{ AsIs: (/11 } Tile{ AsIs: e.Scanned#1/9 } Tile{ AsIs: (/16 AsIs: s.Mode#1/18 AsIs: s.Type#1/19 AsIs: e.Value#1/14 AsIs: )/17 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.Else#1/5 HalfReuse: (/8 HalfReuse: s.Mode1 #18/1 } s.Type#1/19/20 e.Value#1/14/21 )/23 )/24 >/25 Tile{ ]] }
    if (! refalrts::copy_stvar(context[20], context[19]))
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[21], context[22], context[14], context[15]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[8] );
    refalrts::reinit_svar( context[1], context[18] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[24] );
    refalrts::link_brackets( context[8], context[23] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[25] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[11], context[11] );
    res = refalrts::splice_evar( res, context[36], context[37] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )
  // </0 & SplitReps_Aux/4 s.Num#1/13 (/11 e.Scanned#1/9 )/12 (/7 e.Else#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Scanned#1 as range 9
  // closed e.Else#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/14 Tile{ AsIs: (/11 AsIs: e.Scanned#1/9 AsIs: )/12 HalfReuse: )/7 } </15 & SplitReps_Aux/16 Tile{ AsIs: </0 Reuse: & Dec/4 AsIs: s.Num#1/13 } >/17 Tile{ AsIs: e.Else#1/5 } (/18 )/19 (/20 Tile{ AsIs: )/8 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[16], SplitReps_Aux, "SplitReps_Aux" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_close_bracket( context[7] );
  refalrts::update_name( context[4], Dec, "Dec" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[15] );
  refalrts::link_brackets( context[20], context[8] );
  refalrts::link_brackets( context[18], context[19] );
  refalrts::push_stack( context[17] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[14], context[7] );
  refalrts::link_brackets( context[11], context[12] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[18], context[20] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[11], context[7] );
  res = refalrts::splice_evar( res, context[14], context[14] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_SplitReps_Brackets_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { UnBracketInBrackets, "UnBracketInBrackets" },
    { SplitReps, "SplitReps" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:(E )
    //GLOBAL GEN:(E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 e.idxB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketLeftSave, 0, 5, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.idxB#0 as range 5
    {refalrts::icOnFailGoTo, +24, 0, 0},
    //(#BracketsS E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 >/1
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icIdentLeftSave, 9, 1, 20},
    {refalrts::icsVarLeft, 0, 10, 20},
    // closed e.inBrackets#2 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # Brackets/12 1/13 </14 Tile{ HalfReuse: & UnBracketInBrackets/0 HalfReuse: s.Num2 #10/4 HalfReuse: </7 HalfReuse: & SplitReps/9 AsIs: s.Num#2/10 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/15 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 11},
    {refalrts::icAllocIdent, 0, 1, 12},
    {refalrts::icAllocInt, 0, 1, 13},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 15},
    {refalrts::icReinitFunc, 0, 0, 0},
    {refalrts::icReinitSVar, 0, 10, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icLinkBrackets, 11, 15, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 11, 14, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +26, 0, 0},
    //(#ADT_Brackets(E )S E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 s.Num#2/14 e.inBrackets#2/5 )/8 >/1
    {refalrts::icSave, 0, 20, 5},
    {refalrts::icIdentLeftSave, 9, 0, 20},
    {refalrts::icBracketLeftSave, 0, 10, 20},
    // closed e.Name#2 as range 10
    {refalrts::icsVarLeft, 0, 14, 20},
    // closed e.inBrackets#2 as range 20(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/15 Tile{ AsIs: </0 Reuse: & UnBracketInBrackets/4 } s.Num#2/14/16 </17 & SplitReps/18 Tile{ AsIs: s.Num#2/14 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/19 Tile{ ]] }
    {refalrts::icAllocInt, 0, 1, 15},
    {refalrts::icCopySTVar, 16, 14, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 17},
    {refalrts::icAllocFunc, 0, 1, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icLinkBrackets, 7, 19, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 17},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 19, 0},
    {refalrts::icSpliceTile, 14, 1, 0},
    {refalrts::icSpliceTile, 16, 18, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 7, 13, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //(E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 e.Else#2/5 )/8 >/1
    // closed e.Else#2 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & lambda_SplitReps_Brackets_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Else#2/5 AsIs: )/8 } Tile{ ]] }
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 7, 8, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:(E )
  //GLOBAL GEN:(E )
  // </0 & lambda_SplitReps_Brackets_0/4 (/7 e.idxB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxB#0 as range 5
  do {
    refalrts::start_sentence();
    //(#BracketsS E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 # Brackets/9 s.Num#2/10 e.inBrackets#2/5 )/8 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[9] = refalrts::ident_left(  & ident_Brackets<int>::name, context[20], context[21] );
    if( ! context[9] )
      continue;
    if( ! refalrts::svar_left( context[10], context[20], context[21] ) )
      continue;
    // closed e.inBrackets#2 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/11 # Brackets/12 1/13 </14 Tile{ HalfReuse: & UnBracketInBrackets/0 HalfReuse: s.Num2 #10/4 HalfReuse: </7 HalfReuse: & SplitReps/9 AsIs: s.Num#2/10 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/15 Tile{ ]] }
    if( ! refalrts::alloc_open_bracket( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[12], & ident_Brackets<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_number( context[13], 1UL ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_name( context[0], UnBracketInBrackets, "UnBracketInBrackets" );
    refalrts::reinit_svar( context[4], context[10] );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[9], SplitReps, "SplitReps" );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[15] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[11], context[14] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //(#ADT_Brackets(E )S E )
    // </0 & lambda_SplitReps_Brackets_0/4 (/7 # ADT_Brackets/9 (/12 e.Name#2/10 )/13 s.Num#2/14 e.inBrackets#2/5 )/8 >/1
    context[20] = context[5];
    context[21] = context[6];
    context[9] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[20], context[21] );
    if( ! context[9] )
      continue;
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[20], context[21] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Name#2 as range 10
    if( ! refalrts::svar_left( context[14], context[20], context[21] ) )
      continue;
    // closed e.inBrackets#2 as range 20(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: # ADT_Brackets/9 AsIs: (/12 AsIs: e.Name#2/10 AsIs: )/13 } 1/15 Tile{ AsIs: </0 Reuse: & UnBracketInBrackets/4 } s.Num#2/14/16 </17 & SplitReps/18 Tile{ AsIs: s.Num#2/14 AsIs: e.inBrackets#2/20(5) HalfReuse: >/8 AsIs: >/1 } )/19 Tile{ ]] }
    if( ! refalrts::alloc_number( context[15], 1UL ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[16], context[14]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[18], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], UnBracketInBrackets, "UnBracketInBrackets" );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[7], context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[17] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[14], context[1] );
    res = refalrts::splice_evar( res, context[16], context[18] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[7], context[13] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //(E )
  // </0 & lambda_SplitReps_Brackets_0/4 (/7 e.Else#2/5 )/8 >/1
  // closed e.Else#2 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & lambda_SplitReps_Brackets_0/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Else#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SplitReps_Brackets(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 6 elems
  refalrts::Iter context[6];
  refalrts::zeros( context, 6 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { lambda_SplitReps_Brackets_0, "lambda_SplitReps_Brackets_0" },
    { Map, "Map" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & SplitReps_Brackets/4 e.Reps#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Reps#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_SplitReps_Brackets_0/4 AsIs: e.Reps#1/2 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icReinitFunc, 0, 1, 0},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icSetRes, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & SplitReps_Brackets/4 e.Reps#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Reps#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 Tile{ HalfReuse: & Map/0 Reuse: & lambda_SplitReps_Brackets_0/4 AsIs: e.Reps#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_name( context[0], Map, "Map" );
  refalrts::update_name( context[4], lambda_SplitReps_Brackets_0, "lambda_SplitReps_Brackets_0" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[5] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult lambda_SplitReps_0(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitReps_Aux, "SplitReps_Aux" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S E 
    //GLOBAL GEN:S E 
    // </0 & lambda_SplitReps_0/4 s.idx#0/5 e.idxV#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.idxV#0 as range 2
    {refalrts::icOnFailGoTo, +12, 0, 0},
    //1 E 
    // </0 & lambda_SplitReps_0/4 1/5 e.Any#2/2 >/1
    {refalrts::icNumTerm, 0, 1, 5},
    // closed e.Any#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: (/5 AsIs: e.Any#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 5},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 4, 0, 0},
    {refalrts::icLinkBrackets, 5, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 4, 1, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S E 
    // </0 & lambda_SplitReps_0/4 s.Other#2/5 e.Any#2/2 >/1
    // closed e.Any#2 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitReps_Aux/4 AsIs: s.Other#2/5 AsIs: e.Any#2/2 HalfReuse: (/1 } )/6 (/7 )/8 >/9 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 6},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 8},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 1},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 1, 6, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 6, 9, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S E 
  //GLOBAL GEN:S E 
  // </0 & lambda_SplitReps_0/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    refalrts::start_sentence();
    //1 E 
    // </0 & lambda_SplitReps_0/4 1/5 e.Any#2/2 >/1
    if( ! refalrts::number_term( 1UL, context[5] ) )
      continue;
    // closed e.Any#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: (/5 AsIs: e.Any#2/2 HalfReuse: )/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[4], context[0] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[4], context[1] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S E 
  // </0 & lambda_SplitReps_0/4 s.Other#2/5 e.Any#2/2 >/1
  // closed e.Any#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & SplitReps_Aux/4 AsIs: s.Other#2/5 AsIs: e.Any#2/2 HalfReuse: (/1 } )/6 (/7 )/8 >/9 Tile{ ]] }
  if( ! refalrts::alloc_close_bracket( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[9] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SplitReps_Aux, "SplitReps_Aux" );
  refalrts::reinit_open_bracket( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::push_stack( context[0] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::link_brackets( context[1], context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[6], context[9] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult SplitReps(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { Fetch, "Fetch" },
    { lambda_SplitReps_0, "lambda_SplitReps_0" },
    { SplitReps_Brackets, "SplitReps_Brackets" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & SplitReps/4 s.Num#1/5 e.Reps#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    // closed e.Reps#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: s.Num#1/5 } </6 & SplitReps_Brackets/7 Tile{ AsIs: e.Reps#1/2 } >/8 & lambda_SplitReps_0/9 Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 6},
    {refalrts::icAllocFunc, 0, 2, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icAllocFunc, 0, 1, 9},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 6},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceEVar, 0, 0, 2},
    {refalrts::icSpliceTile, 6, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & SplitReps/4 s.Num#1/5 e.Reps#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.Reps#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 AsIs: s.Num#1/5 } </6 & SplitReps_Brackets/7 Tile{ AsIs: e.Reps#1/2 } >/8 & lambda_SplitReps_0/9 Tile{ AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[6] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[7], SplitReps_Brackets, "SplitReps_Brackets" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[9], lambda_SplitReps_0, "lambda_SplitReps_0" ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], Fetch, "Fetch" );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[6] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[8], context[9] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult FastGen_Terms(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 43 elems
  refalrts::Iter context[43];
  refalrts::zeros( context, 43 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitReps, "SplitReps" },
    { FastGen, "FastGen" },
    { UnBracketAndNum, "UnBracketAndNum" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_S<int>::name,
    & ident_T<int>::name,
    & ident_Atom<int>::name,
    & ident_ADT_Brackets<int>::name,
    & ident_Brackets<int>::name,
    & ident_E<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S ((E ))((E ))
    //GLOBAL GEN:S ((E ))((E ))
    // </0 & FastGen_Terms/4 s.idx#0/21 (/15 (/19 e.idxVBB#0/17 )/20 )/16 (/7 (/11 e.idxVTBB#0/9 )/12 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 9, 5},
    {refalrts::icBracketRightSave, 0, 13, 2},
    {refalrts::icBracketLeftSave, 0, 17, 13},
    {refalrts::icEmpty, 0, 0, 13},
    {refalrts::icEmpty, 0, 0, 5},
    // closed e.idxVBB#0 as range 17
    // closed e.idxVTBB#0 as range 9
    {refalrts::icsVarLeft, 0, 21, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //S ((#E'$'E ))((#E'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # E/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 5, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 5, 41},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # E/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //S ((#E'$'E ))((E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 e.any#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 5, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    // closed e.Pattern#1 as range 39(17)
    // closed e.any#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/22 AsIs: '$'/23 AsIs: e.Pattern#1/39(17) HalfReuse: (/20 HalfReuse: (/16 AsIs: (/7 } Tile{ AsIs: e.any#1/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icLinkBrackets, 20, 8, 0},
    {refalrts::icLinkBrackets, 16, 12, 0},
    {refalrts::icLinkBrackets, 7, 0, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 19, 7, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +18, 0, 0},
    //S ((E ))((#E'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 e.any#1/17 )/20 )/16 (/7 (/11 # E/22 '$'/23 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 9},
    {refalrts::icIdentLeftSave, 22, 5, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    // closed e.any#1 as range 17
    // closed e.Pattern#1 as range 39(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  )/16 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 } Tile{ AsIs: e.any#1/17 } Tile{ AsIs: )/8 AsIs: >/1 } Tile{ AsIs: e.Pattern#1/39(9) } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icLinkBrackets, 11, 20, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 15, 8, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 8, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 0, 15, 0},
    {refalrts::icSpliceTile, 11, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    //S ((#ADT_Brackets(E )S E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 3, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 2, 41},
    {refalrts::icBracketLeftSave, 0, 24, 39},
    // closed e.Name#1 as range 24
    // closed e.val#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 28, 39},
    // closed e.1#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 </30 & SplitReps/31 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/32 Tile{ AsIs: e.val#1/41(9) } )/33 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '$', 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 30},
    {refalrts::icAllocFunc, 0, 0, 31},
    {refalrts::icAllocIdent, 0, 2, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 23, 33, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 30},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 32, 32, 0},
    {refalrts::icSpliceTile, 15, 23, 0},
    {refalrts::icSpliceTile, 29, 31, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //S ((#AtomE ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 2, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 3, 41},
    {refalrts::icBracketLeftSave, 0, 24, 41},
    // closed e.val#1 as range 39(17)
    // closed e.Name#1 as range 24
    {refalrts::icsVarLeft, 0, 28, 41},
    // closed e.1#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 (/30 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 } Tile{ AsIs: e.val#1/39(17) } )/31 )/32 Tile{ AsIs: )/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/23 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/33 Tile{ ]] }
    {refalrts::icAllocChar, 0, '$', 29},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 30},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 33, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icLinkBrackets, 30, 20, 0},
    {refalrts::icLinkBrackets, 15, 32, 0},
    {refalrts::icLinkBrackets, 19, 31, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 20, 1, 0},
    {refalrts::icSpliceTile, 31, 32, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 15, 22, 0},
    {refalrts::icSpliceTile, 29, 30, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //S ((#BracketsS E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 4, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 2, 41},
    // closed e.val#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 24, 39},
    // closed e.1#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 </26 & SplitReps/27 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/24 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/28 Tile{ AsIs: e.val#1/41(9) } )/29 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '$', 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 26},
    {refalrts::icAllocFunc, 0, 0, 27},
    {refalrts::icAllocIdent, 0, 2, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 23, 29, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 26},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceTile, 15, 23, 0},
    {refalrts::icSpliceTile, 25, 27, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //S ((#AtomE ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.NumB#1/24 e.1#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 2, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 4, 41},
    // closed e.val#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 24, 41},
    // closed e.1#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 (/26 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 } Tile{ AsIs: e.val#1/39(17) } )/27 )/28 Tile{ AsIs: )/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/23 AsIs: s.NumB#1/24 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/29 Tile{ ]] }
    {refalrts::icAllocChar, 0, '$', 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 29},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 29, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 26, 20, 0},
    {refalrts::icLinkBrackets, 15, 28, 0},
    {refalrts::icLinkBrackets, 19, 27, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 20, 1, 0},
    {refalrts::icSpliceTile, 27, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 15, 22, 0},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +23, 0, 0},
    //S ((#S'$'E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 0, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 3, 41},
    {refalrts::icBracketLeftSave, 0, 25, 41},
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    {refalrts::icsVarLeft, 0, 29, 41},
    // closed e.inBr#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 1, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    //S ((#ADT_Brackets(E )S E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 3, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 0, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    {refalrts::icBracketLeftSave, 0, 25, 39},
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 29, 39},
    // closed e.inBr#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/30 </31 & SplitReps/32 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/33 Tile{ AsIs: e.Pattern#1/41(9) } )/34 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '$', 30},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 31},
    {refalrts::icAllocFunc, 0, 0, 32},
    {refalrts::icAllocChar, 0, '$', 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitIdent, 0, 0, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 23, 34, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 31},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 34, 34, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 33, 33, 0},
    {refalrts::icSpliceTile, 15, 24, 0},
    {refalrts::icSpliceTile, 30, 32, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +21, 0, 0},
    //S ((#S'$'E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 0, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 4, 41},
    // closed e.Pattern#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 25, 41},
    // closed e.inBr#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icUpdateIdent, 0, 1, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +34, 0, 0},
    //S ((#BracketsS E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 4, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 0, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 25, 39},
    // closed e.inBr#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/26 </27 & SplitReps/28 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/29 Tile{ AsIs: e.Pattern#1/41(9) } )/30 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '$', 26},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 27},
    {refalrts::icAllocFunc, 0, 0, 28},
    {refalrts::icAllocChar, 0, '$', 29},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitIdent, 0, 0, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 23, 30, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 27},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 30, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 29, 29, 0},
    {refalrts::icSpliceTile, 15, 24, 0},
    {refalrts::icSpliceTile, 26, 28, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //S ((#BracketsS E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.Num1#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.Num2#1/25 e.2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 4, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 4, 41},
    {refalrts::icsVarLeft, 0, 24, 39},
    // closed e.1#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 25, 41},
    // closed e.2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num2#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Brackets/23 } Tile{ AsIs: </0 } Tile{ HalfReuse: & UnBracketAndNum/15 HalfReuse: </19 HalfReuse: & FastGen/22 AsIs: s.Num1#1/24 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.1#1/39(17) } Tile{ AsIs: )/16 AsIs: (/7 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icReinitFunc, 0, 2, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icReinitFunc, 0, 1, 22},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icLinkBrackets, 11, 20, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icLinkBrackets, 7, 12, 0},
    {refalrts::icLinkBrackets, 4, 16, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 16, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 4, 4, 0},
    {refalrts::icSpliceTile, 15, 24, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +37, 0, 0},
    //S ((#ADT_Brackets(E )S E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name#1/24 )/27 s.Num1#1/34 e.1#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/30 e.Name#1/32 )/31 s.Num2#1/35 e.2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 3, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 3, 41},
    {refalrts::icBracketLeftSave, 0, 24, 39},
    {refalrts::icBracketLeftSave, 0, 28, 41},
    // closed e.Name#1 as range 24
    {refalrts::iceRepeatLeft, 32, 24, 28},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icsVarLeft, 0, 34, 39},
    // closed e.1#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 35, 41},
    // closed e.2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  s.Num1#1/34 {REMOVED TILE}  {REMOVED TILE}  e.Name#1/32 {REMOVED TILE}  s.Num2#1/35 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } Tile{ HalfReuse: </20 HalfReuse: & UnBracketAndNum/16 HalfReuse: </7 HalfReuse: & FastGen/11 HalfReuse: s.Num11 #34/23 AsIs: (/30 } Tile{ AsIs: e.1#1/39(17) } Tile{ AsIs: )/31 } Tile{ AsIs: (/15 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icReinitFunc, 0, 2, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 7},
    {refalrts::icReinitFunc, 0, 1, 11},
    {refalrts::icReinitSVar, 0, 34, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 0},
    {refalrts::icLinkBrackets, 19, 0, 0},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 7},
    {refalrts::icLinkBrackets, 15, 12, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icSpliceTile, 31, 31, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 20, 30, 0},
    {refalrts::icSpliceTile, 19, 27, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +39, 0, 0},
    //S ((#ADT_Brackets(E )S E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name1#1/24 )/27 s.Num1#1/32 e.1#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/30 e.Name2#1/28 )/31 s.Num2#1/33 e.2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 3, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 3, 41},
    {refalrts::icBracketLeftSave, 0, 24, 39},
    {refalrts::icBracketLeftSave, 0, 28, 41},
    // closed e.Name1#1 as range 24
    // closed e.Name2#1 as range 28
    {refalrts::icsVarLeft, 0, 32, 39},
    // closed e.1#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 33, 41},
    // closed e.2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/34 </35 & SplitReps/36 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name1#1/24 AsIs: )/27 AsIs: s.Num1#1/32 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # ADT_Brackets/30 } (/37 Tile{ AsIs: e.Name2#1/28 } Tile{ AsIs: )/31 AsIs: s.Num2#1/33 AsIs: e.2#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    {refalrts::icAllocChar, 0, '$', 34},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 35},
    {refalrts::icAllocFunc, 0, 0, 36},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 1, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitIdent, 0, 3, 30},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 38, 0},
    {refalrts::icLinkBrackets, 7, 1, 0},
    {refalrts::icLinkBrackets, 11, 8, 0},
    {refalrts::icLinkBrackets, 23, 12, 0},
    {refalrts::icLinkBrackets, 37, 31, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 38, 38, 0},
    {refalrts::icSpliceTile, 31, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 37, 37, 0},
    {refalrts::icSpliceTile, 15, 30, 0},
    {refalrts::icSpliceTile, 34, 36, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //S ((#T'$'E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 1, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 4, 41},
    // closed e.Pattern#1 as range 39(17)
    {refalrts::icsVarLeft, 0, 25, 41},
    // closed e.inBr#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //S ((#BracketsS E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 4, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 1, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 25, 39},
    // closed e.inBr#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 11, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +22, 0, 0},
    //S ((#T'$'E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 1, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 3, 41},
    {refalrts::icBracketLeftSave, 0, 25, 41},
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    {refalrts::icsVarLeft, 0, 29, 41},
    // closed e.inBr#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +24, 0, 0},
    //S ((#ADT_Brackets(E )S E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 3, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 1, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    {refalrts::icBracketLeftSave, 0, 25, 39},
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icsVarLeft, 0, 29, 39},
    // closed e.inBr#1 as range 39(17)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitSVar, 0, 21, 15},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 27, 28, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 0, 4, 0},
    {refalrts::icSpliceTile, 11, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +30, 0, 0},
    //S ((#AtomE ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 2, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 2, 41},
    // closed e.val1#1 as range 39(17)
    // closed e.val2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # S/4 } '$'/24 (/25 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val1#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 AsIs: (/11 HalfReuse: (/23 } (/26 # Atom/27 Tile{ AsIs: e.val2#1/41(9) } )/28 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icAllocChar, 0, '$', 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icAllocIdent, 0, 2, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 28},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 11, 8, 0},
    {refalrts::icLinkBrackets, 23, 12, 0},
    {refalrts::icLinkBrackets, 26, 28, 0},
    {refalrts::icLinkBrackets, 25, 7, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceTile, 28, 28, 0},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 26, 27, 0},
    {refalrts::icSpliceTile, 15, 23, 0},
    {refalrts::icSpliceTile, 24, 25, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //S ((#AtomE ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 2, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 0, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/23 AsIs: '$'/24 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 15, 7, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //S ((#S'$'E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 0, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 2, 41},
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +20, 0, 0},
    //S ((#AtomE ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 2, 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 23, 1, 41},
    {refalrts::icCharLeftSave, 24, static_cast<unsigned char>('$'), 41},
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 7},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icLinkBrackets, 0, 7, 0},
    {refalrts::icLinkBrackets, 15, 16, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceTile, 15, 7, 0},
    {refalrts::icSpliceTile, 0, 0, 0},
    {refalrts::icSpliceTile, 11, 24, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //S ((#T'$'E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 1, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 2, 41},
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 16, 1, 0},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //S ((#T'$'E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 1, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 1, 41},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # T/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //S ((#T'$'E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 1, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 0, 41},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # S/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +15, 0, 0},
    //S ((#S'$'E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    {refalrts::icSave, 0, 39, 17},
    {refalrts::icIdentLeftSave, 22, 0, 39},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 39},
    {refalrts::icSave, 0, 41, 9},
    {refalrts::icIdentLeftSave, 24, 1, 41},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 41},
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 {REMOVED TILE}  )/20 )/16 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 41},
    {refalrts::icSpliceEVar, 0, 0, 39},
    {refalrts::icSpliceTile, 11, 25, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S ((#S'$'E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    {refalrts::icIdentLeftSave, 22, 0, 17},
    {refalrts::icCharLeftSave, 23, static_cast<unsigned char>('$'), 17},
    {refalrts::icIdentLeftSave, 24, 0, 9},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 9},
    // closed e.Pattern1#1 as range 17
    // closed e.Pattern2#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # S/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/17 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 19, 1, 0},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceEVar, 0, 0, 17},
    {refalrts::icSpliceTile, 19, 23, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[26];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S ((E ))((E ))
  //GLOBAL GEN:S ((E ))((E ))
  // </0 & FastGen_Terms/4 s.idx#0/21 (/15 (/19 e.idxVBB#0/17 )/20 )/16 (/7 (/11 e.idxVTBB#0/9 )/12 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  context[13] = 0;
  context[14] = 0;
  context[15] = refalrts::brackets_right( context[13], context[14], context[2], context[3] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[15], context[16]);
  context[17] = 0;
  context[18] = 0;
  context[19] = refalrts::brackets_left( context[17], context[18], context[13], context[14] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[19], context[20]);
  if( ! refalrts::empty_seq( context[13], context[14] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxVBB#0 as range 17
  // closed e.idxVTBB#0 as range 9
  if( ! refalrts::svar_left( context[21], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))((#E'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # E/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_E<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_E<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # E/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))((E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # E/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 e.any#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_E<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.any#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  (/11 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # E/22 AsIs: '$'/23 AsIs: e.Pattern#1/39(17) HalfReuse: (/20 HalfReuse: (/16 AsIs: (/7 } Tile{ AsIs: e.any#1/9 } Tile{ HalfReuse: )/0 } Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[20] );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::link_brackets( context[20], context[8] );
    refalrts::link_brackets( context[16], context[12] );
    refalrts::link_brackets( context[7], context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[19], context[7] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((E ))((#E'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 e.any#1/17 )/20 )/16 (/7 (/11 # E/22 '$'/23 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[9];
    context[40] = context[10];
    context[22] = refalrts::ident_left(  & ident_E<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    // closed e.any#1 as range 17
    // closed e.Pattern#1 as range 39(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  (/19 {REMOVED TILE}  {REMOVED TILE}  )/16 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # E/22 AsIs: '$'/23 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/21 AsIs: (/15 } Tile{ AsIs: e.any#1/17 } Tile{ AsIs: )/8 AsIs: >/1 } Tile{ AsIs: e.Pattern#1/39(9) } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[15], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#ADT_Brackets(E )S E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_Atom<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.Name#1 as range 24
    // closed e.val#1 as range 41(9)
    if( ! refalrts::svar_left( context[28], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 </30 & SplitReps/31 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/32 Tile{ AsIs: e.val#1/41(9) } )/33 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[31], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[32], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[33] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[30] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[32], context[32] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[29], context[31] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#AtomE ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/26 e.Name#1/24 )/27 s.NumB#1/28 e.1#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[41], context[42] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    // closed e.val#1 as range 39(17)
    // closed e.Name#1 as range 24
    if( ! refalrts::svar_left( context[28], context[41], context[42] ) )
      continue;
    // closed e.1#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/29 (/30 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 } Tile{ AsIs: e.val#1/39(17) } )/31 )/32 Tile{ AsIs: )/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/23 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 AsIs: s.NumB#1/28 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/33 Tile{ ]] }
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[30] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[33] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::link_brackets( context[30], context[20] );
    refalrts::link_brackets( context[15], context[32] );
    refalrts::link_brackets( context[19], context[31] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[31], context[32] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[15], context[22] );
    res = refalrts::splice_evar( res, context[29], context[30] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#BracketsS E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_Atom<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val#1 as range 41(9)
    if( ! refalrts::svar_left( context[24], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 </26 & SplitReps/27 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/24 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 } # Atom/28 Tile{ AsIs: e.val#1/41(9) } )/29 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[25], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[27], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[28], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[29] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[26] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[25], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#AtomE ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.NumB#1/24 e.1#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_Brackets<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val#1 as range 39(17)
    if( ! refalrts::svar_left( context[24], context[41], context[42] ) )
      continue;
    // closed e.1#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/25 (/26 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 } Tile{ AsIs: e.val#1/39(17) } )/27 )/28 Tile{ AsIs: )/20 HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/23 AsIs: s.NumB#1/24 AsIs: e.1#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/29 Tile{ ]] }
    if( ! refalrts::alloc_char( context[25], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[29] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[29] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[26], context[20] );
    refalrts::link_brackets( context[15], context[28] );
    refalrts::link_brackets( context[19], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[15], context[22] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#S'$'E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[41], context[42] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    if( ! refalrts::svar_left( context[29], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[22], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#ADT_Brackets(E )S E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_S<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[39], context[40] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[29], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/30 </31 & SplitReps/32 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/33 Tile{ AsIs: e.Pattern#1/41(9) } )/34 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[30], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[32], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[33], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[34] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[24], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[34] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[31] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[34], context[34] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[33], context[33] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[30], context[32] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#S'$'E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_Brackets<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 Reuse: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::update_ident( context[22], & ident_T<int>::name );
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#BracketsS E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_S<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[25], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/26 </27 & SplitReps/28 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # S/24 } '$'/29 Tile{ AsIs: e.Pattern#1/41(9) } )/30 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[26], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[28], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[29], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[30] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[24], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[23], context[30] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[27] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[30], context[30] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[29], context[29] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[26], context[28] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#BracketsS E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.Num1#1/24 e.1#1/17 )/20 )/16 (/7 (/11 # Brackets/23 s.Num2#1/25 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_Brackets<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    if( ! refalrts::svar_left( context[24], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  s.Num2#1/25 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Brackets/23 } Tile{ AsIs: </0 } Tile{ HalfReuse: & UnBracketAndNum/15 HalfReuse: </19 HalfReuse: & FastGen/22 AsIs: s.Num1#1/24 } Tile{ HalfReuse: (/4 } Tile{ AsIs: e.1#1/39(17) } Tile{ AsIs: )/16 AsIs: (/7 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_name( context[15], UnBracketAndNum, "UnBracketAndNum" );
    refalrts::reinit_open_call( context[19] );
    refalrts::reinit_name( context[22], FastGen, "FastGen" );
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_close_call( context[8] );
    refalrts::link_brackets( context[11], context[20] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[12] );
    refalrts::link_brackets( context[4], context[16] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[16], context[7] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[4], context[4] );
    res = refalrts::splice_evar( res, context[15], context[24] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#ADT_Brackets(E )S E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name#1/24 )/27 s.Num1#1/34 e.1#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/30 e.Name#1/32 )/31 s.Num2#1/35 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name#1 as range 24
    if( ! refalrts::repeated_evar_left( context[32], context[33], context[24], context[25], context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::svar_left( context[34], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[35], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  s.Num1#1/34 {REMOVED TILE}  {REMOVED TILE}  e.Name#1/32 {REMOVED TILE}  s.Num2#1/35 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name#1/24 AsIs: )/27 } Tile{ HalfReuse: </20 HalfReuse: & UnBracketAndNum/16 HalfReuse: </7 HalfReuse: & FastGen/11 HalfReuse: s.Num11 #34/23 AsIs: (/30 } Tile{ AsIs: e.1#1/39(17) } Tile{ AsIs: )/31 } Tile{ AsIs: (/15 } Tile{ AsIs: e.2#1/41(9) } Tile{ AsIs: )/12 HalfReuse: >/8 AsIs: >/1 } Tile{ HalfReuse: )/0 } Tile{ ]] }
    refalrts::reinit_open_call( context[20] );
    refalrts::reinit_name( context[16], UnBracketAndNum, "UnBracketAndNum" );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[11], FastGen, "FastGen" );
    refalrts::reinit_svar( context[23], context[34] );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[0] );
    refalrts::link_brackets( context[19], context[0] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[7] );
    refalrts::link_brackets( context[15], context[12] );
    refalrts::link_brackets( context[30], context[31] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[12], context[1] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[20], context[30] );
    res = refalrts::splice_evar( res, context[19], context[27] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#ADT_Brackets(E )S E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/26 e.Name1#1/24 )/27 s.Num1#1/32 e.1#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/23 (/30 e.Name2#1/28 )/31 s.Num2#1/33 e.2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[39], context[40] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[41], context[42] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    // closed e.Name1#1 as range 24
    // closed e.Name2#1 as range 28
    if( ! refalrts::svar_left( context[32], context[39], context[40] ) )
      continue;
    // closed e.1#1 as range 39(17)
    if( ! refalrts::svar_left( context[33], context[41], context[42] ) )
      continue;
    // closed e.2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # T/4 } '$'/34 </35 & SplitReps/36 Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/26 AsIs: e.Name1#1/24 AsIs: )/27 AsIs: s.Num1#1/32 AsIs: e.1#1/39(17) AsIs: )/20 HalfReuse: >/16 AsIs: (/7 AsIs: (/11 HalfReuse: (/23 HalfReuse: # ADT_Brackets/30 } (/37 Tile{ AsIs: e.Name2#1/28 } Tile{ AsIs: )/31 AsIs: s.Num2#1/33 AsIs: e.2#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } )/38 Tile{ ]] }
    if( ! refalrts::alloc_char( context[34], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[35] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[36], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[37] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[38] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_T<int>::name );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_ident( context[30], & ident_ADT_Brackets<int>::name );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[38] );
    refalrts::link_brackets( context[7], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::link_brackets( context[37], context[31] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[35] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[38], context[38] );
    res = refalrts::splice_evar( res, context[31], context[1] );
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[37], context[37] );
    res = refalrts::splice_evar( res, context[15], context[30] );
    res = refalrts::splice_evar( res, context[34], context[36] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#T'$'E ))((#BracketsS E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Brackets/24 s.NumB#1/25 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_Brackets<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    if( ! refalrts::svar_left( context[25], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Brackets/24 AsIs: s.NumB#1/25 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#BracketsS E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Brackets/22 s.NumB#1/25 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_T<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[25], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # Brackets/22 AsIs: s.NumB#1/25 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#T'$'E ))((#ADT_Brackets(E )S E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # ADT_Brackets/24 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[41], context[42] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Pattern#1 as range 39(17)
    // closed e.Name#1 as range 25
    if( ! refalrts::svar_left( context[29], context[41], context[42] ) )
      continue;
    // closed e.inBr#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # ADT_Brackets/24 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#ADT_Brackets(E )S E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # ADT_Brackets/22 (/27 e.Name#1/25 )/28 s.NumB#1/29 e.inBr#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_ADT_Brackets<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_T<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = 0;
    context[26] = 0;
    context[27] = refalrts::brackets_left( context[25], context[26], context[39], context[40] );
    if( ! context[27] )
      continue;
    refalrts::bracket_pointers(context[27], context[28]);
    // closed e.Name#1 as range 25
    // closed e.Pattern#1 as range 41(9)
    if( ! refalrts::svar_left( context[29], context[39], context[40] ) )
      continue;
    // closed e.inBr#1 as range 39(17)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ AsIs: </0 Reuse: & SplitReps/4 } Tile{ HalfReuse: s.Num1 #21/15 AsIs: (/19 AsIs: # ADT_Brackets/22 AsIs: (/27 AsIs: e.Name#1/25 AsIs: )/28 AsIs: s.NumB#1/29 AsIs: e.inBr#1/39(17) AsIs: )/20 HalfReuse: >/16 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::update_name( context[4], SplitReps, "SplitReps" );
    refalrts::reinit_svar( context[15], context[21] );
    refalrts::reinit_close_call( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[27], context[28] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[0], context[4] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#AtomE ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val1#1/17 )/20 )/16 (/7 (/11 # Atom/23 e.val2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_Atom<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    // closed e.val1#1 as range 39(17)
    // closed e.val2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # S/4 } '$'/24 (/25 Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val1#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 AsIs: (/11 HalfReuse: (/23 } (/26 # Atom/27 Tile{ AsIs: e.val2#1/41(9) } )/28 Tile{ AsIs: )/12 AsIs: )/8 HalfReuse: )/1 ]] }
    if( ! refalrts::alloc_char( context[24], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[27], & ident_Atom<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[28] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], & ident_S<int>::name );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_open_bracket( context[23] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[11], context[8] );
    refalrts::link_brackets( context[23], context[12] );
    refalrts::link_brackets( context[26], context[28] );
    refalrts::link_brackets( context[25], context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[28], context[28] );
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[26], context[27] );
    res = refalrts::splice_evar( res, context[15], context[23] );
    res = refalrts::splice_evar( res, context[24], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#AtomE ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # S/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_S<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # S/23 AsIs: '$'/24 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[7] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#S'$'E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_Atom<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#AtomE ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # Atom/22 e.val#1/17 )/20 )/16 (/7 (/11 # T/23 '$'/24 e.Pattern#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_Atom<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[23] = refalrts::ident_left(  & ident_T<int>::name, context[41], context[42] );
    if( ! context[23] )
      continue;
    context[24] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.val#1 as range 39(17)
    // closed e.Pattern#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  & FastGen_Terms/4 s.Num#1/21 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/23 AsIs: '$'/24 } Tile{ HalfReuse: (/0 } Tile{ AsIs: (/15 AsIs: (/19 AsIs: # Atom/22 AsIs: e.val#1/39(17) AsIs: )/20 AsIs: )/16 HalfReuse: )/7 } Tile{ AsIs: e.Pattern#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_close_bracket( context[7] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::link_brackets( context[0], context[7] );
    refalrts::link_brackets( context[15], context[16] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[15], context[7] );
    res = refalrts::splice_evar( res, context[0], context[0] );
    res = refalrts::splice_evar( res, context[11], context[24] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#T'$'E ))((#AtomE ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern#1/17 )/20 )/16 (/7 (/11 # Atom/24 e.val#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_Atom<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    // closed e.Pattern#1 as range 39(17)
    // closed e.val#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern#1/39(17) } Tile{ HalfReuse: (/16 AsIs: (/7 AsIs: (/11 AsIs: # Atom/24 AsIs: e.val#1/41(9) AsIs: )/12 AsIs: )/8 HalfReuse: )/1 } Tile{ AsIs: )/20 } Tile{ ]] }
    refalrts::reinit_open_bracket( context[16] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[16], context[1] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#T'$'E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_T<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # T/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#T'$'E ))((#S'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # T/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_T<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_S<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # S/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # T/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[19], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[19], context[23] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#S'$'E ))((#T'$'E ))
    // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # T/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
    context[39] = context[17];
    context[40] = context[18];
    context[22] = refalrts::ident_left(  & ident_S<int>::name, context[39], context[40] );
    if( ! context[22] )
      continue;
    context[23] = refalrts::char_left( '$', context[39], context[40] );
    if( ! context[23] )
      continue;
    context[41] = context[9];
    context[42] = context[10];
    context[24] = refalrts::ident_left(  & ident_T<int>::name, context[41], context[42] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[41], context[42] );
    if( ! context[25] )
      continue;
    // closed e.Pattern1#1 as range 39(17)
    // closed e.Pattern2#1 as range 41(9)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 {REMOVED TILE}  )/20 )/16 (/7 {REMOVED TILE}  {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # T/24 AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/39(17) } Tile{ AsIs: e.Pattern2#1/41(9) } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[11], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[41], context[42] );
    res = refalrts::splice_evar( res, context[39], context[40] );
    res = refalrts::splice_evar( res, context[11], context[25] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S ((#S'$'E ))((#S'$'E ))
  // </0 & FastGen_Terms/4 s.Num#1/21 (/15 (/19 # S/22 '$'/23 e.Pattern1#1/17 )/20 )/16 (/7 (/11 # S/24 '$'/25 e.Pattern2#1/9 )/12 )/8 >/1
  context[22] = refalrts::ident_left(  & ident_S<int>::name, context[17], context[18] );
  if( ! context[22] )
    return refalrts::cRecognitionImpossible;
  context[23] = refalrts::char_left( '$', context[17], context[18] );
  if( ! context[23] )
    return refalrts::cRecognitionImpossible;
  context[24] = refalrts::ident_left(  & ident_S<int>::name, context[9], context[10] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  context[25] = refalrts::char_left( '$', context[9], context[10] );
  if( ! context[25] )
    return refalrts::cRecognitionImpossible;
  // closed e.Pattern1#1 as range 17
  // closed e.Pattern2#1 as range 9

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  </0 & FastGen_Terms/4 s.Num#1/21 (/15 {REMOVED TILE}  {REMOVED TILE}  )/20 )/16 (/7 (/11 # S/24 '$'/25 {REMOVED TILE}  )/12 )/8 {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/19 AsIs: # S/22 AsIs: '$'/23 } Tile{ AsIs: e.Pattern1#1/17 } Tile{ AsIs: e.Pattern2#1/9 } Tile{ HalfReuse: )/1 ]] }
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[19], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[19], context[23] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FastGen_MeN(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 52 elems
  refalrts::Iter context[52];
  refalrts::zeros( context, 52 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitReps, "SplitReps" },
    { FastGen_Terms, "FastGen_Terms" },
    { FastGen_MeN, "FastGen_MeN" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_E<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S (E )(E )
    //GLOBAL GEN:S (E )(E )
    // </0 & FastGen_MeN/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxVB#0 as range 9
    // closed e.idxVTB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +43, 0, 0},
    //S (T E )(T E )
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 t.left1#1/14 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 )/12 (/7 t.left2#1/16 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::ictVarLeftSave, 0, 14, 42},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::ictVarLeftSave, 0, 16, 44},
    {refalrts::icEPrepare, 0, 18, 42},
    {refalrts::icEStart, 0, 18, 42},
    {refalrts::icSave, 0, 46, 42},
    {refalrts::icBracketLeftSave, 0, 20, 46},
    {refalrts::icIdentLeftSave, 24, 0, 20},
    // closed e.inE1#1 as range 20
    // closed e.2#1 as range 46(9)
    {refalrts::icSave, 0, 48, 44},
    {refalrts::icEPrepare, 0, 25, 48},
    {refalrts::icEStart, 0, 25, 48},
    {refalrts::icSave, 0, 50, 48},
    {refalrts::icBracketLeftSave, 0, 27, 50},
    {refalrts::icIdentLeftSave, 31, 0, 27},
    // closed e.inE2#1 as range 27
    // closed e.4#1 as range 50(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.left1#1/14 } )/32 (/33 Tile{ AsIs: t.left2#1/16 } )/34 >/35 </36 & FastGen_MeN/37 s.Num#1/13/38 (/39 Tile{ AsIs: e.1#1/18 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 AsIs: e.2#1/46(9) AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.3#1/25 } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 AsIs: e.4#1/50(5) AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 34},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 35},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 36},
    {refalrts::icAllocFunc, 0, 2, 37},
    {refalrts::icCopySTVar, 38, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icUpdateFunc, 0, 1, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 36},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icLinkBrackets, 39, 12, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icPushStack, 0, 0, 35},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 33, 34, 0},
    {refalrts::icLinkBrackets, 11, 32, 0},
    {refalrts::icSetRes, 0, 0, 29},
    {refalrts::icSpliceEVar, 0, 0, 25},
    {refalrts::icSpliceTile, 22, 7, 0},
    {refalrts::icSpliceEVar, 0, 0, 18},
    {refalrts::icSpliceTile, 34, 39, 0},
    {refalrts::icSpliceTile, 16, 17, 0},
    {refalrts::icSpliceTile, 32, 33, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //S (E T )(E T )
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 t.right1#1/14 )/12 (/7 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 t.right2#1/16 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::ictVarRightSave, 0, 14, 42},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::ictVarRightSave, 0, 16, 44},
    {refalrts::icEPrepare, 0, 18, 42},
    {refalrts::icEStart, 0, 18, 42},
    {refalrts::icSave, 0, 46, 42},
    {refalrts::icBracketLeftSave, 0, 20, 46},
    {refalrts::icIdentLeftSave, 24, 0, 20},
    // closed e.inE1#1 as range 20
    // closed e.2#1 as range 46(9)
    {refalrts::icSave, 0, 48, 44},
    {refalrts::icEPrepare, 0, 25, 48},
    {refalrts::icEStart, 0, 25, 48},
    {refalrts::icSave, 0, 50, 48},
    {refalrts::icBracketLeftSave, 0, 27, 50},
    {refalrts::icIdentLeftSave, 31, 0, 27},
    // closed e.inE2#1 as range 27
    // closed e.4#1 as range 50(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen_MeN/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: e.1#1/18 AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 } Tile{ AsIs: e.2#1/46(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.3#1/25 AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 } Tile{ AsIs: e.4#1/50(5) } )/32 >/33 </34 & FastGen_Terms/35 s.Num#1/13/36 (/37 Tile{ AsIs: t.right1#1/14 } )/38 (/39 Tile{ AsIs: t.right2#1/16 AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 33},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 34},
    {refalrts::icAllocFunc, 0, 1, 35},
    {refalrts::icCopySTVar, 36, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 37},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 38},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 39},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 34},
    {refalrts::icLinkBrackets, 39, 8, 0},
    {refalrts::icLinkBrackets, 37, 38, 0},
    {refalrts::icPushStack, 0, 0, 33},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 7, 32, 0},
    {refalrts::icLinkBrackets, 29, 30, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icSetRes, 0, 0, 16},
    {refalrts::icSpliceTile, 38, 39, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 32, 37, 0},
    {refalrts::icSpliceEVar, 0, 0, 50},
    {refalrts::icSpliceTile, 12, 30, 0},
    {refalrts::icSpliceEVar, 0, 0, 46},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //S ((#E'$'((E ))))((#E'$'((E ))))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 (/22 (/26 e.inE1#1/24 )/27 )/23 )/17 )/12 (/7 (/30 # E/32 '$'/33 (/36 (/40 e.inE2#1/38 )/41 )/37 )/31 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::icBracketLeftSave, 0, 14, 42},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icBracketLeftSave, 0, 20, 14},
    {refalrts::icBracketLeftSave, 0, 24, 20},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::icBracketLeftSave, 0, 28, 44},
    {refalrts::icIdentLeftSave, 32, 0, 28},
    {refalrts::icCharLeftSave, 33, static_cast<unsigned char>('$'), 28},
    {refalrts::icBracketLeftSave, 0, 34, 28},
    {refalrts::icBracketLeftSave, 0, 38, 34},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmpty, 0, 0, 42},
    {refalrts::icEmpty, 0, 0, 34},
    {refalrts::icEmpty, 0, 0, 28},
    {refalrts::icEmpty, 0, 0, 44},
    // closed e.inE1#1 as range 24
    // closed e.inE2#1 as range 38
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  (/7 (/30 # E/32 '$'/33 (/36 (/40 {REMOVED TILE}  )/41 )/37 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.inE1#1/24 AsIs: )/27 AsIs: )/23 HalfReuse: (/17 HalfReuse: (/12 } Tile{ AsIs: e.inE2#1/38 } Tile{ AsIs: )/31 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 17, 8, 0},
    {refalrts::icLinkBrackets, 12, 31, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetRes, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 38},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +28, 0, 0},
    //S ((#E'$'((E ))))((#E'$'E ))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 (/22 (/26 e.inE1#1/24 )/27 )/23 )/17 )/12 (/7 (/30 # E/32 '$'/33 e.inE2#1/28 )/31 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::icBracketLeftSave, 0, 14, 42},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icBracketLeftSave, 0, 20, 14},
    {refalrts::icBracketLeftSave, 0, 24, 20},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::icBracketLeftSave, 0, 28, 44},
    {refalrts::icIdentLeftSave, 32, 0, 28},
    {refalrts::icCharLeftSave, 33, static_cast<unsigned char>('$'), 28},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmpty, 0, 0, 14},
    {refalrts::icEmpty, 0, 0, 42},
    {refalrts::icEmpty, 0, 0, 44},
    // closed e.inE1#1 as range 24
    // closed e.inE2#1 as range 28
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  (/7 (/30 # E/32 '$'/33 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.inE1#1/24 AsIs: )/27 AsIs: )/23 HalfReuse: (/17 HalfReuse: (/12 } Tile{ AsIs: e.inE2#1/28 } Tile{ AsIs: )/31 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 16, 1, 0},
    {refalrts::icLinkBrackets, 17, 8, 0},
    {refalrts::icLinkBrackets, 12, 31, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 26, 27, 0},
    {refalrts::icSetRes, 0, 0, 31},
    {refalrts::icSpliceEVar, 0, 0, 28},
    {refalrts::icSpliceTile, 16, 12, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +29, 0, 0},
    //S ((#E'$'E ))((#E'$'((E ))))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 e.inE1#1/14 )/17 )/12 (/7 (/22 # E/24 '$'/25 (/28 (/32 e.inE2#1/30 )/33 )/29 )/23 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::icBracketLeftSave, 0, 14, 42},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::icBracketLeftSave, 0, 20, 44},
    {refalrts::icIdentLeftSave, 24, 0, 20},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 20},
    {refalrts::icBracketLeftSave, 0, 26, 20},
    {refalrts::icBracketLeftSave, 0, 30, 26},
    {refalrts::icEmpty, 0, 0, 42},
    {refalrts::icEmpty, 0, 0, 26},
    {refalrts::icEmpty, 0, 0, 20},
    {refalrts::icEmpty, 0, 0, 44},
    // closed e.inE1#1 as range 14
    // closed e.inE2#1 as range 30
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  {REMOVED TILE}  )/17 )/12 {REMOVED TILE}  {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 } Tile{ AsIs: (/7 AsIs: (/22 } Tile{ AsIs: e.inE1#1/14 } Tile{ HalfReuse: )/24 HalfReuse: )/25 AsIs: (/28 AsIs: (/32 AsIs: e.inE2#1/30 AsIs: )/33 AsIs: )/29 AsIs: )/23 } Tile{ ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icLinkBrackets, 16, 23, 0},
    {refalrts::icLinkBrackets, 28, 29, 0},
    {refalrts::icLinkBrackets, 32, 33, 0},
    {refalrts::icLinkBrackets, 7, 25, 0},
    {refalrts::icLinkBrackets, 22, 24, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 24, 23, 0},
    {refalrts::icSpliceEVar, 0, 0, 14},
    {refalrts::icSpliceTile, 7, 22, 0},
    {refalrts::icSpliceTile, 16, 19, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +27, 0, 0},
    //S ((#E'$'E ))((#E'$'E ))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 e.inE1#1/14 )/17 )/12 (/7 (/22 # E/24 '$'/25 e.inE2#1/20 )/23 )/8 >/1
    {refalrts::icSave, 0, 42, 9},
    {refalrts::icBracketLeftSave, 0, 14, 42},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icSave, 0, 44, 5},
    {refalrts::icBracketLeftSave, 0, 20, 44},
    {refalrts::icIdentLeftSave, 24, 0, 20},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 20},
    {refalrts::icEmpty, 0, 0, 42},
    {refalrts::icEmpty, 0, 0, 44},
    // closed e.inE1#1 as range 14
    // closed e.inE2#1 as range 20
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & FastGen_MeN/4 s.Num#1/13 {REMOVED TILE}  # E/24 '$'/25 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # E/11 HalfReuse: '$'/16 HalfReuse: (/18 HalfReuse: (/19 AsIs: e.inE1#1/14 AsIs: )/17 AsIs: )/12 AsIs: (/7 AsIs: (/22 } Tile{ AsIs: e.inE2#1/20 } Tile{ AsIs: )/23 AsIs: )/8 HalfReuse: )/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitIdent, 0, 0, 11},
    {refalrts::icReinitChar, 0, '$', 16},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icLinkBrackets, 22, 23, 0},
    {refalrts::icLinkBrackets, 18, 12, 0},
    {refalrts::icLinkBrackets, 19, 17, 0},
    {refalrts::icSetRes, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceTile, 11, 22, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.in1#1/9 )/12 (/7 e.in2#1/5 )/8 >/1
    // closed e.in1#1 as range 9
    // closed e.in2#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } # E/14 '$'/15 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.in1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.in2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
    {refalrts::icAllocIdent, 0, 0, 14},
    {refalrts::icAllocChar, 0, '$', 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 11, 17, 0},
    {refalrts::icLinkBrackets, 12, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icSpliceTile, 11, 11, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[10];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S (E )(E )
  //GLOBAL GEN:S (E )(E )
  // </0 & FastGen_MeN/4 s.idx#0/13 (/11 e.idxVB#0/9 )/12 (/7 e.idxVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVB#0 as range 9
  // closed e.idxVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //S (T E )(T E )
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 t.left1#1/14 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 )/12 (/7 t.left2#1/16 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[15] = refalrts::tvar_left( context[14], context[42], context[43] );
    if( ! context[15] )
      continue;
    context[44] = context[5];
    context[45] = context[6];
    context[17] = refalrts::tvar_left( context[16], context[44], context[45] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[42];
      context[47] = context[43];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[46], context[47] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 46(9)
      context[48] = context[44];
      context[49] = context[45];
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[50] = context[48];
        context[51] = context[49];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[50], context[51] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 50(5)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: t.left1#1/14 } )/32 (/33 Tile{ AsIs: t.left2#1/16 } )/34 >/35 </36 & FastGen_MeN/37 s.Num#1/13/38 (/39 Tile{ AsIs: e.1#1/18 } Tile{ AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 AsIs: e.2#1/46(9) AsIs: )/12 AsIs: (/7 } Tile{ AsIs: e.3#1/25 } Tile{ AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 AsIs: e.4#1/50(5) AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[35] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[36] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[37], FastGen_MeN, "FastGen_MeN" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[38], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[39] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], FastGen_Terms, "FastGen_Terms" );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[36] );
        refalrts::link_brackets( context[7], context[8] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[39], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::push_stack( context[35] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[33], context[34] );
        refalrts::link_brackets( context[11], context[32] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[29];
        res = refalrts::splice_evar( res, context[25], context[26] );
        res = refalrts::splice_evar( res, context[22], context[7] );
        res = refalrts::splice_evar( res, context[18], context[19] );
        res = refalrts::splice_evar( res, context[34], context[39] );
        res = refalrts::splice_evar( res, context[16], context[17] );
        res = refalrts::splice_evar( res, context[32], context[33] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[25], context[26], context[48], context[49] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[42], context[43] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E T )(E T )
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.1#1/18 (/22 # E/24 e.inE1#1/20 )/23 e.2#1/9 t.right1#1/14 )/12 (/7 e.3#1/25 (/29 # E/31 e.inE2#1/27 )/30 e.4#1/5 t.right2#1/16 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[15] = refalrts::tvar_right( context[14], context[42], context[43] );
    if( ! context[15] )
      continue;
    context[44] = context[5];
    context[45] = context[6];
    context[17] = refalrts::tvar_right( context[16], context[44], context[45] );
    if( ! context[17] )
      continue;
    context[18] = 0;
    context[19] = 0;
    refalrts::start_e_loop();
    do {
      context[46] = context[42];
      context[47] = context[43];
      context[20] = 0;
      context[21] = 0;
      context[22] = refalrts::brackets_left( context[20], context[21], context[46], context[47] );
      if( ! context[22] )
        continue;
      refalrts::bracket_pointers(context[22], context[23]);
      context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
      if( ! context[24] )
        continue;
      // closed e.inE1#1 as range 20
      // closed e.2#1 as range 46(9)
      context[48] = context[44];
      context[49] = context[45];
      context[25] = 0;
      context[26] = 0;
      refalrts::start_e_loop();
      do {
        context[50] = context[48];
        context[51] = context[49];
        context[27] = 0;
        context[28] = 0;
        context[29] = refalrts::brackets_left( context[27], context[28], context[50], context[51] );
        if( ! context[29] )
          continue;
        refalrts::bracket_pointers(context[29], context[30]);
        context[31] = refalrts::ident_left(  & ident_E<int>::name, context[27], context[28] );
        if( ! context[31] )
          continue;
        // closed e.inE2#1 as range 27
        // closed e.4#1 as range 50(5)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen_MeN/4 AsIs: s.Num#1/13 AsIs: (/11 AsIs: e.1#1/18 AsIs: (/22 AsIs: # E/24 AsIs: e.inE1#1/20 AsIs: )/23 } Tile{ AsIs: e.2#1/46(9) } Tile{ AsIs: )/12 AsIs: (/7 AsIs: e.3#1/25 AsIs: (/29 AsIs: # E/31 AsIs: e.inE2#1/27 AsIs: )/30 } Tile{ AsIs: e.4#1/50(5) } )/32 >/33 </34 & FastGen_Terms/35 s.Num#1/13/36 (/37 Tile{ AsIs: t.right1#1/14 } )/38 (/39 Tile{ AsIs: t.right2#1/16 AsIs: )/8 AsIs: >/1 ]] }
        if( ! refalrts::alloc_close_bracket( context[32] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[33] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[34] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[35], FastGen_Terms, "FastGen_Terms" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[36], context[13]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[37] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[39] ) )
          return refalrts::cNoMemory;
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[34] );
        refalrts::link_brackets( context[39], context[8] );
        refalrts::link_brackets( context[37], context[38] );
        refalrts::push_stack( context[33] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[7], context[32] );
        refalrts::link_brackets( context[29], context[30] );
        refalrts::link_brackets( context[11], context[12] );
        refalrts::link_brackets( context[22], context[23] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[16];
        res = refalrts::splice_evar( res, context[38], context[39] );
        res = refalrts::splice_evar( res, context[14], context[15] );
        res = refalrts::splice_evar( res, context[32], context[37] );
        res = refalrts::splice_evar( res, context[50], context[51] );
        res = refalrts::splice_evar( res, context[12], context[30] );
        res = refalrts::splice_evar( res, context[46], context[47] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[25], context[26], context[48], context[49] ) );
    } while ( refalrts::open_evar_advance( context[18], context[19], context[42], context[43] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'((E ))))((#E'$'((E ))))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 (/22 (/26 e.inE1#1/24 )/27 )/23 )/17 )/12 (/7 (/30 # E/32 '$'/33 (/36 (/40 e.inE2#1/38 )/41 )/37 )/31 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[42], context[43] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[44] = context[5];
    context[45] = context[6];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[44], context[45] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_E<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    context[33] = refalrts::char_left( '$', context[28], context[29] );
    if( ! context[33] )
      continue;
    context[34] = 0;
    context[35] = 0;
    context[36] = refalrts::brackets_left( context[34], context[35], context[28], context[29] );
    if( ! context[36] )
      continue;
    refalrts::bracket_pointers(context[36], context[37]);
    context[38] = 0;
    context[39] = 0;
    context[40] = refalrts::brackets_left( context[38], context[39], context[34], context[35] );
    if( ! context[40] )
      continue;
    refalrts::bracket_pointers(context[40], context[41]);
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    if( ! refalrts::empty_seq( context[34], context[35] ) )
      continue;
    if( ! refalrts::empty_seq( context[28], context[29] ) )
      continue;
    if( ! refalrts::empty_seq( context[44], context[45] ) )
      continue;
    // closed e.inE1#1 as range 24
    // closed e.inE2#1 as range 38

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  (/7 (/30 # E/32 '$'/33 (/36 (/40 {REMOVED TILE}  )/41 )/37 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.inE1#1/24 AsIs: )/27 AsIs: )/23 HalfReuse: (/17 HalfReuse: (/12 } Tile{ AsIs: e.inE2#1/38 } Tile{ AsIs: )/31 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[12], context[31] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[31];
    res = refalrts::splice_evar( res, context[38], context[39] );
    res = refalrts::splice_evar( res, context[16], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'((E ))))((#E'$'E ))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 (/22 (/26 e.inE1#1/24 )/27 )/23 )/17 )/12 (/7 (/30 # E/32 '$'/33 e.inE2#1/28 )/31 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[42], context[43] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[14], context[15] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = 0;
    context[25] = 0;
    context[26] = refalrts::brackets_left( context[24], context[25], context[20], context[21] );
    if( ! context[26] )
      continue;
    refalrts::bracket_pointers(context[26], context[27]);
    context[44] = context[5];
    context[45] = context[6];
    context[28] = 0;
    context[29] = 0;
    context[30] = refalrts::brackets_left( context[28], context[29], context[44], context[45] );
    if( ! context[30] )
      continue;
    refalrts::bracket_pointers(context[30], context[31]);
    context[32] = refalrts::ident_left(  & ident_E<int>::name, context[28], context[29] );
    if( ! context[32] )
      continue;
    context[33] = refalrts::char_left( '$', context[28], context[29] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[14], context[15] ) )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    if( ! refalrts::empty_seq( context[44], context[45] ) )
      continue;
    // closed e.inE1#1 as range 24
    // closed e.inE2#1 as range 28

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  (/7 (/30 # E/32 '$'/33 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 AsIs: (/22 AsIs: (/26 AsIs: e.inE1#1/24 AsIs: )/27 AsIs: )/23 HalfReuse: (/17 HalfReuse: (/12 } Tile{ AsIs: e.inE2#1/28 } Tile{ AsIs: )/31 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[17] );
    refalrts::reinit_open_bracket( context[12] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[16], context[1] );
    refalrts::link_brackets( context[17], context[8] );
    refalrts::link_brackets( context[12], context[31] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[26], context[27] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[31];
    res = refalrts::splice_evar( res, context[28], context[29] );
    res = refalrts::splice_evar( res, context[16], context[12] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))((#E'$'((E ))))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 e.inE1#1/14 )/17 )/12 (/7 (/22 # E/24 '$'/25 (/28 (/32 e.inE2#1/30 )/33 )/29 )/23 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[42], context[43] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[44] = context[5];
    context[45] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[44], context[45] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    context[26] = 0;
    context[27] = 0;
    context[28] = refalrts::brackets_left( context[26], context[27], context[20], context[21] );
    if( ! context[28] )
      continue;
    refalrts::bracket_pointers(context[28], context[29]);
    context[30] = 0;
    context[31] = 0;
    context[32] = refalrts::brackets_left( context[30], context[31], context[26], context[27] );
    if( ! context[32] )
      continue;
    refalrts::bracket_pointers(context[32], context[33]);
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    if( ! refalrts::empty_seq( context[26], context[27] ) )
      continue;
    if( ! refalrts::empty_seq( context[20], context[21] ) )
      continue;
    if( ! refalrts::empty_seq( context[44], context[45] ) )
      continue;
    // closed e.inE1#1 as range 14
    // closed e.inE2#1 as range 30

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_MeN/4 s.Num#1/13 (/11 {REMOVED TILE}  {REMOVED TILE}  )/17 )/12 {REMOVED TILE}  {REMOVED TILE}  )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: (/16 AsIs: # E/18 AsIs: '$'/19 } Tile{ AsIs: (/7 AsIs: (/22 } Tile{ AsIs: e.inE1#1/14 } Tile{ HalfReuse: )/24 HalfReuse: )/25 AsIs: (/28 AsIs: (/32 AsIs: e.inE2#1/30 AsIs: )/33 AsIs: )/29 AsIs: )/23 } Tile{ ]] }
    refalrts::reinit_close_bracket( context[24] );
    refalrts::reinit_close_bracket( context[25] );
    refalrts::link_brackets( context[16], context[23] );
    refalrts::link_brackets( context[28], context[29] );
    refalrts::link_brackets( context[32], context[33] );
    refalrts::link_brackets( context[7], context[25] );
    refalrts::link_brackets( context[22], context[24] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[24], context[23] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    res = refalrts::splice_evar( res, context[7], context[22] );
    res = refalrts::splice_evar( res, context[16], context[19] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))((#E'$'E ))
    // </0 & FastGen_MeN/4 s.Num#1/13 (/11 (/16 # E/18 '$'/19 e.inE1#1/14 )/17 )/12 (/7 (/22 # E/24 '$'/25 e.inE2#1/20 )/23 )/8 >/1
    context[42] = context[9];
    context[43] = context[10];
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[42], context[43] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    context[44] = context[5];
    context[45] = context[6];
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[44], context[45] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[42], context[43] ) )
      continue;
    if( ! refalrts::empty_seq( context[44], context[45] ) )
      continue;
    // closed e.inE1#1 as range 14
    // closed e.inE2#1 as range 20

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & FastGen_MeN/4 s.Num#1/13 {REMOVED TILE}  # E/24 '$'/25 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 } Tile{ HalfReuse: # E/11 HalfReuse: '$'/16 HalfReuse: (/18 HalfReuse: (/19 AsIs: e.inE1#1/14 AsIs: )/17 AsIs: )/12 AsIs: (/7 AsIs: (/22 } Tile{ AsIs: e.inE2#1/20 } Tile{ AsIs: )/23 AsIs: )/8 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[11], & ident_E<int>::name );
    refalrts::reinit_char( context[16], '$' );
    refalrts::reinit_open_bracket( context[18] );
    refalrts::reinit_open_bracket( context[19] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[22], context[23] );
    refalrts::link_brackets( context[18], context[12] );
    refalrts::link_brackets( context[19], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[11], context[22] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )
  // </0 & FastGen_MeN/4 s.Num#1/13 (/11 e.in1#1/9 )/12 (/7 e.in2#1/5 )/8 >/1
  // closed e.in1#1 as range 9
  // closed e.in2#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } Tile{ AsIs: (/11 } # E/14 '$'/15 Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.in1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.in2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], SplitReps, "SplitReps" );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[11], context[17] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  res = refalrts::splice_evar( res, context[11], context[11] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult LengthComp(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 19 elems
  refalrts::Iter context[19];
  refalrts::zeros( context, 19 );
#ifdef INTERPRET
  using refalrts::functions;
  static const refalrts::RefalIdentifier idents[] = {
    & ident_NotEq<int>::name,
    & ident_Eq<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:E 
    // </0 & LengthComp/4 e.idx#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.idx#0 as range 2
    {refalrts::icOnFailGoTo, +17, 0, 0},
    //(T E )(T E )
    // </0 & LengthComp/4 (/7 t.1#1/13 e.tail1#1/5 )/8 (/11 t.2#1/15 e.tail2#1/9 )/12 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 5, 17},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::ictVarLeftSave, 0, 13, 5},
    // closed e.tail1#1 as range 5
    {refalrts::ictVarLeftSave, 0, 15, 9},
    // closed e.tail2#1 as range 9
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  t.1#1/13 {REMOVED TILE}  {REMOVED TILE}  t.2#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & LengthComp/4 AsIs: (/7 } Tile{ AsIs: e.tail1#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.tail2#1/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 11, 12, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icSetRes, 0, 0, 12},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 8, 11, 0},
    {refalrts::icSpliceEVar, 0, 0, 5},
    {refalrts::icTrash, 0, 0, 7},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +11, 0, 0},
    //()()
    // </0 & LengthComp/4 (/7 )/8 (/11 )/12 >/1
    {refalrts::icSave, 0, 17, 2},
    {refalrts::icBracketLeftSave, 0, 5, 17},
    {refalrts::icBracketLeftSave, 0, 9, 17},
    {refalrts::icEmpty, 0, 0, 5},
    {refalrts::icEmpty, 0, 0, 9},
    {refalrts::icEmpty, 0, 0, 17},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & LengthComp/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Eq/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 1, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //E 
    // </0 & LengthComp/4 e.1#1/2 >/1
    // closed e.1#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  & LengthComp/4 e.1#1/2 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # NotEq/0 } Tile{ ]] }
    {refalrts::icReinitIdent, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrash, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:E 
  // </0 & LengthComp/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    refalrts::start_sentence();
    //(T E )(T E )
    // </0 & LengthComp/4 (/7 t.1#1/13 e.tail1#1/5 )/8 (/11 t.2#1/15 e.tail2#1/9 )/12 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;
    context[14] = refalrts::tvar_left( context[13], context[5], context[6] );
    if( ! context[14] )
      continue;
    // closed e.tail1#1 as range 5
    context[16] = refalrts::tvar_left( context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    // closed e.tail2#1 as range 9

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  t.1#1/13 {REMOVED TILE}  {REMOVED TILE}  t.2#1/15 {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & LengthComp/4 AsIs: (/7 } Tile{ AsIs: e.tail1#1/5 } Tile{ AsIs: )/8 AsIs: (/11 } Tile{ AsIs: e.tail2#1/9 } Tile{ AsIs: )/12 AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[12];
    res = refalrts::splice_evar( res, context[9], context[10] );
    res = refalrts::splice_evar( res, context[8], context[11] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[7], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //()()
    // </0 & LengthComp/4 (/7 )/8 (/11 )/12 >/1
    context[17] = context[2];
    context[18] = context[3];
    context[5] = 0;
    context[6] = 0;
    context[7] = refalrts::brackets_left( context[5], context[6], context[17], context[18] );
    if( ! context[7] )
      continue;
    refalrts::bracket_pointers(context[7], context[8]);
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[17], context[18] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    if( ! refalrts::empty_seq( context[9], context[10] ) )
      continue;
    if( ! refalrts::empty_seq( context[17], context[18] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  & LengthComp/4 (/7 )/8 (/11 )/12 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: # Eq/0 } Tile{ ]] }
    refalrts::reinit_ident( context[0], & ident_Eq<int>::name );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[0], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //E 
  // </0 & LengthComp/4 e.1#1/2 >/1
  // closed e.1#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  & LengthComp/4 e.1#1/2 >/1 {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: # NotEq/0 } Tile{ ]] }
  refalrts::reinit_ident( context[0], & ident_NotEq<int>::name );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[0], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FastGen_K(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 31 elems
  refalrts::Iter context[31];
  refalrts::zeros( context, 31 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { SplitReps, "SplitReps" },
    { FastGen_Terms, "FastGen_Terms" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_E<int>::name,
    & ident_NotEq<int>::name,
    & ident_Eq<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:S S (E )(E )
    //GLOBAL GEN:S S (E )(E )
    // </0 & FastGen_K/4 s.idx#0/13 s.idxV#0/14 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icBracketRightSave, 0, 5, 2},
    {refalrts::icBracketRightSave, 0, 9, 2},
    // closed e.idxVVB#0 as range 9
    // closed e.idxVVTB#0 as range 5
    {refalrts::icsVarLeft, 0, 13, 2},
    {refalrts::icsVarLeft, 0, 14, 2},
    {refalrts::icEmpty, 0, 0, 2},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //S #Eq(T E )(T E )
    // </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 t.1#1/15 e.tail1#1/9 )/12 (/7 t.2#1/17 e.tail2#1/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 14},
    {refalrts::icSave, 0, 27, 9},
    {refalrts::ictVarLeftSave, 0, 15, 27},
    // closed e.tail1#1 as range 27(9)
    {refalrts::icSave, 0, 29, 5},
    {refalrts::ictVarLeftSave, 0, 17, 29},
    // closed e.tail2#1 as range 29(5)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & FastGen_Terms/20 s.Num#1/13/21 (/22 Tile{ AsIs: t.1#1/15 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.2#1/17 } )/23 >/24 Tile{ AsIs: </0 AsIs: & FastGen_K/4 AsIs: s.Num#1/13 AsIs: # Eq/14 AsIs: (/11 } Tile{ AsIs: e.tail1#1/27(9) } )/25 (/26 Tile{ AsIs: e.tail2#1/29(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 19},
    {refalrts::icAllocFunc, 0, 1, 20},
    {refalrts::icCopySTVar, 21, 13, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 26},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 26, 8, 0},
    {refalrts::icLinkBrackets, 11, 25, 0},
    {refalrts::icPushStack, 0, 0, 24},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icLinkBrackets, 7, 23, 0},
    {refalrts::icLinkBrackets, 22, 12, 0},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceEVar, 0, 0, 29},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 27},
    {refalrts::icSpliceTile, 0, 11, 0},
    {refalrts::icSpliceTile, 23, 24, 0},
    {refalrts::icSpliceTile, 12, 18, 0},
    {refalrts::icSpliceTile, 15, 16, 0},
    {refalrts::icSpliceTile, 19, 22, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +9, 0, 0},
    //S #Eq()()
    // </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1
    {refalrts::icIdentTerm, 0, 2, 14},
    {refalrts::icSave, 0, 27, 9},
    {refalrts::icEmpty, 0, 0, 27},
    {refalrts::icSave, 0, 29, 5},
    {refalrts::icEmpty, 0, 0, 29},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S #NotEq(E )(E )
    // </0 & FastGen_K/4 s.Num#1/13 # NotEq/14 (/11 e.1#1/9 )/12 (/7 e.2#1/5 )/8 >/1
    {refalrts::icIdentTerm, 0, 1, 14},
    // closed e.1#1 as range 9
    // closed e.2#1 as range 5
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } (/15 Tile{ Reuse: # E/14 HalfReuse: '$'/11 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icUpdateIdent, 0, 0, 14},
    {refalrts::icReinitChar, 0, '$', 11},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 12},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 15, 17, 0},
    {refalrts::icLinkBrackets, 12, 1, 0},
    {refalrts::icLinkBrackets, 7, 8, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 17, 17, 0},
    {refalrts::icSpliceTile, 12, 1, 0},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceEVar, 0, 0, 9},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 14, 11, 0},
    {refalrts::icSpliceTile, 15, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[2];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:S S (E )(E )
  //GLOBAL GEN:S S (E )(E )
  // </0 & FastGen_K/4 s.idx#0/13 s.idxV#0/14 (/11 e.idxVVB#0/9 )/12 (/7 e.idxVVTB#0/5 )/8 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_right( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_right( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.idxVVB#0 as range 9
  // closed e.idxVVTB#0 as range 5
  if( ! refalrts::svar_left( context[13], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::svar_left( context[14], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    refalrts::start_sentence();
    //S #Eq(T E )(T E )
    // </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 t.1#1/15 e.tail1#1/9 )/12 (/7 t.2#1/17 e.tail2#1/5 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Eq<int>::name, context[14] ) )
      continue;
    context[27] = context[9];
    context[28] = context[10];
    context[16] = refalrts::tvar_left( context[15], context[27], context[28] );
    if( ! context[16] )
      continue;
    // closed e.tail1#1 as range 27(9)
    context[29] = context[5];
    context[30] = context[6];
    context[18] = refalrts::tvar_left( context[17], context[29], context[30] );
    if( ! context[18] )
      continue;
    // closed e.tail2#1 as range 29(5)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </19 & FastGen_Terms/20 s.Num#1/13/21 (/22 Tile{ AsIs: t.1#1/15 } Tile{ AsIs: )/12 AsIs: (/7 AsIs: t.2#1/17 } )/23 >/24 Tile{ AsIs: </0 AsIs: & FastGen_K/4 AsIs: s.Num#1/13 AsIs: # Eq/14 AsIs: (/11 } Tile{ AsIs: e.tail1#1/27(9) } )/25 (/26 Tile{ AsIs: e.tail2#1/29(5) } Tile{ AsIs: )/8 AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[20], FastGen_Terms, "FastGen_Terms" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[21], context[13]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[26], context[8] );
    refalrts::link_brackets( context[11], context[25] );
    refalrts::push_stack( context[24] );
    refalrts::push_stack( context[19] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[22], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[29], context[30] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[27], context[28] );
    res = refalrts::splice_evar( res, context[0], context[11] );
    res = refalrts::splice_evar( res, context[23], context[24] );
    res = refalrts::splice_evar( res, context[12], context[18] );
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[19], context[22] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S #Eq()()
    // </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1
    if( ! refalrts::ident_term(  & ident_Eq<int>::name, context[14] ) )
      continue;
    context[27] = context[9];
    context[28] = context[10];
    if( ! refalrts::empty_seq( context[27], context[28] ) )
      continue;
    context[29] = context[5];
    context[30] = context[6];
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen_K/4 s.Num#1/13 # Eq/14 (/11 )/12 (/7 )/8 >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S #NotEq(E )(E )
  // </0 & FastGen_K/4 s.Num#1/13 # NotEq/14 (/11 e.1#1/9 )/12 (/7 e.2#1/5 )/8 >/1
  if( ! refalrts::ident_term(  & ident_NotEq<int>::name, context[14] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 9
  // closed e.2#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } (/15 Tile{ Reuse: # E/14 HalfReuse: '$'/11 } Tile{ AsIs: </0 Reuse: & SplitReps/4 AsIs: s.Num#1/13 } Tile{ AsIs: e.1#1/9 } >/16 Tile{ HalfReuse: (/12 AsIs: (/7 AsIs: e.2#1/5 AsIs: )/8 HalfReuse: )/1 } )/17 Tile{ ]] }
  if( ! refalrts::alloc_open_bracket( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  refalrts::update_ident( context[14], & ident_E<int>::name );
  refalrts::reinit_char( context[11], '$' );
  refalrts::update_name( context[4], SplitReps, "SplitReps" );
  refalrts::reinit_open_bracket( context[12] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[15], context[17] );
  refalrts::link_brackets( context[12], context[1] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[17], context[17] );
  res = refalrts::splice_evar( res, context[12], context[1] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[13] );
  res = refalrts::splice_evar( res, context[14], context[11] );
  res = refalrts::splice_evar( res, context[15], context[15] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

static refalrts::FnResult FastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 57 elems
  refalrts::Iter context[57];
  refalrts::zeros( context, 57 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { LengthComp, "LengthComp" },
    { FastGen_K, "FastGen_K" },
    { Inc, "Inc" },
    { FastGen_MeN, "FastGen_MeN" },
    { FastGen, "FastGen" },
    { FastGen_Terms, "FastGen_Terms" },
    { SplitReps, "SplitReps" }
  };
  static const refalrts::RefalIdentifier idents[] = {
    & ident_E<int>::name
  };
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    //FAST GEN:E 
    //GLOBAL GEN:S (E )E 
    // </0 & FastGen/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    {refalrts::icsVarLeft, 0, 5, 2},
    {refalrts::icBracketLeftSave, 0, 6, 2},
    // closed e.idxVB#0 as range 6
    // closed e.idxVT#0 as range 2
    {refalrts::icOnFailGoTo, +8, 0, 0},
    //S (E )
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icEmpty, 0, 0, 47},
    // closed e.1#1 as range 6
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  </0 & FastGen/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 } Tile{ ]] }
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 5, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +19, 0, 0},
    //S ()()E 
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icSave, 0, 49, 6},
    {refalrts::icEmpty, 0, 0, 49},
    {refalrts::icEmpty, 0, 0, 10},
    // closed e.Tail#1 as range 47(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ HalfReuse: s.Num1 #5/8 HalfReuse: >/9 AsIs: (/12 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 2, 15},
    {refalrts::icReinitSVar, 0, 5, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 8},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //S ((#E'$'E ))(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern#1/10 )/13 )/9 (/18 e.any#1/16 )/19 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 6},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icIdentLeftSave, 14, 0, 10},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('$'), 10},
    {refalrts::icSave, 0, 49, 2},
    {refalrts::icBracketLeftSave, 0, 16, 49},
    {refalrts::icEmpty, 0, 0, 47},
    // closed e.Pattern#1 as range 10
    // closed e.any#1 as range 16
    // closed e.Tail#1 as range 49(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </18 } & Inc/20 Tile{ AsIs: s.Num#1/5 } >/21 Tile{ AsIs: (/8 AsIs: (/12 AsIs: # E/14 AsIs: '$'/15 AsIs: e.Pattern#1/10 HalfReuse: (/13 HalfReuse: (/9 } Tile{ AsIs: e.any#1/16 } )/22 )/23 )/24 Tile{ AsIs: )/19 AsIs: e.Tail#1/49(2) AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 2, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 13},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 8, 19, 0},
    {refalrts::icLinkBrackets, 12, 24, 0},
    {refalrts::icLinkBrackets, 13, 23, 0},
    {refalrts::icLinkBrackets, 9, 22, 0},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icSetRes, 0, 0, 19},
    {refalrts::icSpliceTile, 22, 24, 0},
    {refalrts::icSpliceEVar, 0, 0, 16},
    {refalrts::icSpliceTile, 8, 9, 0},
    {refalrts::icSpliceTile, 21, 21, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 18, 18, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +31, 0, 0},
    //S (E )((#E'$'E ))E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.any#1/6 )/9 (/12 (/16 # E/18 '$'/19 e.Pattern#1/14 )/17 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icBracketLeftSave, 0, 14, 10},
    {refalrts::icIdentLeftSave, 18, 0, 14},
    {refalrts::icCharLeftSave, 19, static_cast<unsigned char>('$'), 14},
    {refalrts::icEmpty, 0, 0, 10},
    // closed e.any#1 as range 6
    // closed e.Pattern#1 as range 14
    // closed e.Tail#1 as range 47(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 } & Inc/20 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/9 AsIs: (/12 AsIs: (/16 AsIs: # E/18 } '$'/21 </22 & SplitReps/23 s.Num#1/5/24 Tile{ AsIs: e.any#1/6 } Tile{ HalfReuse: >/19 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    {refalrts::icAllocFunc, 0, 2, 20},
    {refalrts::icAllocChar, 0, '$', 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 22},
    {refalrts::icAllocFunc, 0, 6, 23},
    {refalrts::icCopySTVar, 24, 5, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 19},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icPushStack, 0, 0, 19},
    {refalrts::icPushStack, 0, 0, 22},
    {refalrts::icPushStack, 0, 0, 9},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icSetRes, 0, 0, 19},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 21, 24, 0},
    {refalrts::icSpliceTile, 9, 18, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 20, 20, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +36, 0, 0},
    //S (E )()E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.Any#1/6 )/9 (/12 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icEmpty, 0, 0, 10},
    // closed e.Any#1 as range 6
    // closed e.Tail#1 as range 47(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 HalfReuse: >/8 } (/16 (/17 # E/18 '$'/19 </20 & SplitReps/21 s.Num#1/5/22 Tile{ AsIs: e.Any#1/6 } >/23 (/24 (/25 )/26 Tile{ AsIs: )/9 HalfReuse: )/12 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 2, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocIdent, 0, 0, 18},
    {refalrts::icAllocChar, 0, '$', 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 6, 21},
    {refalrts::icCopySTVar, 22, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 12},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 16, 13, 0},
    {refalrts::icLinkBrackets, 17, 12, 0},
    {refalrts::icLinkBrackets, 24, 9, 0},
    {refalrts::icLinkBrackets, 25, 26, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 9},
    {refalrts::icSpliceTile, 23, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 16, 22, 0},
    {refalrts::icSpliceTile, 5, 8, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +38, 0, 0},
    //S ()(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 e.Any#1/10 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icSave, 0, 49, 6},
    {refalrts::icEmpty, 0, 0, 49},
    // closed e.Any#1 as range 10
    // closed e.Tail#1 as range 47(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & FastGen/15 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 HalfReuse: (/9 AsIs: (/12 } # E/16 '$'/17 (/18 (/19 )/20 )/21 (/22 (/23 Tile{ AsIs: e.Any#1/10 } )/24 )/25 )/26 Tile{ AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 4, 15},
    {refalrts::icAllocIdent, 0, 0, 16},
    {refalrts::icAllocChar, 0, '$', 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 21},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icLinkBrackets, 9, 13, 0},
    {refalrts::icLinkBrackets, 12, 26, 0},
    {refalrts::icLinkBrackets, 22, 25, 0},
    {refalrts::icLinkBrackets, 23, 24, 0},
    {refalrts::icLinkBrackets, 18, 21, 0},
    {refalrts::icLinkBrackets, 19, 20, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 13},
    {refalrts::icSpliceTile, 24, 26, 0},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 16, 23, 0},
    {refalrts::icSpliceTile, 0, 12, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +32, 0, 0},
    //S ((#E'$'E ))((#E'$'E ))E 
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern1#1/10 )/13 )/9 (/18 (/22 # E/24 '$'/25 e.Pattern2#1/20 )/23 )/19 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 6},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    {refalrts::icIdentLeftSave, 14, 0, 10},
    {refalrts::icCharLeftSave, 15, static_cast<unsigned char>('$'), 10},
    {refalrts::icSave, 0, 49, 2},
    {refalrts::icBracketLeftSave, 0, 16, 49},
    {refalrts::icBracketLeftSave, 0, 20, 16},
    {refalrts::icIdentLeftSave, 24, 0, 20},
    {refalrts::icCharLeftSave, 25, static_cast<unsigned char>('$'), 20},
    {refalrts::icEmpty, 0, 0, 47},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.Pattern1#1 as range 10
    // closed e.Pattern2#1 as range 20
    // closed e.Tail#1 as range 49(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/18 (/22 # E/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & FastGen/9 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 AsIs: (/12 HalfReuse: (/14 HalfReuse: # E/15 } Tile{ AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/10 } Tile{ AsIs: e.Pattern2#1/20 } Tile{ AsIs: )/23 AsIs: )/19 AsIs: e.Tail#1/49(2) AsIs: >/1 ]] }
    {refalrts::icReinitBracket, 0, refalrts::ibOpenCall, 13},
    {refalrts::icReinitFunc, 0, 4, 9},
    {refalrts::icUpdateFunc, 0, 2, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 14},
    {refalrts::icReinitIdent, 0, 0, 15},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 13},
    {refalrts::icLinkBrackets, 12, 19, 0},
    {refalrts::icLinkBrackets, 14, 23, 0},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetRes, 0, 0, 23},
    {refalrts::icSpliceEVar, 0, 0, 20},
    {refalrts::icSpliceEVar, 0, 0, 10},
    {refalrts::icSpliceTile, 25, 25, 0},
    {refalrts::icSpliceTile, 0, 15, 0},
    {refalrts::icSpliceTile, 13, 9, 0},
    {refalrts::icTrashLeftEdge, 0, 0, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +33, 0, 0},
    //S (T )(T )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 t.1#1/14 )/9 (/12 t.2#1/16 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    // closed e.Tail#1 as range 47(2)
    {refalrts::icSave, 0, 49, 6},
    {refalrts::ictVarLeftSave, 0, 14, 49},
    {refalrts::icEmpty, 0, 0, 49},
    {refalrts::ictVarLeftSave, 0, 16, 10},
    {refalrts::icEmpty, 0, 0, 10},
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </18 & FastGen/19 </20 & Inc/21 s.Num#1/5/22 >/23 (/24 Tile{ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: t.1#1/14 AsIs: )/9 AsIs: (/12 AsIs: t.2#1/16 AsIs: )/13 } >/25 )/26 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 4, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 20},
    {refalrts::icAllocFunc, 0, 2, 21},
    {refalrts::icCopySTVar, 22, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 25},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 26},
    {refalrts::icUpdateFunc, 0, 5, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icLinkBrackets, 24, 26, 0},
    {refalrts::icPushStack, 0, 0, 25},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 20},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceTile, 25, 26, 0},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 18, 24, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +50, 0, 0},
    //S (E )(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/14 (/18 # E/20 '$'/21 (/24 e.Pattern1#1/22 )/25 )/19 e.2#1/6 )/9 (/12 e.3#1/26 (/30 # E/32 '$'/33 (/36 e.Pattern2#1/34 )/37 )/31 e.4#1/10 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    // closed e.Tail#1 as range 47(2)
    {refalrts::icSave, 0, 49, 6},
    {refalrts::icEPrepare, 0, 14, 49},
    {refalrts::icEStart, 0, 14, 49},
    {refalrts::icSave, 0, 51, 49},
    {refalrts::icBracketLeftSave, 0, 16, 51},
    {refalrts::icIdentLeftSave, 20, 0, 16},
    {refalrts::icCharLeftSave, 21, static_cast<unsigned char>('$'), 16},
    {refalrts::icBracketLeftSave, 0, 22, 16},
    {refalrts::icEmpty, 0, 0, 16},
    // closed e.Pattern1#1 as range 22
    // closed e.2#1 as range 51(6)
    {refalrts::icSave, 0, 53, 10},
    {refalrts::icEPrepare, 0, 26, 53},
    {refalrts::icEStart, 0, 26, 53},
    {refalrts::icSave, 0, 55, 53},
    {refalrts::icBracketLeftSave, 0, 28, 55},
    {refalrts::icIdentLeftSave, 32, 0, 28},
    {refalrts::icCharLeftSave, 33, static_cast<unsigned char>('$'), 28},
    {refalrts::icBracketLeftSave, 0, 34, 28},
    {refalrts::icEmpty, 0, 0, 28},
    // closed e.Pattern2#1 as range 34
    // closed e.4#1 as range 55(10)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </38 & FastGen/39 </40 & Inc/41 s.Num#1/5/42 >/43 (/44 Tile{ AsIs: </0 Reuse: & FastGen_MeN/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/14 AsIs: (/18 AsIs: # E/20 AsIs: '$'/21 AsIs: (/24 AsIs: e.Pattern1#1/22 AsIs: )/25 AsIs: )/19 AsIs: e.2#1/51(6) AsIs: )/9 AsIs: (/12 AsIs: e.3#1/26 AsIs: (/30 AsIs: # E/32 AsIs: '$'/33 AsIs: (/36 AsIs: e.Pattern2#1/34 AsIs: )/37 AsIs: )/31 AsIs: e.4#1/55(10) AsIs: )/13 } >/45 )/46 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 38},
    {refalrts::icAllocFunc, 0, 4, 39},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 40},
    {refalrts::icAllocFunc, 0, 2, 41},
    {refalrts::icCopySTVar, 42, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 43},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 44},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 45},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 46},
    {refalrts::icUpdateFunc, 0, 3, 4},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 38},
    {refalrts::icLinkBrackets, 44, 46, 0},
    {refalrts::icPushStack, 0, 0, 45},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 30, 31, 0},
    {refalrts::icLinkBrackets, 36, 37, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icLinkBrackets, 18, 19, 0},
    {refalrts::icLinkBrackets, 24, 25, 0},
    {refalrts::icPushStack, 0, 0, 43},
    {refalrts::icPushStack, 0, 0, 40},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceTile, 45, 46, 0},
    {refalrts::icSpliceTile, 0, 13, 0},
    {refalrts::icSpliceTile, 38, 44, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icOnFailGoTo, +42, 0, 0},
    //S (E )(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 e.Tail#1/2 >/1
    {refalrts::icSave, 0, 47, 2},
    {refalrts::icBracketLeftSave, 0, 10, 47},
    // closed e.1#1 as range 6
    // closed e.2#1 as range 10
    // closed e.Tail#1 as range 47(2)
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 } >/16 (/17 </18 & FastGen_K/19 s.Num#1/5/20 </21 & LengthComp/22 Tile{ AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 } >/23 (/24 e.1#1/6/25 )/27 (/28 e.2#1/10/29 )/31 >/32 )/33 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 14},
    {refalrts::icAllocFunc, 0, 2, 15},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 18},
    {refalrts::icAllocFunc, 0, 1, 19},
    {refalrts::icCopySTVar, 20, 5, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 21},
    {refalrts::icAllocFunc, 0, 0, 22},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 23},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 24},
    {refalrts::icCopyEVar, 25, 6, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 27},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 28},
    {refalrts::icCopyEVar, 29, 10, 0},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 31},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 32},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 33},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icLinkBrackets, 17, 33, 0},
    {refalrts::icPushStack, 0, 0, 32},
    {refalrts::icPushStack, 0, 0, 18},
    {refalrts::icLinkBrackets, 28, 31, 0},
    {refalrts::icLinkBrackets, 24, 27, 0},
    {refalrts::icPushStack, 0, 0, 23},
    {refalrts::icPushStack, 0, 0, 21},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 8, 9, 0},
    {refalrts::icPushStack, 0, 0, 16},
    {refalrts::icPushStack, 0, 0, 14},
    {refalrts::icSetRes, 0, 0, 1},
    {refalrts::icSpliceEVar, 0, 0, 47},
    {refalrts::icSpliceTile, 23, 33, 0},
    {refalrts::icSpliceTile, 8, 13, 0},
    {refalrts::icSpliceTile, 16, 22, 0},
    {refalrts::icSpliceTile, 5, 5, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    //S (E )(E )
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 >/1
    {refalrts::icBracketLeftSave, 0, 10, 2},
    {refalrts::icEmpty, 0, 0, 2},
    // closed e.1#1 as range 6
    // closed e.2#1 as range 10
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # E/14 '$'/15 Tile{ AsIs: (/8 } (/16 Tile{ AsIs: e.1#1/6 } )/17 )/18 Tile{ HalfReuse: (/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 HalfReuse: )/1 } )/19 )/20 Tile{ ]] }
    {refalrts::icAllocIdent, 0, 0, 14},
    {refalrts::icAllocChar, 0, '$', 15},
    {refalrts::icAllocBracket, 0, refalrts::ibOpenBracket, 16},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 17},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 18},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 19},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseBracket, 20},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 0},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 4},
    {refalrts::icReinitBracket, 0, refalrts::ibOpenBracket, 9},
    {refalrts::icReinitBracket, 0, refalrts::ibCloseBracket, 1},
    {refalrts::icLinkBrackets, 0, 20, 0},
    {refalrts::icLinkBrackets, 4, 19, 0},
    {refalrts::icLinkBrackets, 9, 1, 0},
    {refalrts::icLinkBrackets, 12, 13, 0},
    {refalrts::icLinkBrackets, 8, 18, 0},
    {refalrts::icLinkBrackets, 16, 17, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 19, 20, 0},
    {refalrts::icSpliceTile, 9, 1, 0},
    {refalrts::icSpliceTile, 17, 18, 0},
    {refalrts::icSpliceEVar, 0, 0, 6},
    {refalrts::icSpliceTile, 16, 16, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 14, 15, 0},
    {refalrts::icTrash, 0, 0, 4},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[12];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  //FAST GEN:E 
  //GLOBAL GEN:S (E )E 
  // </0 & FastGen/4 s.idx#0/5 (/8 e.idxVB#0/6 )/9 e.idxVT#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  context[6] = 0;
  context[7] = 0;
  context[8] = refalrts::brackets_left( context[6], context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[8], context[9]);
  // closed e.idxVB#0 as range 6
  // closed e.idxVT#0 as range 2
  do {
    refalrts::start_sentence();
    //S (E )
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 >/1
    context[47] = context[2];
    context[48] = context[3];
    if( ! refalrts::empty_seq( context[47], context[48] ) )
      continue;
    // closed e.1#1 as range 6

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  </0 & FastGen/4 {REMOVED TILE}  >/1 {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 } Tile{ ]] }
    refalrts::link_brackets( context[8], context[9] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[5], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ()()E 
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[49] = context[6];
    context[50] = context[7];
    if( ! refalrts::empty_seq( context[49], context[50] ) )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Tail#1 as range 47(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ HalfReuse: s.Num1 #5/8 HalfReuse: >/9 AsIs: (/12 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    refalrts::reinit_svar( context[8], context[5] );
    refalrts::reinit_close_call( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( context[4], res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern#1/10 )/13 )/9 (/18 e.any#1/16 )/19 e.Tail#1/2 >/1
    context[47] = context[6];
    context[48] = context[7];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_E<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[49] = context[2];
    context[50] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[49], context[50] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    if( ! refalrts::empty_seq( context[47], context[48] ) )
      continue;
    // closed e.Pattern#1 as range 10
    // closed e.any#1 as range 16
    // closed e.Tail#1 as range 49(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </18 } & Inc/20 Tile{ AsIs: s.Num#1/5 } >/21 Tile{ AsIs: (/8 AsIs: (/12 AsIs: # E/14 AsIs: '$'/15 AsIs: e.Pattern#1/10 HalfReuse: (/13 HalfReuse: (/9 } Tile{ AsIs: e.any#1/16 } )/22 )/23 )/24 Tile{ AsIs: )/19 AsIs: e.Tail#1/49(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[18] );
    refalrts::reinit_open_bracket( context[13] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[8], context[19] );
    refalrts::link_brackets( context[12], context[24] );
    refalrts::link_brackets( context[13], context[23] );
    refalrts::link_brackets( context[9], context[22] );
    refalrts::push_stack( context[21] );
    refalrts::push_stack( context[18] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[22], context[24] );
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[9] );
    res = refalrts::splice_evar( res, context[21], context[21] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[18], context[18] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )((#E'$'E ))E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.any#1/6 )/9 (/12 (/16 # E/18 '$'/19 e.Pattern#1/14 )/17 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[10], context[11] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    context[18] = refalrts::ident_left(  & ident_E<int>::name, context[14], context[15] );
    if( ! context[18] )
      continue;
    context[19] = refalrts::char_left( '$', context[14], context[15] );
    if( ! context[19] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.any#1 as range 6
    // closed e.Pattern#1 as range 14
    // closed e.Tail#1 as range 47(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } Tile{ HalfReuse: </8 } & Inc/20 Tile{ AsIs: s.Num#1/5 } Tile{ HalfReuse: >/9 AsIs: (/12 AsIs: (/16 AsIs: # E/18 } '$'/21 </22 & SplitReps/23 s.Num#1/5/24 Tile{ AsIs: e.any#1/6 } Tile{ HalfReuse: >/19 AsIs: e.Pattern#1/14 AsIs: )/17 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_name( context[20], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[21], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[23], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[24], context[5]))
      return refalrts::cNoMemory;
    refalrts::reinit_open_call( context[8] );
    refalrts::reinit_close_call( context[9] );
    refalrts::reinit_close_call( context[19] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[22] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[19];
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[21], context[24] );
    res = refalrts::splice_evar( res, context[9], context[18] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[20], context[20] );
    res = refalrts::splice_evar( res, context[8], context[8] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )()E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.Any#1/6 )/9 (/12 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;
    // closed e.Any#1 as range 6
    // closed e.Tail#1 as range 47(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 HalfReuse: >/8 } (/16 (/17 # E/18 '$'/19 </20 & SplitReps/21 s.Num#1/5/22 Tile{ AsIs: e.Any#1/6 } >/23 (/24 (/25 )/26 Tile{ AsIs: )/9 HalfReuse: )/12 AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[18], & ident_E<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[19], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], SplitReps, "SplitReps" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_close_bracket( context[12] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[16], context[13] );
    refalrts::link_brackets( context[17], context[12] );
    refalrts::link_brackets( context[24], context[9] );
    refalrts::link_brackets( context[25], context[26] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[9];
    res = refalrts::splice_evar( res, context[23], context[26] );
    res = refalrts::splice_evar( res, context[6], context[7] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[5], context[8] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ()(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 )/9 (/12 e.Any#1/10 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[49] = context[6];
    context[50] = context[7];
    if( ! refalrts::empty_seq( context[49], context[50] ) )
      continue;
    // closed e.Any#1 as range 10
    // closed e.Tail#1 as range 47(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </14 & FastGen/15 Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 HalfReuse: (/9 AsIs: (/12 } # E/16 '$'/17 (/18 (/19 )/20 )/21 (/22 (/23 Tile{ AsIs: e.Any#1/10 } )/24 )/25 )/26 Tile{ AsIs: )/13 AsIs: e.Tail#1/47(2) AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_ident( context[16], & ident_E<int>::name ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_char( context[17], '$' ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[19] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[22] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[9], context[13] );
    refalrts::link_brackets( context[12], context[26] );
    refalrts::link_brackets( context[22], context[25] );
    refalrts::link_brackets( context[23], context[24] );
    refalrts::link_brackets( context[18], context[21] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[13];
    res = refalrts::splice_evar( res, context[24], context[26] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[16], context[23] );
    res = refalrts::splice_evar( res, context[0], context[12] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S ((#E'$'E ))((#E'$'E ))E 
    // </0 & FastGen/4 s.Num#1/5 (/8 (/12 # E/14 '$'/15 e.Pattern1#1/10 )/13 )/9 (/18 (/22 # E/24 '$'/25 e.Pattern2#1/20 )/23 )/19 e.Tail#1/2 >/1
    context[47] = context[6];
    context[48] = context[7];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    context[14] = refalrts::ident_left(  & ident_E<int>::name, context[10], context[11] );
    if( ! context[14] )
      continue;
    context[15] = refalrts::char_left( '$', context[10], context[11] );
    if( ! context[15] )
      continue;
    context[49] = context[2];
    context[50] = context[3];
    context[16] = 0;
    context[17] = 0;
    context[18] = refalrts::brackets_left( context[16], context[17], context[49], context[50] );
    if( ! context[18] )
      continue;
    refalrts::bracket_pointers(context[18], context[19]);
    context[20] = 0;
    context[21] = 0;
    context[22] = refalrts::brackets_left( context[20], context[21], context[16], context[17] );
    if( ! context[22] )
      continue;
    refalrts::bracket_pointers(context[22], context[23]);
    context[24] = refalrts::ident_left(  & ident_E<int>::name, context[20], context[21] );
    if( ! context[24] )
      continue;
    context[25] = refalrts::char_left( '$', context[20], context[21] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[47], context[48] ) )
      continue;
    if( ! refalrts::empty_seq( context[16], context[17] ) )
      continue;
    // closed e.Pattern1#1 as range 10
    // closed e.Pattern2#1 as range 20
    // closed e.Tail#1 as range 49(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  (/18 (/22 # E/24 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } Tile{ HalfReuse: </13 HalfReuse: & FastGen/9 } Tile{ AsIs: </0 Reuse: & Inc/4 AsIs: s.Num#1/5 HalfReuse: >/8 AsIs: (/12 HalfReuse: (/14 HalfReuse: # E/15 } Tile{ AsIs: '$'/25 } Tile{ AsIs: e.Pattern1#1/10 } Tile{ AsIs: e.Pattern2#1/20 } Tile{ AsIs: )/23 AsIs: )/19 AsIs: e.Tail#1/49(2) AsIs: >/1 ]] }
    refalrts::reinit_open_call( context[13] );
    refalrts::reinit_name( context[9], FastGen, "FastGen" );
    refalrts::update_name( context[4], Inc, "Inc" );
    refalrts::reinit_close_call( context[8] );
    refalrts::reinit_open_bracket( context[14] );
    refalrts::reinit_ident( context[15], & ident_E<int>::name );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[13] );
    refalrts::link_brackets( context[12], context[19] );
    refalrts::link_brackets( context[14], context[23] );
    refalrts::push_stack( context[8] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[23];
    res = refalrts::splice_evar( res, context[20], context[21] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    res = refalrts::splice_evar( res, context[25], context[25] );
    res = refalrts::splice_evar( res, context[0], context[15] );
    res = refalrts::splice_evar( res, context[13], context[9] );
    refalrts::use( res );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (T )(T )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 t.1#1/14 )/9 (/12 t.2#1/16 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 47(2)
    context[49] = context[6];
    context[50] = context[7];
    context[15] = refalrts::tvar_left( context[14], context[49], context[50] );
    if( ! context[15] )
      continue;
    if( ! refalrts::empty_seq( context[49], context[50] ) )
      continue;
    context[17] = refalrts::tvar_left( context[16], context[10], context[11] );
    if( ! context[17] )
      continue;
    if( ! refalrts::empty_seq( context[10], context[11] ) )
      continue;

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </18 & FastGen/19 </20 & Inc/21 s.Num#1/5/22 >/23 (/24 Tile{ AsIs: </0 Reuse: & FastGen_Terms/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: t.1#1/14 AsIs: )/9 AsIs: (/12 AsIs: t.2#1/16 AsIs: )/13 } >/25 )/26 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], FastGen, "FastGen" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[20] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[21], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[22], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[25] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[26] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], FastGen_Terms, "FastGen_Terms" );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[24], context[26] );
    refalrts::push_stack( context[25] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[0], context[13] );
    res = refalrts::splice_evar( res, context[18], context[24] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/14 (/18 # E/20 '$'/21 (/24 e.Pattern1#1/22 )/25 )/19 e.2#1/6 )/9 (/12 e.3#1/26 (/30 # E/32 '$'/33 (/36 e.Pattern2#1/34 )/37 )/31 e.4#1/10 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.Tail#1 as range 47(2)
    context[49] = context[6];
    context[50] = context[7];
    context[14] = 0;
    context[15] = 0;
    refalrts::start_e_loop();
    do {
      context[51] = context[49];
      context[52] = context[50];
      context[16] = 0;
      context[17] = 0;
      context[18] = refalrts::brackets_left( context[16], context[17], context[51], context[52] );
      if( ! context[18] )
        continue;
      refalrts::bracket_pointers(context[18], context[19]);
      context[20] = refalrts::ident_left(  & ident_E<int>::name, context[16], context[17] );
      if( ! context[20] )
        continue;
      context[21] = refalrts::char_left( '$', context[16], context[17] );
      if( ! context[21] )
        continue;
      context[22] = 0;
      context[23] = 0;
      context[24] = refalrts::brackets_left( context[22], context[23], context[16], context[17] );
      if( ! context[24] )
        continue;
      refalrts::bracket_pointers(context[24], context[25]);
      if( ! refalrts::empty_seq( context[16], context[17] ) )
        continue;
      // closed e.Pattern1#1 as range 22
      // closed e.2#1 as range 51(6)
      context[53] = context[10];
      context[54] = context[11];
      context[26] = 0;
      context[27] = 0;
      refalrts::start_e_loop();
      do {
        context[55] = context[53];
        context[56] = context[54];
        context[28] = 0;
        context[29] = 0;
        context[30] = refalrts::brackets_left( context[28], context[29], context[55], context[56] );
        if( ! context[30] )
          continue;
        refalrts::bracket_pointers(context[30], context[31]);
        context[32] = refalrts::ident_left(  & ident_E<int>::name, context[28], context[29] );
        if( ! context[32] )
          continue;
        context[33] = refalrts::char_left( '$', context[28], context[29] );
        if( ! context[33] )
          continue;
        context[34] = 0;
        context[35] = 0;
        context[36] = refalrts::brackets_left( context[34], context[35], context[28], context[29] );
        if( ! context[36] )
          continue;
        refalrts::bracket_pointers(context[36], context[37]);
        if( ! refalrts::empty_seq( context[28], context[29] ) )
          continue;
        // closed e.Pattern2#1 as range 34
        // closed e.4#1 as range 55(10)

        refalrts::reset_allocator();
        //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
        //RESULT: Tile{ [[ } </38 & FastGen/39 </40 & Inc/41 s.Num#1/5/42 >/43 (/44 Tile{ AsIs: </0 Reuse: & FastGen_MeN/4 AsIs: s.Num#1/5 AsIs: (/8 AsIs: e.1#1/14 AsIs: (/18 AsIs: # E/20 AsIs: '$'/21 AsIs: (/24 AsIs: e.Pattern1#1/22 AsIs: )/25 AsIs: )/19 AsIs: e.2#1/51(6) AsIs: )/9 AsIs: (/12 AsIs: e.3#1/26 AsIs: (/30 AsIs: # E/32 AsIs: '$'/33 AsIs: (/36 AsIs: e.Pattern2#1/34 AsIs: )/37 AsIs: )/31 AsIs: e.4#1/55(10) AsIs: )/13 } >/45 )/46 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
        if( ! refalrts::alloc_open_call( context[38] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[39], FastGen, "FastGen" ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_call( context[40] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_name( context[41], Inc, "Inc" ) )
          return refalrts::cNoMemory;
        if (! refalrts::copy_stvar(context[42], context[5]))
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[43] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_open_bracket( context[44] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_call( context[45] ) )
          return refalrts::cNoMemory;
        if( ! refalrts::alloc_close_bracket( context[46] ) )
          return refalrts::cNoMemory;
        refalrts::update_name( context[4], FastGen_MeN, "FastGen_MeN" );
        refalrts::push_stack( context[1] );
        refalrts::push_stack( context[38] );
        refalrts::link_brackets( context[44], context[46] );
        refalrts::push_stack( context[45] );
        refalrts::push_stack( context[0] );
        refalrts::link_brackets( context[12], context[13] );
        refalrts::link_brackets( context[30], context[31] );
        refalrts::link_brackets( context[36], context[37] );
        refalrts::link_brackets( context[8], context[9] );
        refalrts::link_brackets( context[18], context[19] );
        refalrts::link_brackets( context[24], context[25] );
        refalrts::push_stack( context[43] );
        refalrts::push_stack( context[40] );
        refalrts::Iter trash_prev = arg_begin->prev;
        refalrts::use(trash_prev);
        refalrts::Iter res = context[1];
        res = refalrts::splice_evar( res, context[47], context[48] );
        res = refalrts::splice_evar( res, context[45], context[46] );
        res = refalrts::splice_evar( res, context[0], context[13] );
        res = refalrts::splice_evar( res, context[38], context[44] );
        refalrts::use( res );
        return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
      } while ( refalrts::open_evar_advance( context[26], context[27], context[53], context[54] ) );
    } while ( refalrts::open_evar_advance( context[14], context[15], context[49], context[50] ) );
  } while ( 0 );

  do {
    refalrts::start_sentence();
    //S (E )(E )E 
    // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 e.Tail#1/2 >/1
    context[47] = context[2];
    context[48] = context[3];
    context[10] = 0;
    context[11] = 0;
    context[12] = refalrts::brackets_left( context[10], context[11], context[47], context[48] );
    if( ! context[12] )
      continue;
    refalrts::bracket_pointers(context[12], context[13]);
    // closed e.1#1 as range 6
    // closed e.2#1 as range 10
    // closed e.Tail#1 as range 47(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & FastGen/4 } </14 & Inc/15 Tile{ AsIs: s.Num#1/5 } >/16 (/17 </18 & FastGen_K/19 s.Num#1/5/20 </21 & LengthComp/22 Tile{ AsIs: (/8 AsIs: e.1#1/6 AsIs: )/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 } >/23 (/24 e.1#1/6/25 )/27 (/28 e.2#1/10/29 )/31 >/32 )/33 Tile{ AsIs: e.Tail#1/47(2) } Tile{ AsIs: >/1 ]] }
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], Inc, "Inc" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[19], FastGen_K, "FastGen_K" ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_stvar(context[20], context[5]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[21] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[22], LengthComp, "LengthComp" ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[23] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[24] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[25], context[26], context[6], context[7]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[27] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[28] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[29], context[30], context[10], context[11]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[31] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[32] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[33] ) )
      return refalrts::cNoMemory;
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[17], context[33] );
    refalrts::push_stack( context[32] );
    refalrts::push_stack( context[18] );
    refalrts::link_brackets( context[28], context[31] );
    refalrts::link_brackets( context[24], context[27] );
    refalrts::push_stack( context[23] );
    refalrts::push_stack( context[21] );
    refalrts::link_brackets( context[12], context[13] );
    refalrts::link_brackets( context[8], context[9] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[47], context[48] );
    res = refalrts::splice_evar( res, context[23], context[33] );
    res = refalrts::splice_evar( res, context[8], context[13] );
    res = refalrts::splice_evar( res, context[16], context[22] );
    res = refalrts::splice_evar( res, context[5], context[5] );
    res = refalrts::splice_evar( res, context[14], context[15] );
    refalrts::use( res );
    return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
  } while ( 0 );

  //S (E )(E )
  // </0 & FastGen/4 s.Num#1/5 (/8 e.1#1/6 )/9 (/12 e.2#1/10 )/13 >/1
  context[10] = 0;
  context[11] = 0;
  context[12] = refalrts::brackets_left( context[10], context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[12], context[13]);
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.1#1 as range 6
  // closed e.2#1 as range 10

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  s.Num#1/5 {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: (/4 } # E/14 '$'/15 Tile{ AsIs: (/8 } (/16 Tile{ AsIs: e.1#1/6 } )/17 )/18 Tile{ HalfReuse: (/9 AsIs: (/12 AsIs: e.2#1/10 AsIs: )/13 HalfReuse: )/1 } )/19 )/20 Tile{ ]] }
  if( ! refalrts::alloc_ident( context[14], & ident_E<int>::name ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_char( context[15], '$' ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[16] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[17] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[19] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_open_bracket( context[9] );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[0], context[20] );
  refalrts::link_brackets( context[4], context[19] );
  refalrts::link_brackets( context[9], context[1] );
  refalrts::link_brackets( context[12], context[13] );
  refalrts::link_brackets( context[8], context[18] );
  refalrts::link_brackets( context[16], context[17] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[19], context[20] );
  res = refalrts::splice_evar( res, context[9], context[1] );
  res = refalrts::splice_evar( res, context[17], context[18] );
  res = refalrts::splice_evar( res, context[6], context[7] );
  res = refalrts::splice_evar( res, context[16], context[16] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[14], context[15] );
  refalrts::use( res );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}

refalrts::FnResult CreateFastGen(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
#ifdef INTERPRET
  static const refalrts::RefalFunction functions[] = {
    { PreparePatternsFastGen, "PreparePatternsFastGen" },
    { FastGen, "FastGen" }
  };
  using refalrts::idents;
  using refalrts::numbers;
  using refalrts::strings;
  static const refalrts::RASLCommand raa[] = {
    // </0 & CreateFastGen/4 e.Patterns#1/2 >/1
    {refalrts::icInitB0_Lite, 0, 0, 0},
    {refalrts::icCallSaveLeft, 0, 2, 0},
    // closed e.Patterns#1 as range 2
    {refalrts::icEmptyResult, 0, 0, 0},
    //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
    //RESULT: Tile{ [[ } </5 & FastGen/6 1/7 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen/4 AsIs: e.Patterns#1/2 AsIs: >/1 } >/8 Tile{ ]] }
    {refalrts::icAllocBracket, 0, refalrts::ibOpenCall, 5},
    {refalrts::icAllocFunc, 0, 1, 6},
    {refalrts::icAllocInt, 0, 1, 7},
    {refalrts::icAllocBracket, 0, refalrts::ibCloseCall, 8},
    {refalrts::icUpdateFunc, 0, 0, 4},
    {refalrts::icPushStack, 0, 0, 8},
    {refalrts::icPushStack, 0, 0, 5},
    {refalrts::icPushStack, 0, 0, 1},
    {refalrts::icPushStack, 0, 0, 0},
    {refalrts::icSetResRightEdge, 0, 0, 0},
    {refalrts::icSpliceTile, 8, 8, 0},
    {refalrts::icSpliceTile, 0, 1, 0},
    {refalrts::icSpliceTile, 5, 7, 0},
    {refalrts::icReturnResult_NoTrash, 0, 0, 0},
    {refalrts::icEnd, 0, 0, 0}
  };
  int open_e_stack[1];
  refalrts::FnResult res = refalrts::interpret_array(
    raa, context, arg_begin, arg_end,
    functions, idents, numbers, strings, open_e_stack
  );
  return res;
#else
  // </0 & CreateFastGen/4 e.Patterns#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Patterns#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE}  {REMOVED TILE}  {REMOVED TILE} 
  //RESULT: Tile{ [[ } </5 & FastGen/6 1/7 Tile{ AsIs: </0 Reuse: & PreparePatternsFastGen/4 AsIs: e.Patterns#1/2 AsIs: >/1 } >/8 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], FastGen, "FastGen" ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_number( context[7], 1UL ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[8] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], PreparePatternsFastGen, "PreparePatternsFastGen" );
  refalrts::push_stack( context[8] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::FnResult(refalrts::cSuccess | (__LINE__ << 8));
#endif
}


//End of file