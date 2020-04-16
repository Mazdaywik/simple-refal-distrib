// This file automatically generated from 'DFA-Parser.ref'
// Don't edit! Edit 'DFA-Parser.ref' and recompile it

#include "refalrts.h"

#define cookie_ns cookie_ns_1700529715_515021252
#define COOKIE1_ 1700529715U
#define COOKIE2_ 515021252U

enum efunc {
  efunc_u_u_Stepm_Drop = 0,
  efunc_u_u_Metau_Mu = 1,
  efunc_d_table = 2,
  efunc_ErrorAt = 3,
  efunc_ParseElements = 4,
  efunc_ParseSetDescr = 5,
  efunc_ParseSentence = 6,
  efunc_UnexpectedToken = 7,
  efunc_ExtractSets = 8,
  efunc_Fetch = 9,
  efunc_gen_ParseSetDescr_S1L1 = 10,
  efunc_ExtractAlternatives = 11,
  efunc_gen_ParseSentence_S1L1 = 12,
  efunc_ExtractAlternativesm_Head = 13,
  efunc_ExtractAlternativesm_Flush = 14,
  efunc_ExtractAlternativesm_NextState = 15,
  efunc_Pipe = 16,
  efunc_gen_ExtractAlternatives_L1 = 17,
  efunc_gen_ExtractAlternatives_L2 = 18,
  efunc_gen_ExtractAlternatives_L3 = 19,
  efunc_gen_ExtractAlternatives_L4 = 20,
  efunc_gen_ExtractAlternatives_L5 = 21,
  efunc_gen_ExtractAlternatives_L6 = 22,
  efunc_DFAm_TextFromToken = 23,
  efunc_Mu = 24,
  efunc_Up = 25,
  efunc_Evm_met = 26,
  efunc_Residue = 27,
  efunc_u_u_Metau_Residue = 28,
  efunc_DFAm_Parse = 29,
};


enum ident {
  ident_TEOF = 0,
  ident_TSetName = 1,
  ident_TName = 2,
  ident_TDot = 3,
  ident_Set = 4,
  ident_TEquals = 5,
  ident_TLiteral = 6,
  ident_Chars = 7,
  ident_Sentence = 8,
  ident_None = 9,
  ident_Finitive = 10,
  ident_TAlternative = 11,
  ident_TFlush = 12,
  ident_Empty = 13,
  ident_TNamedFlush = 14,
  ident_TErrorFlush = 15,
  ident_Unnamed = 16,
  ident_Flush = 17,
  ident_FlushError = 18,
  ident_Mu = 19,
  ident_Up = 20,
  ident_Evm_met = 21,
  ident_Residue = 22,
  ident_u_u_Metau_Residue = 23,
  ident_DFAm_Parse = 24,
  ident_ParseElements = 25,
  ident_ParseSetDescr = 26,
  ident_ExtractSets = 27,
  ident_ParseSentence = 28,
  ident_ExtractAlternatives = 29,
  ident_ExtractAlternativesm_Head = 30,
  ident_ExtractAlternativesm_Flush = 31,
  ident_ExtractAlternativesm_NextState = 32,
  ident_UnexpectedToken = 33,
};


static refalrts::FnResult func_Mu(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & Mu/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/8 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_close_call(vm, context[8]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Mu("Mu", COOKIE1_, COOKIE2_, func_Mu);


static refalrts::FnResult func_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 12 elems
  refalrts::Iter context[12];
  refalrts::zeros( context, 12 );
  // </0 & Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 </8 & __Step-Drop/9 >/10 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 HalfReuse: & $table/1 } >/11 Tile{ ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::alloc_open_call(vm, context[8]);
  refalrts::alloc_name(vm, context[9], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[10]);
  refalrts::alloc_close_call(vm, context[11]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::reinit_name(context[1], functions[efunc_d_table]);
  refalrts::push_stack( vm, context[11] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[10] );
  refalrts::push_stack( vm, context[8] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[11], context[11] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_Residue("Residue", COOKIE1_, COOKIE2_, func_Residue);


static refalrts::FnResult func_u_u_Metau_Residue(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 8 elems
  refalrts::Iter context[8];
  refalrts::zeros( context, 8 );
  // </0 & __Meta_Residue/4 e.Arg#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.Arg#1 as range 2
  //DEBUG: e.Arg#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & __Step-Drop/6 >/7 Tile{ AsIs: </0 Reuse: & __Meta_Mu/4 AsIs: e.Arg#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_u_u_Stepm_Drop]);
  refalrts::alloc_close_call(vm, context[7]);
  refalrts::update_name(context[4], functions[efunc_u_u_Metau_Mu]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[7] );
  refalrts::push_stack( vm, context[5] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_u_u_Metau_Residue("__Meta_Residue", COOKIE1_, COOKIE2_, func_u_u_Metau_Residue);


static refalrts::FnResult func_DFAm_Parse(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & DFA-Parse/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  do {
    // </0 & DFA-Parse/4 (/9 # TEOF/11 t.SrcPos#1/12 )/10 >/1
    context[5] = context[2];
    context[6] = context[3];
    context[7] = 0;
    context[8] = 0;
    context[9] = refalrts::brackets_left( context[7], context[8], context[5], context[6] );
    if( ! context[9] )
      continue;
    refalrts::bracket_pointers(context[9], context[10]);
    context[11] = refalrts::ident_left( identifiers[ident_TEOF], context[7], context[8] );
    if( ! context[11] )
      continue;
    if( ! refalrts::empty_seq( context[5], context[6] ) )
      continue;
    context[13] = refalrts::tvar_left( context[12], context[7], context[8] );
    if( ! context[13] )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 12

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/12 } 'I'/14 Tile{ HalfReuse: 'l'/9 HalfReuse: 'l'/11 }"egal empty descriptio"/15 Tile{ HalfReuse: 'n'/10 AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[14], 'I');
    refalrts::alloc_chars(vm, context[15], context[16], "egal empty descriptio", 21);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[9], 'l');
    refalrts::reinit_char(context[11], 'l');
    refalrts::reinit_char(context[10], 'n');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[10];
    res = refalrts::splice_evar( res, context[15], context[16] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[14], context[14] );
    res = refalrts::splice_evar( res, context[12], context[13] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & DFA-Parse/4 e.Tokens#1/2 >/1
  // closed e.Tokens#1 as range 2
  //DEBUG: e.Tokens#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & ParseElements/6 (/7 (/8"Any"/9 )/11 )/12 Tile{ HalfReuse: (/0 HalfReuse: )/4 AsIs: e.Tokens#1/2 AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[5]);
  refalrts::alloc_name(vm, context[6], functions[efunc_ParseElements]);
  refalrts::alloc_open_bracket(vm, context[7]);
  refalrts::alloc_open_bracket(vm, context[8]);
  refalrts::alloc_chars(vm, context[9], context[10], "Any", 3);
  refalrts::alloc_close_bracket(vm, context[11]);
  refalrts::alloc_close_bracket(vm, context[12]);
  refalrts::reinit_open_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[5] );
  refalrts::link_brackets( context[0], context[4] );
  refalrts::link_brackets( context[7], context[12] );
  refalrts::link_brackets( context[8], context[11] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[5], context[12] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_DFAm_Parse("DFA-Parse", 0U, 0U, func_DFAm_Parse);


static refalrts::FnResult func_ParseElements(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 56 elems
  refalrts::Iter context[56];
  refalrts::zeros( context, 56 );
  // </0 & ParseElements/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseElements/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 e.new#4/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#4 as range 2
  do {
    // </0 & ParseElements/4 (/7 e.new#9/15 )/8 (/11 e.new#10/17 )/12 (/13 s.new#5/23 t.new#6/24 e.new#7/21 )/14 e.new#8/19 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[9];
    context[18] = context[10];
    context[19] = context[2];
    context[20] = context[3];
    context[21] = 0;
    context[22] = 0;
    if( ! refalrts::brackets_term( context[21], context[22], context[13] ) )
      continue;
    // closed e.new#9 as range 15
    // closed e.new#10 as range 17
    // closed e.new#8 as range 19
    if( ! refalrts::svar_left( context[23], context[21], context[22] ) )
      continue;
    context[25] = refalrts::tvar_left( context[24], context[21], context[22] );
    if( ! context[25] )
      continue;
    // closed e.new#7 as range 21
    do {
      // </0 & ParseElements/4 (/7 e.new#14/26 )/8 (/11 e.new#15/28 )/12 (/13 # TSetName/23 t.new#11/24 e.new#12/30 )/14 e.new#13/32 >/1
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[23] ) )
        continue;
      // closed e.new#14 as range 26
      // closed e.new#15 as range 28
      // closed e.new#12 as range 30
      // closed e.new#13 as range 32
      do {
        // </0 & ParseElements/4 (/7 e.SetNames-B#1/42 (/48 e.Name#1/50 )/49 e.SetNames-E#1/44 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.RuleNames#1 as range 36
        // closed e.Name#1 as range 38
        // closed e.Tail#1 as range 40
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[34];
          context[45] = context[35];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[38], context[39], context[46], context[47] ) )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          // closed e.SetNames-E#1 as range 44
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: e.RuleNames#1: 36
          //DEBUG: e.Name#1: 38
          //DEBUG: e.Tail#1: 40
          //DEBUG: e.SetNames-B#1: 42
          //DEBUG: e.SetNames-E#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames-B#1/42 {REMOVED TILE} e.SetNames-E#1/44 {REMOVED TILE} e.RuleNames#1/36 {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} e.Tail#1/40 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ HalfReuse: 'S'/8 HalfReuse: 'e'/11 } Tile{ HalfReuse: 't'/12 HalfReuse: ' '/13 HalfReuse: 'n'/23 } Tile{ HalfReuse: 'a'/7 } Tile{ HalfReuse: 'm'/14 }"e "/52 Tile{ HalfReuse: ':'/48 AsIs: e.Name#1/50 HalfReuse: ':'/49 }" redeclared"/54 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_chars(vm, context[52], context[53], "e ", 2);
          refalrts::alloc_chars(vm, context[54], context[55], " redeclared", 11);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'S');
          refalrts::reinit_char(context[11], 'e');
          refalrts::reinit_char(context[12], 't');
          refalrts::reinit_char(context[13], ' ');
          refalrts::reinit_char(context[23], 'n');
          refalrts::reinit_char(context[7], 'a');
          refalrts::reinit_char(context[14], 'm');
          refalrts::reinit_char(context[48], ':');
          refalrts::reinit_char(context[49], ':');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[54], context[55] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[52], context[53] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[7], context[7] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[34], context[35] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TSetName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      context[41] = context[33];
      // closed e.SetNames#1 as range 34
      // closed e.RuleNames#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.SetNames#1: 34
      //DEBUG: e.RuleNames#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSetDescr/4 AsIs: (/7 AsIs: e.SetNames#1/34 HalfReuse: (/8 } Tile{ AsIs: e.Name#1/38 } Tile{ HalfReuse: )/23 } )/42 Tile{ AsIs: (/11 AsIs: e.RuleNames#1/36 AsIs: )/12 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ AsIs: (/13 } e.Name#1/38/43 Tile{ AsIs: )/14 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::alloc_close_bracket(vm, context[42]);
      refalrts::copy_evar(vm, context[43], context[44], context[38], context[39]);
      refalrts::update_name(context[4], functions[efunc_ParseSetDescr]);
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[13], context[14] );
      refalrts::link_brackets( context[11], context[12] );
      refalrts::link_brackets( context[7], context[42] );
      refalrts::link_brackets( context[8], context[23] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[43], context[44] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[24], context[25] );
      res = refalrts::splice_evar( res, context[11], context[12] );
      res = refalrts::splice_evar( res, context[42], context[42] );
      res = refalrts::splice_evar( res, context[23], context[23] );
      res = refalrts::splice_evar( res, context[38], context[39] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ParseElements/4 (/7 e.new#14/26 )/8 (/11 e.new#15/28 )/12 (/13 # TName/23 t.new#11/24 e.new#12/30 )/14 e.new#13/32 >/1
      context[26] = context[15];
      context[27] = context[16];
      context[28] = context[17];
      context[29] = context[18];
      context[30] = context[21];
      context[31] = context[22];
      context[32] = context[19];
      context[33] = context[20];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[23] ) )
        continue;
      // closed e.new#14 as range 26
      // closed e.new#15 as range 28
      // closed e.new#12 as range 30
      // closed e.new#13 as range 32
      do {
        // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames-B#1/42 (/48 e.Name#1/50 )/49 e.RuleNames-E#1/44 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
        context[34] = context[26];
        context[35] = context[27];
        context[36] = context[28];
        context[37] = context[29];
        context[38] = context[30];
        context[39] = context[31];
        context[40] = context[32];
        context[41] = context[33];
        // closed e.SetNames#1 as range 34
        // closed e.Name#1 as range 38
        // closed e.Tail#1 as range 40
        context[42] = 0;
        context[43] = 0;
        refalrts::start_e_loop(vm);
        do {
          context[44] = context[36];
          context[45] = context[37];
          context[46] = 0;
          context[47] = 0;
          context[48] = refalrts::brackets_left( context[46], context[47], context[44], context[45] );
          if( ! context[48] )
            continue;
          refalrts::bracket_pointers(context[48], context[49]);
          if( ! refalrts::repeated_evar_left( vm, context[50], context[51], context[38], context[39], context[46], context[47] ) )
            continue;
          if( ! refalrts::empty_seq( context[46], context[47] ) )
            continue;
          // closed e.RuleNames-E#1 as range 44
          //DEBUG: t.SrcPos#1: 24
          //DEBUG: e.SetNames#1: 34
          //DEBUG: e.Name#1: 38
          //DEBUG: e.Tail#1: 40
          //DEBUG: e.RuleNames-B#1: 42
          //DEBUG: e.RuleNames-E#1: 44

          refalrts::reset_allocator(vm);
          //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/34 {REMOVED TILE} e.RuleNames-B#1/42 {REMOVED TILE} e.RuleNames-E#1/44 {REMOVED TILE} {REMOVED TILE} e.Name#1/38 {REMOVED TILE} e.Tail#1/40 {REMOVED TILE}
          //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/24 } Tile{ HalfReuse: 'N'/8 HalfReuse: 'a'/11 } Tile{ HalfReuse: 'm'/7 } 'e'/52 Tile{ HalfReuse: ' '/48 AsIs: e.Name#1/50 HalfReuse: ' '/49 } Tile{ HalfReuse: 'r'/12 HalfReuse: 'e'/13 HalfReuse: 'd'/23 } Tile{ HalfReuse: 'e'/14 }"clared"/53 Tile{ AsIs: >/1 ]] }
          refalrts::alloc_char(vm, context[52], 'e');
          refalrts::alloc_chars(vm, context[53], context[54], "clared", 6);
          refalrts::update_name(context[4], functions[efunc_ErrorAt]);
          refalrts::reinit_char(context[8], 'N');
          refalrts::reinit_char(context[11], 'a');
          refalrts::reinit_char(context[7], 'm');
          refalrts::reinit_char(context[48], ' ');
          refalrts::reinit_char(context[49], ' ');
          refalrts::reinit_char(context[12], 'r');
          refalrts::reinit_char(context[13], 'e');
          refalrts::reinit_char(context[23], 'd');
          refalrts::reinit_char(context[14], 'e');
          refalrts::push_stack( vm, context[1] );
          refalrts::push_stack( vm, context[0] );
          refalrts::Iter trash_prev = arg_begin->prev;
          refalrts::use(trash_prev);
          refalrts::Iter res = context[1];
          res = refalrts::splice_evar( res, context[53], context[54] );
          res = refalrts::splice_evar( res, context[14], context[14] );
          res = refalrts::splice_evar( res, context[12], context[23] );
          res = refalrts::splice_evar( res, context[48], context[49] );
          res = refalrts::splice_evar( res, context[52], context[52] );
          res = refalrts::splice_evar( res, context[7], context[7] );
          res = refalrts::splice_evar( res, context[8], context[11] );
          res = refalrts::splice_evar( res, context[24], context[25] );
          refalrts::splice_to_freelist_open( vm, context[4], res );
          return refalrts::cSuccess;
        } while ( refalrts::open_evar_advance( context[42], context[43], context[36], context[37] ) );
      } while ( 0 );
      refalrts::stop_sentence(vm);

      // </0 & ParseElements/4 (/7 e.SetNames#1/34 )/8 (/11 e.RuleNames#1/36 )/12 (/13 # TName/23 t.SrcPos#1/24 e.Name#1/38 )/14 e.Tail#1/40 >/1
      context[34] = context[26];
      context[35] = context[27];
      context[36] = context[28];
      context[37] = context[29];
      context[38] = context[30];
      context[39] = context[31];
      context[40] = context[32];
      context[41] = context[33];
      // closed e.SetNames#1 as range 34
      // closed e.RuleNames#1 as range 36
      // closed e.Name#1 as range 38
      // closed e.Tail#1 as range 40
      //DEBUG: t.SrcPos#1: 24
      //DEBUG: e.SetNames#1: 34
      //DEBUG: e.RuleNames#1: 36
      //DEBUG: e.Name#1: 38
      //DEBUG: e.Tail#1: 40

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ParseSentence/4 AsIs: (/7 AsIs: e.SetNames#1/34 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/36 HalfReuse: (/12 } e.Name#1/38/42 Tile{ HalfReuse: )/13 HalfReuse: )/23 AsIs: t.SrcPos#1/24 } (/44 Tile{ AsIs: e.Name#1/38 } Tile{ AsIs: )/14 AsIs: e.Tail#1/40 AsIs: >/1 ]] }
      refalrts::copy_evar(vm, context[42], context[43], context[38], context[39]);
      refalrts::alloc_open_bracket(vm, context[44]);
      refalrts::update_name(context[4], functions[efunc_ParseSentence]);
      refalrts::reinit_open_bracket(context[12]);
      refalrts::reinit_close_bracket(context[13]);
      refalrts::reinit_close_bracket(context[23]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[44], context[14] );
      refalrts::link_brackets( context[11], context[23] );
      refalrts::link_brackets( context[12], context[13] );
      refalrts::link_brackets( context[7], context[8] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[14];
      res = refalrts::splice_evar( res, context[38], context[39] );
      res = refalrts::splice_evar( res, context[44], context[44] );
      res = refalrts::splice_evar( res, context[13], context[25] );
      res = refalrts::splice_evar( res, context[42], context[43] );
      refalrts::use( res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseElements/4 (/7 e.SetNames#1/26 )/8 (/11 e.RuleNames#1/28 )/12 (/13 # TEOF/23 t.SrcPos#1/24 )/14 e.Tail#1/30 >/1
    context[26] = context[15];
    context[27] = context[16];
    context[28] = context[17];
    context[29] = context[18];
    context[30] = context[19];
    context[31] = context[20];
    if( ! refalrts::ident_term( identifiers[ident_TEOF], context[23] ) )
      continue;
    if( ! refalrts::empty_seq( context[21], context[22] ) )
      continue;
    // closed e.SetNames#1 as range 26
    // closed e.RuleNames#1 as range 28
    // closed e.Tail#1 as range 30
    //DEBUG: t.SrcPos#1: 24
    //DEBUG: e.SetNames#1: 26
    //DEBUG: e.RuleNames#1: 28
    //DEBUG: e.Tail#1: 30

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 & ParseElements/4 (/7 e.SetNames#1/26 )/8 (/11 e.RuleNames#1/28 )/12 (/13 # TEOF/23 t.SrcPos#1/24 )/14 e.Tail#1/30 >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ ]] }
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseElements/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.Unexpected#1/13 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 13
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/13 } Tile{ HalfReuse: 'n'/7 } Tile{ HalfReuse: 'a'/8 HalfReuse: 'm'/11 } Tile{ HalfReuse: 'e'/12 }" or set name"/15 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[15], context[16], " or set name", 12);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[7], 'n');
  refalrts::reinit_char(context[8], 'a');
  refalrts::reinit_char(context[11], 'm');
  refalrts::reinit_char(context[12], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[12], context[12] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[13], context[14] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseElements("ParseElements", COOKIE1_, COOKIE2_, func_ParseElements);


static refalrts::FnResult func_gen_ParseSetDescr_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 50 elems
  refalrts::Iter context[50];
  refalrts::zeros( context, 50 );
  // </0 & ParseSetDescr$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr$1\1/4 (/7 e.new#1/5 )/8 t.new#2/9 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSetDescr$1\1/4 (/7 e.new#11/25 )/8 t.new#8/9 (/13 e.new#12/27 )/14 (/17 e.new#13/29 )/18 (/21 e.new#14/31 )/22 (/23 # TDot/37 t.new#9/38 )/24 e.new#10/33 >/1
    context[25] = context[5];
    context[26] = context[6];
    context[27] = context[11];
    context[28] = context[12];
    context[29] = context[15];
    context[30] = context[16];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[2];
    context[34] = context[3];
    context[35] = 0;
    context[36] = 0;
    if( ! refalrts::brackets_term( context[35], context[36], context[23] ) )
      continue;
    context[37] = refalrts::ident_left( identifiers[ident_TDot], context[35], context[36] );
    if( ! context[37] )
      continue;
    // closed e.new#11 as range 25
    // closed e.new#12 as range 27
    // closed e.new#13 as range 29
    // closed e.new#14 as range 31
    // closed e.new#10 as range 33
    context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
    if( ! context[39] )
      continue;
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    do {
      // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/40 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/42 )/14 (/17 e.RuleNames#1/44 )/18 (/21 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/46 >/1
      context[40] = context[25];
      context[41] = context[26];
      context[42] = context[27];
      context[43] = context[28];
      context[44] = context[29];
      context[45] = context[30];
      context[46] = context[33];
      context[47] = context[34];
      if( ! refalrts::empty_seq( context[31], context[32] ) )
        continue;
      // closed e.Name#1 as range 40
      // closed e.SetNames#1 as range 42
      // closed e.RuleNames#1 as range 44
      // closed e.Tail#2 as range 46
      //DEBUG: t.SetNamePos#1: 9
      //DEBUG: t.SrcPos#2: 38
      //DEBUG: e.Name#1: 40
      //DEBUG: e.SetNames#1: 42
      //DEBUG: e.RuleNames#1: 44
      //DEBUG: e.Tail#2: 46

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/42 {REMOVED TILE} e.RuleNames#1/44 {REMOVED TILE} {REMOVED TILE} e.Tail#2/46 {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#2/38 HalfReuse: 'S'/24 } Tile{ HalfReuse: 'e'/13 } Tile{ HalfReuse: 't'/14 HalfReuse: ' '/17 } Tile{ HalfReuse: ':'/8 } Tile{ AsIs: e.Name#1/40 } Tile{ HalfReuse: ':'/18 HalfReuse: ' '/21 HalfReuse: 'n'/22 HalfReuse: 'o'/23 HalfReuse: 't'/37 } Tile{ HalfReuse: ' '/7 }"have content"/48 Tile{ AsIs: >/1 ]] }
      refalrts::alloc_chars(vm, context[48], context[49], "have content", 12);
      refalrts::update_name(context[4], functions[efunc_ErrorAt]);
      refalrts::reinit_char(context[24], 'S');
      refalrts::reinit_char(context[13], 'e');
      refalrts::reinit_char(context[14], 't');
      refalrts::reinit_char(context[17], ' ');
      refalrts::reinit_char(context[8], ':');
      refalrts::reinit_char(context[18], ':');
      refalrts::reinit_char(context[21], ' ');
      refalrts::reinit_char(context[22], 'n');
      refalrts::reinit_char(context[23], 'o');
      refalrts::reinit_char(context[37], 't');
      refalrts::reinit_char(context[7], ' ');
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[48], context[49] );
      res = refalrts::splice_evar( res, context[7], context[7] );
      res = refalrts::splice_evar( res, context[18], context[37] );
      res = refalrts::splice_evar( res, context[40], context[41] );
      res = refalrts::splice_evar( res, context[8], context[8] );
      res = refalrts::splice_evar( res, context[14], context[17] );
      res = refalrts::splice_evar( res, context[13], context[13] );
      res = refalrts::splice_evar( res, context[38], context[24] );
      refalrts::splice_to_freelist_open( vm, context[4], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/40 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/42 )/14 (/17 e.RuleNames#1/44 )/18 (/21 e.Body#2/46 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/48 >/1
    context[40] = context[25];
    context[41] = context[26];
    context[42] = context[27];
    context[43] = context[28];
    context[44] = context[29];
    context[45] = context[30];
    context[46] = context[31];
    context[47] = context[32];
    context[48] = context[33];
    context[49] = context[34];
    // closed e.Name#1 as range 40
    // closed e.SetNames#1 as range 42
    // closed e.RuleNames#1 as range 44
    // closed e.Body#2 as range 46
    // closed e.Tail#2 as range 48
    //DEBUG: t.SetNamePos#1: 9
    //DEBUG: t.SrcPos#2: 38
    //DEBUG: e.Name#1: 40
    //DEBUG: e.SetNames#1: 42
    //DEBUG: e.RuleNames#1: 44
    //DEBUG: e.Body#2: 46
    //DEBUG: e.Tail#2: 48

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/8 {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#2/38 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Set/4 } Tile{ AsIs: t.SetNamePos#1/9 } Tile{ AsIs: (/7 } Tile{ AsIs: e.Name#1/40 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/46 AsIs: )/22 HalfReuse: </23 HalfReuse: & ParseElements/37 } Tile{ AsIs: (/13 AsIs: e.SetNames#1/42 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/44 AsIs: )/18 } Tile{ AsIs: e.Tail#2/48 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Set]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_name(context[37], functions[efunc_ParseElements]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[7], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[48], context[49] );
    res = refalrts::splice_evar( res, context[13], context[18] );
    res = refalrts::splice_evar( res, context[21], context[37] );
    res = refalrts::splice_evar( res, context[40], context[41] );
    res = refalrts::splice_evar( res, context[7], context[7] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr$1\1/4 (/7 e.Name#1/5 )/8 t.SetNamePos#1/9 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 5
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SetNamePos#1: 9
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 5
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} e.Name#1/5 {REMOVED TILE} t.SetNamePos#1/9 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'd'/14 HalfReuse: 'o'/17 } Tile{ HalfReuse: 't'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'a'/22 } Tile{ HalfReuse: 't'/13 } Tile{ HalfReuse: ' '/8 } Tile{ HalfReuse: 'e'/7 }"nd of set"/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[25], context[26], "nd of set", 9);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[14], 'd');
  refalrts::reinit_char(context[17], 'o');
  refalrts::reinit_char(context[18], 't');
  refalrts::reinit_char(context[21], ' ');
  refalrts::reinit_char(context[22], 'a');
  refalrts::reinit_char(context[13], 't');
  refalrts::reinit_char(context[8], ' ');
  refalrts::reinit_char(context[7], 'e');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[7], context[7] );
  res = refalrts::splice_evar( res, context[8], context[8] );
  res = refalrts::splice_evar( res, context[13], context[13] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSetDescr_S1L1("ParseSetDescr$1\\1", COOKIE1_, COOKIE2_, func_gen_ParseSetDescr_S1L1);


static refalrts::FnResult func_ParseSetDescr(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ParseSetDescr/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSetDescr/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSetDescr/4 (/7 e.SetNames#1/21 )/8 (/11 e.RuleNames#1/23 )/12 t.SetNamePos#1/13 (/17 e.Name#1/25 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 e.Tail#1/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
      continue;
    context[31] = refalrts::ident_left( identifiers[ident_TEquals], context[29], context[30] );
    if( ! context[31] )
      continue;
    // closed e.SetNames#1 as range 21
    // closed e.RuleNames#1 as range 23
    // closed e.Name#1 as range 25
    // closed e.Tail#1 as range 27
    context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;
    //DEBUG: t.SetNamePos#1: 13
    //DEBUG: e.SetNames#1: 21
    //DEBUG: e.RuleNames#1: 23
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Tail#1: 27
    //DEBUG: t.SrcPos#1: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 } </34 & ExtractSets/35 Tile{ AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/27 AsIs: >/1 } [*]/36 Tile{ HalfReuse: & ParseSetDescr$1\1/31 } Tile{ AsIs: (/17 AsIs: e.Name#1/25 AsIs: )/18 } Tile{ AsIs: t.SetNamePos#1/13 } Tile{ AsIs: (/7 AsIs: e.SetNames#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/23 AsIs: )/12 } {*}/37 >/38 Tile{ ]] }
    refalrts::alloc_open_call(vm, context[34]);
    refalrts::alloc_name(vm, context[35], functions[efunc_ExtractSets]);
    refalrts::alloc_closure_head(vm, context[36]);
    refalrts::alloc_unwrapped_closure(vm, context[37], context[36]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::update_name(context[4], functions[efunc_Fetch]);
    refalrts::reinit_name(context[31], functions[efunc_gen_ParseSetDescr_S1L1]);
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[34] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[7], context[12] );
    res = refalrts::splice_evar( res, context[13], context[14] );
    res = refalrts::splice_evar( res, context[17], context[18] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[19], context[19] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::splice_to_freelist_open( vm, context[4], res );
    refalrts::wrap_closure( context[37] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSetDescr/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SetNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SetNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[8], '\"');
  refalrts::reinit_char(context[11], '=');
  refalrts::reinit_char(context[18], '\"');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSetDescr("ParseSetDescr", COOKIE1_, COOKIE2_, func_ParseSetDescr);


static refalrts::FnResult func_ExtractSets(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtractSets/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractSets/4 (/7 e.new#1/5 )/8 e.new#2/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractSets/4 (/7 e.new#7/9 )/8 (/15 s.new#3/17 t.new#4/18 e.new#5/13 )/16 e.new#6/11 >/1
    context[9] = context[5];
    context[10] = context[6];
    context[11] = context[2];
    context[12] = context[3];
    context[13] = 0;
    context[14] = 0;
    context[15] = refalrts::brackets_left( context[13], context[14], context[11], context[12] );
    if( ! context[15] )
      continue;
    refalrts::bracket_pointers(context[15], context[16]);
    // closed e.new#7 as range 9
    // closed e.new#6 as range 11
    if( ! refalrts::svar_left( context[17], context[13], context[14] ) )
      continue;
    context[19] = refalrts::tvar_left( context[18], context[13], context[14] );
    if( ! context[19] )
      continue;
    // closed e.new#5 as range 13
    do {
      // </0 & ExtractSets/4 (/7 e.Found#1/20 )/8 (/15 # TLiteral/17 t.SrcPos#1/18 e.Content#1/22 )/16 e.Tail#1/24 >/1
      context[20] = context[9];
      context[21] = context[10];
      context[22] = context[13];
      context[23] = context[14];
      context[24] = context[11];
      context[25] = context[12];
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[17] ) )
        continue;
      // closed e.Found#1 as range 20
      // closed e.Content#1 as range 22
      // closed e.Tail#1 as range 24
      //DEBUG: t.SrcPos#1: 18
      //DEBUG: e.Found#1: 20
      //DEBUG: e.Content#1: 22
      //DEBUG: e.Tail#1: 24

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/18 {REMOVED TILE} {REMOVED TILE}
      //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/20 HalfReuse: (/8 HalfReuse: # Chars/15 } Tile{ AsIs: e.Content#1/22 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
      refalrts::reinit_open_bracket(context[8]);
      refalrts::reinit_ident(context[15], identifiers[ident_Chars]);
      refalrts::reinit_close_bracket(context[17]);
      refalrts::push_stack( vm, context[1] );
      refalrts::push_stack( vm, context[0] );
      refalrts::link_brackets( context[7], context[16] );
      refalrts::link_brackets( context[8], context[17] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[16];
      res = refalrts::splice_evar( res, context[17], context[17] );
      res = refalrts::splice_evar( res, context[22], context[23] );
      refalrts::splice_to_freelist_open( vm, context[15], res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractSets/4 (/7 e.Found#1/20 )/8 (/15 # TSetName/17 t.SrcPos#1/18 e.Name#1/22 )/16 e.Tail#1/24 >/1
    context[20] = context[9];
    context[21] = context[10];
    context[22] = context[13];
    context[23] = context[14];
    context[24] = context[11];
    context[25] = context[12];
    if( ! refalrts::ident_term( identifiers[ident_TSetName], context[17] ) )
      continue;
    // closed e.Found#1 as range 20
    // closed e.Name#1 as range 22
    // closed e.Tail#1 as range 24
    //DEBUG: t.SrcPos#1: 18
    //DEBUG: e.Found#1: 20
    //DEBUG: e.Name#1: 22
    //DEBUG: e.Tail#1: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & ExtractSets/4 AsIs: (/7 AsIs: e.Found#1/20 HalfReuse: (/8 HalfReuse: # Set/15 } Tile{ AsIs: t.SrcPos#1/18 } Tile{ AsIs: e.Name#1/22 } Tile{ HalfReuse: )/17 } Tile{ AsIs: )/16 AsIs: e.Tail#1/24 AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_ident(context[15], identifiers[ident_Set]);
    refalrts::reinit_close_bracket(context[17]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[16] );
    refalrts::link_brackets( context[8], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[16];
    res = refalrts::splice_evar( res, context[17], context[17] );
    res = refalrts::splice_evar( res, context[22], context[23] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractSets/4 (/7 e.Found#1/5 )/8 e.OtherTail#1/2 >/1
  // closed e.Found#1 as range 5
  // closed e.OtherTail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.OtherTail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractSets/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } Tile{ AsIs: e.OtherTail#1/2 } Tile{ ]] }
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractSets("ExtractSets", COOKIE1_, COOKIE2_, func_ExtractSets);


static refalrts::FnResult func_gen_ParseSentence_S1L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 40 elems
  refalrts::Iter context[40];
  refalrts::zeros( context, 40 );
  // </0 & ParseSentence$1\1/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence$1\1/4 t.new#1/5 (/9 e.new#2/7 )/10 (/13 e.new#3/11 )/14 (/17 e.new#4/15 )/18 (/21 e.new#5/19 )/22 t.new#6/23 e.new#7/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[7] = 0;
  context[8] = 0;
  context[9] = refalrts::brackets_left( context[7], context[8], context[2], context[3] );
  if( ! context[9] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[9], context[10]);
  context[11] = 0;
  context[12] = 0;
  context[13] = refalrts::brackets_left( context[11], context[12], context[2], context[3] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[13], context[14]);
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  context[19] = 0;
  context[20] = 0;
  context[21] = refalrts::brackets_left( context[19], context[20], context[2], context[3] );
  if( ! context[21] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[21], context[22]);
  // closed e.new#2 as range 7
  // closed e.new#3 as range 11
  // closed e.new#4 as range 15
  // closed e.new#5 as range 19
  context[24] = refalrts::tvar_left( context[23], context[2], context[3] );
  if( ! context[24] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#7 as range 2
  do {
    // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/25 )/10 (/13 e.SetNames#1/27 )/14 (/17 e.RuleNames#1/29 )/18 (/21 e.Body#2/31 )/22 (/23 # TDot/37 t.SrcPos#2/38 )/24 e.Tail#2/33 >/1
    context[25] = context[7];
    context[26] = context[8];
    context[27] = context[11];
    context[28] = context[12];
    context[29] = context[15];
    context[30] = context[16];
    context[31] = context[19];
    context[32] = context[20];
    context[33] = context[2];
    context[34] = context[3];
    context[35] = 0;
    context[36] = 0;
    if( ! refalrts::brackets_term( context[35], context[36], context[23] ) )
      continue;
    context[37] = refalrts::ident_left( identifiers[ident_TDot], context[35], context[36] );
    if( ! context[37] )
      continue;
    // closed e.Name#1 as range 25
    // closed e.SetNames#1 as range 27
    // closed e.RuleNames#1 as range 29
    // closed e.Body#2 as range 31
    // closed e.Tail#2 as range 33
    context[39] = refalrts::tvar_left( context[38], context[35], context[36] );
    if( ! context[39] )
      continue;
    if( ! refalrts::empty_seq( context[35], context[36] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 5
    //DEBUG: e.Name#1: 25
    //DEBUG: e.SetNames#1: 27
    //DEBUG: e.RuleNames#1: 29
    //DEBUG: e.Body#2: 31
    //DEBUG: e.Tail#2: 33
    //DEBUG: t.SrcPos#2: 38

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} # TDot/37 t.SrcPos#2/38 )/24 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Sentence/4 AsIs: t.SentNamePos#1/5 AsIs: (/9 } Tile{ AsIs: e.Name#1/25 } Tile{ HalfReuse: )/21 AsIs: e.Body#2/31 AsIs: )/22 HalfReuse: </23 } Tile{ HalfReuse: & ParseElements/10 AsIs: (/13 AsIs: e.SetNames#1/27 AsIs: )/14 AsIs: (/17 AsIs: e.RuleNames#1/29 AsIs: )/18 } Tile{ AsIs: e.Tail#2/33 } Tile{ AsIs: >/1 ]] }
    refalrts::reinit_open_bracket(context[0]);
    refalrts::reinit_ident(context[4], identifiers[ident_Sentence]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_open_call(context[23]);
    refalrts::reinit_name(context[10], functions[efunc_ParseElements]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[23] );
    refalrts::link_brackets( context[17], context[18] );
    refalrts::link_brackets( context[13], context[14] );
    refalrts::link_brackets( context[0], context[22] );
    refalrts::link_brackets( context[9], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[33], context[34] );
    res = refalrts::splice_evar( res, context[10], context[18] );
    res = refalrts::splice_evar( res, context[21], context[23] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    refalrts::splice_to_freelist_open( vm, context[9], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence$1\1/4 t.SentNamePos#1/5 (/9 e.Name#1/7 )/10 (/13 e.SetNames#1/11 )/14 (/17 e.RuleNames#1/15 )/18 (/21 e.Body#2/19 )/22 t.Unexpected#2/23 e.Tail#2/2 >/1
  // closed e.Name#1 as range 7
  // closed e.SetNames#1 as range 11
  // closed e.RuleNames#1 as range 15
  // closed e.Body#2 as range 19
  // closed e.Tail#2 as range 2
  //DEBUG: t.SentNamePos#1: 5
  //DEBUG: t.Unexpected#2: 23
  //DEBUG: e.Name#1: 7
  //DEBUG: e.SetNames#1: 11
  //DEBUG: e.RuleNames#1: 15
  //DEBUG: e.Body#2: 19
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} t.SentNamePos#1/5 {REMOVED TILE} e.Name#1/7 {REMOVED TILE} e.SetNames#1/11 {REMOVED TILE} e.RuleNames#1/15 {REMOVED TILE} e.Body#2/19 {REMOVED TILE} {REMOVED TILE} e.Tail#2/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#2/23 } Tile{ HalfReuse: 'e'/14 HalfReuse: 'n'/17 } Tile{ HalfReuse: 'd'/18 HalfReuse: ' '/21 } Tile{ HalfReuse: 'o'/10 HalfReuse: 'f'/13 } Tile{ HalfReuse: ' '/22 } Tile{ HalfReuse: 's'/9 }"entence"/25 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[25], context[26], "entence", 7);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[14], 'e');
  refalrts::reinit_char(context[17], 'n');
  refalrts::reinit_char(context[18], 'd');
  refalrts::reinit_char(context[21], ' ');
  refalrts::reinit_char(context[10], 'o');
  refalrts::reinit_char(context[13], 'f');
  refalrts::reinit_char(context[22], ' ');
  refalrts::reinit_char(context[9], 's');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[25], context[26] );
  res = refalrts::splice_evar( res, context[9], context[9] );
  res = refalrts::splice_evar( res, context[22], context[22] );
  res = refalrts::splice_evar( res, context[10], context[13] );
  res = refalrts::splice_evar( res, context[18], context[21] );
  res = refalrts::splice_evar( res, context[14], context[17] );
  res = refalrts::splice_evar( res, context[23], context[24] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ParseSentence_S1L1("ParseSentence$1\\1", COOKIE1_, COOKIE2_, func_gen_ParseSentence_S1L1);


static refalrts::FnResult func_ParseSentence(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 39 elems
  refalrts::Iter context[39];
  refalrts::zeros( context, 39 );
  // </0 & ParseSentence/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ParseSentence/4 (/7 e.new#1/5 )/8 (/11 e.new#2/9 )/12 t.new#3/13 (/17 e.new#4/15 )/18 t.new#5/19 e.new#6/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  context[9] = 0;
  context[10] = 0;
  context[11] = refalrts::brackets_left( context[9], context[10], context[2], context[3] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[11], context[12]);
  // closed e.new#1 as range 5
  // closed e.new#2 as range 9
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = 0;
  context[16] = 0;
  context[17] = refalrts::brackets_left( context[15], context[16], context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[17], context[18]);
  // closed e.new#4 as range 15
  context[20] = refalrts::tvar_left( context[19], context[2], context[3] );
  if( ! context[20] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#6 as range 2
  do {
    // </0 & ParseSentence/4 (/7 e.SetNames#1/21 )/8 (/11 e.RuleNames#1/23 )/12 t.SentNamePos#1/13 (/17 e.Name#1/25 )/18 (/19 # TEquals/31 t.SrcPos#1/32 )/20 e.Tail#1/27 >/1
    context[21] = context[5];
    context[22] = context[6];
    context[23] = context[9];
    context[24] = context[10];
    context[25] = context[15];
    context[26] = context[16];
    context[27] = context[2];
    context[28] = context[3];
    context[29] = 0;
    context[30] = 0;
    if( ! refalrts::brackets_term( context[29], context[30], context[19] ) )
      continue;
    context[31] = refalrts::ident_left( identifiers[ident_TEquals], context[29], context[30] );
    if( ! context[31] )
      continue;
    // closed e.SetNames#1 as range 21
    // closed e.RuleNames#1 as range 23
    // closed e.Name#1 as range 25
    // closed e.Tail#1 as range 27
    context[33] = refalrts::tvar_left( context[32], context[29], context[30] );
    if( ! context[33] )
      continue;
    if( ! refalrts::empty_seq( context[29], context[30] ) )
      continue;
    //DEBUG: t.SentNamePos#1: 13
    //DEBUG: e.SetNames#1: 21
    //DEBUG: e.RuleNames#1: 23
    //DEBUG: e.Name#1: 25
    //DEBUG: e.Tail#1: 27
    //DEBUG: t.SrcPos#1: 32

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} t.SrcPos#1/32 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 } & Fetch/34 </35 Tile{ HalfReuse: & ExtractAlternatives/18 AsIs: (/19 } Tile{ AsIs: )/20 AsIs: e.Tail#1/27 AsIs: >/1 } [*]/36 Tile{ HalfReuse: & ParseSentence$1\1/31 } Tile{ AsIs: t.SentNamePos#1/13 AsIs: (/17 } Tile{ AsIs: e.Name#1/25 } Tile{ HalfReuse: )/4 AsIs: (/7 AsIs: e.SetNames#1/21 AsIs: )/8 AsIs: (/11 AsIs: e.RuleNames#1/23 AsIs: )/12 } {*}/37 >/38 Tile{ ]] }
    refalrts::alloc_name(vm, context[34], functions[efunc_Fetch]);
    refalrts::alloc_open_call(vm, context[35]);
    refalrts::alloc_closure_head(vm, context[36]);
    refalrts::alloc_unwrapped_closure(vm, context[37], context[36]);
    refalrts::alloc_close_call(vm, context[38]);
    refalrts::reinit_name(context[18], functions[efunc_ExtractAlternatives]);
    refalrts::reinit_name(context[31], functions[efunc_gen_ParseSentence_S1L1]);
    refalrts::reinit_close_bracket(context[4]);
    refalrts::push_stack( vm, context[38] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::link_brackets( context[17], context[4] );
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[35] );
    refalrts::link_brackets( context[19], context[20] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[37], context[38] );
    res = refalrts::splice_evar( res, context[4], context[12] );
    res = refalrts::splice_evar( res, context[25], context[26] );
    res = refalrts::splice_evar( res, context[13], context[17] );
    res = refalrts::splice_evar( res, context[31], context[31] );
    res = refalrts::splice_evar( res, context[36], context[36] );
    res = refalrts::splice_evar( res, context[20], context[1] );
    res = refalrts::splice_evar( res, context[18], context[19] );
    res = refalrts::splice_evar( res, context[34], context[35] );
    refalrts::splice_to_freelist_open( vm, context[0], res );
    refalrts::wrap_closure( context[37] );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ParseSentence/4 (/7 e.SetNames#1/5 )/8 (/11 e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 )/18 t.Unexpected#1/19 e.Tail#1/2 >/1
  // closed e.SetNames#1 as range 5
  // closed e.RuleNames#1 as range 9
  // closed e.Name#1 as range 15
  // closed e.Tail#1 as range 2
  //DEBUG: t.SentNamePos#1: 13
  //DEBUG: t.Unexpected#1: 19
  //DEBUG: e.SetNames#1: 5
  //DEBUG: e.RuleNames#1: 9
  //DEBUG: e.Name#1: 15
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} (/7 e.SetNames#1/5 {REMOVED TILE} e.RuleNames#1/9 )/12 t.SentNamePos#1/13 (/17 e.Name#1/15 {REMOVED TILE} {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 } Tile{ AsIs: t.Unexpected#1/19 } Tile{ HalfReuse: '\"'/8 HalfReuse: '='/11 } Tile{ HalfReuse: '\"'/18 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[8], '\"');
  refalrts::reinit_char(context[11], '=');
  refalrts::reinit_char(context[18], '\"');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[18] );
  res = refalrts::splice_evar( res, context[8], context[11] );
  res = refalrts::splice_evar( res, context[19], context[20] );
  refalrts::splice_to_freelist_open( vm, context[4], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ParseSentence("ParseSentence", COOKIE1_, COOKIE2_, func_ParseSentence);


static refalrts::FnResult func_gen_ExtractAlternatives_L1(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives\1/4 (/7 s.TokType#2/9 t.SrcPos#2/10 e.Info#2/5 )/8 e.Tail#2/2 >/1
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
  // closed e.Tail#2 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Info#2 as range 5
  //DEBUG: e.Tail#2: 2
  //DEBUG: s.TokType#2: 9
  //DEBUG: t.SrcPos#2: 10
  //DEBUG: e.Info#2: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\1/4 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } t.SrcPos#2/10/12 Tile{ AsIs: (/7 AsIs: s.TokType#2/9 AsIs: t.SrcPos#2/10 AsIs: e.Info#2/5 AsIs: )/8 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::copy_evar(vm, context[12], context[13], context[10], context[11]);
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[12], context[13] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L1("ExtractAlternatives\\1", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L1);


static refalrts::FnResult func_gen_ExtractAlternatives_L2(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  // </0 & ExtractAlternatives\2/4 t.BeginSrcPos#2/5 t.NextToken#2/7 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.NextToken#2: 7
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Head/4 } Tile{ AsIs: t.NextToken#2/7 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ExtractAlternativesm_Head]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L2("ExtractAlternatives\\2", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L2);


static refalrts::FnResult func_gen_ExtractAlternatives_L3(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & ExtractAlternatives\3/4 t.BeginSrcPos#2/5 t.Head#2/7 t.NextToken#2/9 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.NextToken#2: 9
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-Flush/4 } Tile{ AsIs: t.NextToken#2/9 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ExtractAlternativesm_Flush]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[8] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L3("ExtractAlternatives\\3", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L3);


static refalrts::FnResult func_gen_ExtractAlternatives_L4(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 13 elems
  refalrts::Iter context[13];
  refalrts::zeros( context, 13 );
  // </0 & ExtractAlternatives\4/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextToken#2/11 e.Tail#2/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextToken#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.BeginSrcPos#2/5 AsIs: t.Head#2/7 AsIs: t.Flush#2/9 } Tile{ AsIs: </0 Reuse: & ExtractAlternatives-NextState/4 } Tile{ AsIs: t.NextToken#2/11 } Tile{ AsIs: >/1 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::update_name(context[4], functions[efunc_ExtractAlternativesm_NextState]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[1], context[1] );
  res = refalrts::splice_evar( res, context[11], context[12] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[5], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L4("ExtractAlternatives\\4", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L4);


static refalrts::FnResult func_gen_ExtractAlternatives_L5(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & ExtractAlternatives\5/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\5/4 t.new#1/5 t.new#2/7 t.new#3/9 t.new#4/11 e.new#5/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  context[8] = refalrts::tvar_left( context[7], context[2], context[3] );
  if( ! context[8] )
    return refalrts::cRecognitionImpossible;
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 # None/9 # Finitive/11 e.Tail#2/13 >/1
    context[13] = context[2];
    context[14] = context[3];
    if( ! refalrts::ident_term( identifiers[ident_None], context[9] ) )
      continue;
    if( ! refalrts::ident_term( identifiers[ident_Finitive], context[11] ) )
      continue;
    // closed e.Tail#2 as range 13
    //DEBUG: t.BeginSrcPos#2: 5
    //DEBUG: t.Head#2: 7
    //DEBUG: e.Tail#2: 13

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.Head#2/7 {REMOVED TILE} e.Tail#2/13 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 AsIs: t.BeginSrcPos#2/5 } 'E'/15 Tile{ HalfReuse: 'O'/9 HalfReuse: 'F'/11 }" alternative must have flush"/16 Tile{ AsIs: >/1 ]] }
    refalrts::alloc_char(vm, context[15], 'E');
    refalrts::alloc_chars(vm, context[16], context[17], " alternative must have flush", 28);
    refalrts::update_name(context[4], functions[efunc_ErrorAt]);
    refalrts::reinit_char(context[9], 'O');
    refalrts::reinit_char(context[11], 'F');
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[9], context[11] );
    res = refalrts::splice_evar( res, context[15], context[15] );
    refalrts::splice_to_freelist_open( vm, context[6], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 t.Head#2/7 t.Flush#2/9 t.NextState#2/11 e.Tail#2/2 >/1
  // closed e.Tail#2 as range 2
  //DEBUG: t.BeginSrcPos#2: 5
  //DEBUG: t.Head#2: 7
  //DEBUG: t.Flush#2: 9
  //DEBUG: t.NextState#2: 11
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} </0 & ExtractAlternatives\5/4 t.BeginSrcPos#2/5 {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: t.Head#2/7 AsIs: t.Flush#2/9 AsIs: t.NextState#2/11 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[7], context[12] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L5("ExtractAlternatives\\5", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L5);


static refalrts::FnResult func_gen_ExtractAlternatives_L6(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 26 elems
  refalrts::Iter context[26];
  refalrts::zeros( context, 26 );
  // </0 & ExtractAlternatives\6/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives\6/4 (/7 e.new#1/5 )/8 t.new#2/9 t.new#3/11 t.new#4/13 e.new#5/2 >/1
  context[5] = 0;
  context[6] = 0;
  context[7] = refalrts::brackets_left( context[5], context[6], context[2], context[3] );
  if( ! context[7] )
    return refalrts::cRecognitionImpossible;
  refalrts::bracket_pointers(context[7], context[8]);
  // closed e.new#1 as range 5
  context[10] = refalrts::tvar_left( context[9], context[2], context[3] );
  if( ! context[10] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::tvar_left( context[11], context[2], context[3] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::tvar_left( context[13], context[2], context[3] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#5 as range 2
  do {
    // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/15 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 (/21 # TAlternative/23 t.SrcPos#2/24 )/22 e.Tail#2/17 >/1
    context[15] = context[5];
    context[16] = context[6];
    context[17] = context[2];
    context[18] = context[3];
    context[19] = 0;
    context[20] = 0;
    context[21] = refalrts::brackets_left( context[19], context[20], context[17], context[18] );
    if( ! context[21] )
      continue;
    refalrts::bracket_pointers(context[21], context[22]);
    context[23] = refalrts::ident_left( identifiers[ident_TAlternative], context[19], context[20] );
    if( ! context[23] )
      continue;
    // closed e.Found#1 as range 15
    // closed e.Tail#2 as range 17
    context[25] = refalrts::tvar_left( context[24], context[19], context[20] );
    if( ! context[25] )
      continue;
    if( ! refalrts::empty_seq( context[19], context[20] ) )
      continue;
    //DEBUG: t.Head#2: 9
    //DEBUG: t.Flush#2: 11
    //DEBUG: t.NextState#2: 13
    //DEBUG: e.Found#1: 15
    //DEBUG: e.Tail#2: 17
    //DEBUG: t.SrcPos#2: 24

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} t.SrcPos#2/24 )/22 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExtractAlternatives/4 AsIs: (/7 AsIs: e.Found#1/15 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 HalfReuse: )/21 HalfReuse: )/23 } Tile{ AsIs: e.Tail#2/17 } Tile{ AsIs: >/1 ]] }
    refalrts::update_name(context[4], functions[efunc_ExtractAlternatives]);
    refalrts::reinit_open_bracket(context[8]);
    refalrts::reinit_close_bracket(context[21]);
    refalrts::reinit_close_bracket(context[23]);
    refalrts::push_stack( vm, context[1] );
    refalrts::push_stack( vm, context[0] );
    refalrts::link_brackets( context[7], context[23] );
    refalrts::link_brackets( context[8], context[21] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[17], context[18] );
    refalrts::splice_to_freelist_open( vm, context[23], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives\6/4 (/7 e.Found#1/5 )/8 t.Head#2/9 t.Flush#2/11 t.NextState#2/13 e.Tail#2/2 >/1
  // closed e.Found#1 as range 5
  // closed e.Tail#2 as range 2
  //DEBUG: t.Head#2: 9
  //DEBUG: t.Flush#2: 11
  //DEBUG: t.NextState#2: 13
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#2: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 AsIs: e.Found#1/5 HalfReuse: (/8 AsIs: t.Head#2/9 AsIs: t.Flush#2/11 AsIs: t.NextState#2/13 } Tile{ HalfReuse: )/0 HalfReuse: )/4 } Tile{ AsIs: e.Tail#2/2 } Tile{ ]] }
  refalrts::reinit_open_bracket(context[8]);
  refalrts::reinit_close_bracket(context[0]);
  refalrts::reinit_close_bracket(context[4]);
  refalrts::link_brackets( context[7], context[4] );
  refalrts::link_brackets( context[8], context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[0], context[4] );
  res = refalrts::splice_evar( res, context[7], context[14] );
  refalrts::splice_to_freelist_open( vm, trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_gen_ExtractAlternatives_L6("ExtractAlternatives\\6", COOKIE1_, COOKIE2_, func_gen_ExtractAlternatives_L6);


static refalrts::FnResult func_ExtractAlternatives(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  // </0 & ExtractAlternatives/4 (/7 e.Found#1/5 )/8 e.Tail#1/2 >/1
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
  // closed e.Found#1 as range 5
  // closed e.Tail#1 as range 2
  //DEBUG: e.Found#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: e.Tail#1/2 } </11 & Pipe/12 & ExtractAlternatives\1/13 & ExtractAlternatives\2/14 & ExtractAlternatives\3/15 & ExtractAlternatives\4/16 & ExtractAlternatives\5/17 Tile{ HalfReuse: [*]/0 Reuse: & ExtractAlternatives\6/4 AsIs: (/7 AsIs: e.Found#1/5 AsIs: )/8 } {*}/18 >/19 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_open_call(vm, context[9]);
  refalrts::alloc_name(vm, context[10], functions[efunc_Fetch]);
  refalrts::alloc_open_call(vm, context[11]);
  refalrts::alloc_name(vm, context[12], functions[efunc_Pipe]);
  refalrts::alloc_name(vm, context[13], functions[efunc_gen_ExtractAlternatives_L1]);
  refalrts::alloc_name(vm, context[14], functions[efunc_gen_ExtractAlternatives_L2]);
  refalrts::alloc_name(vm, context[15], functions[efunc_gen_ExtractAlternatives_L3]);
  refalrts::alloc_name(vm, context[16], functions[efunc_gen_ExtractAlternatives_L4]);
  refalrts::alloc_name(vm, context[17], functions[efunc_gen_ExtractAlternatives_L5]);
  refalrts::alloc_unwrapped_closure(vm, context[18], context[0]);
  refalrts::alloc_close_call(vm, context[19]);
  refalrts::reinit_closure_head(context[0]);
  refalrts::update_name(context[4], functions[efunc_gen_ExtractAlternatives_L6]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[19] );
  refalrts::push_stack( vm, context[11] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[18], context[19] );
  res = refalrts::splice_evar( res, context[0], context[8] );
  res = refalrts::splice_evar( res, context[11], context[17] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  refalrts::wrap_closure( context[18] );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternatives("ExtractAlternatives", COOKIE1_, COOKIE2_, func_ExtractAlternatives);


static refalrts::FnResult func_ExtractAlternativesm_Head(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives-Head/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Head/4 t.new#1/5 e.new#2/2 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.new#2 as range 2
  do {
    // </0 & ExtractAlternatives-Head/4 (/5 s.new#3/9 t.new#4/10 e.new#5/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::empty_seq( context[2], context[3] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#5 as range 7
    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TLiteral/9 t.SrcPos#1/10 e.Content#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TLiteral], context[9] ) )
        continue;
      // closed e.Content#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Content#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Chars/9 } Tile{ AsIs: e.Content#1/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Chars]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TSetName/9 t.SrcPos#1/10 e.Content#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TSetName], context[9] ) )
        continue;
      // closed e.Content#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Content#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Head/4 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Set/9 AsIs: t.SrcPos#1/10 AsIs: e.Content#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::update_ident(context[9], identifiers[ident_Set]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[5], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TFlush/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TNamedFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
        continue;
      // closed e.Message#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TErrorFlush/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Head/4 (/5 # TAlternative/9 t.SrcPos#1/10 e.Message#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      // closed e.Message#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: e.Message#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Head/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Empty/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Empty]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Head/4 t.Unexpected#1/5 e.Tail#1/2 >/1
  // closed e.Tail#1 as range 2
  //DEBUG: t.Unexpected#1: 5
  //DEBUG: e.Tail#1: 2

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} e.Tail#1/2 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 }" definition of state"/7 Tile{ AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[7], context[8], " definition of state", 20);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( vm, context[6], res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Head("ExtractAlternatives-Head", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_Head);


static refalrts::FnResult func_ExtractAlternativesm_Flush(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives-Flush/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-Flush/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-Flush/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TFlush], context[9] ) )
        continue;
      if( ! refalrts::empty_seq( context[7], context[8] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 (/5 # TFlush/9 t.SrcPos#1/10 )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Unnamed/1 ]] }
      refalrts::reinit_ident(context[1], identifiers[ident_Unnamed]);
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TNamedFlush/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TNamedFlush], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # Flush/9 } Tile{ AsIs: e.Name#1/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_Flush]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TErrorFlush/9 t.SrcPos#1/10 e.Message#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TErrorFlush], context[9] ) )
        continue;
      // closed e.Message#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Message#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-Flush/4 {REMOVED TILE} t.SrcPos#1/10 {REMOVED TILE} )/6 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ AsIs: (/5 Reuse: # FlushError/9 } Tile{ AsIs: e.Message#1/12 } Tile{ HalfReuse: )/1 ]] }
      refalrts::update_ident(context[9], identifiers[ident_FlushError]);
      refalrts::reinit_close_bracket(context[1]);
      refalrts::link_brackets( context[5], context[1] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = context[1];
      res = refalrts::splice_evar( res, context[12], context[13] );
      res = refalrts::splice_evar( res, context[5], context[9] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TName/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_None]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Flush/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & ExtractAlternatives-Flush/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_None]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-Flush/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # None/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_None]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-Flush/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'f'/1 }"lush or next state name"/7 >/9 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "lush or next state name", 23);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], 'f');
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_Flush("ExtractAlternatives-Flush", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_Flush);


static refalrts::FnResult func_ExtractAlternativesm_NextState(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 14 elems
  refalrts::Iter context[14];
  refalrts::zeros( context, 14 );
  // </0 & ExtractAlternatives-NextState/4 e.new#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.new#0 as range 2
  // </0 & ExtractAlternatives-NextState/4 t.new#1/5 >/1
  context[6] = refalrts::tvar_left( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  do {
    // </0 & ExtractAlternatives-NextState/4 (/5 s.new#2/9 t.new#3/10 e.new#4/7 )/6 >/1
    context[7] = 0;
    context[8] = 0;
    if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
      continue;
    if( ! refalrts::svar_left( context[9], context[7], context[8] ) )
      continue;
    context[11] = refalrts::tvar_left( context[10], context[7], context[8] );
    if( ! context[11] )
      continue;
    // closed e.new#4 as range 7
    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 # TName/9 t.SrcPos#1/10 e.Name#1/12 )/6 >/1
      context[12] = context[7];
      context[13] = context[8];
      if( ! refalrts::ident_term( identifiers[ident_TName], context[9] ) )
        continue;
      // closed e.Name#1 as range 12
      //DEBUG: t.SrcPos#1: 10
      //DEBUG: e.Name#1: 12

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 & ExtractAlternatives-NextState/4 (/5 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: (/9 AsIs: t.SrcPos#1/10 AsIs: e.Name#1/12 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_open_bracket(context[9]);
      refalrts::link_brackets( context[9], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[9], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-NextState/4 (/5 s.new#5/9 t.new#6/10 )/6 >/1
    if( ! refalrts::empty_seq( context[7], context[8] ) )
      continue;
    do {
      // </0 & ExtractAlternatives-NextState/4 (/5 # TAlternative/9 t.SrcPos#1/10 )/6 >/1
      if( ! refalrts::ident_term( identifiers[ident_TAlternative], context[9] ) )
        continue;
      //DEBUG: t.SrcPos#1: 10

      refalrts::reset_allocator(vm);
      //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
      //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TAlternative/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
      refalrts::reinit_ident(context[4], identifiers[ident_Finitive]);
      refalrts::link_brackets( context[5], context[6] );
      refalrts::Iter trash_prev = arg_begin->prev;
      refalrts::use(trash_prev);
      refalrts::Iter res = arg_end->next;
      res = refalrts::splice_evar( res, context[4], context[6] );
      refalrts::splice_to_freelist_open( vm, trash_prev, res );
      return refalrts::cSuccess;
    } while ( 0 );
    refalrts::stop_sentence(vm);

    // </0 & ExtractAlternatives-NextState/4 (/5 # TDot/9 t.SrcPos#1/10 )/6 >/1
    if( ! refalrts::ident_term( identifiers[ident_TDot], context[9] ) )
      continue;
    //DEBUG: t.SrcPos#1: 10

    refalrts::reset_allocator(vm);
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: # Finitive/4 AsIs: (/5 AsIs: # TDot/9 AsIs: t.SrcPos#1/10 AsIs: )/6 } Tile{ ]] }
    refalrts::reinit_ident(context[4], identifiers[ident_Finitive]);
    refalrts::link_brackets( context[5], context[6] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[4], context[6] );
    refalrts::splice_to_freelist_open( vm, trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence(vm);

  // </0 & ExtractAlternatives-NextState/4 t.Unexpected#1/5 >/1
  //DEBUG: t.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & UnexpectedToken/4 AsIs: t.Unexpected#1/5 HalfReuse: 'n'/1 }"ext state name or next alternative"/7 >/9 Tile{ ]] }
  refalrts::alloc_chars(vm, context[7], context[8], "ext state name or next alternative", 34);
  refalrts::alloc_close_call(vm, context[9]);
  refalrts::update_name(context[4], functions[efunc_UnexpectedToken]);
  refalrts::reinit_char(context[1], 'n');
  refalrts::push_stack( vm, context[9] );
  refalrts::push_stack( vm, context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[9] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_ExtractAlternativesm_NextState("ExtractAlternatives-NextState", COOKIE1_, COOKIE2_, func_ExtractAlternativesm_NextState);


static refalrts::FnResult func_UnexpectedToken(refalrts::VM *vm, refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  (void) vm;
  refalrts::this_is_generated_function(vm);
  refalrts::RefalFunction **functions;
  const refalrts::RefalIdentifier *identifiers;
  refalrts::load_constants(arg_begin, &functions, &identifiers);
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  // </0 & UnexpectedToken/4 (/7 s.Type#1/9 t.SrcPos#1/10 e.Unexpected#1/5 )/8 e.Message#1/2 >/1
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
  // closed e.Message#1 as range 2
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::tvar_left( context[10], context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  // closed e.Unexpected#1 as range 5
  //DEBUG: e.Message#1: 2
  //DEBUG: s.Type#1: 9
  //DEBUG: t.SrcPos#1: 10
  //DEBUG: e.Unexpected#1: 5

  refalrts::reset_allocator(vm);
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ErrorAt/4 } Tile{ AsIs: t.SrcPos#1/10 }"Unexpected "/12 </14 Tile{ HalfReuse: & DFA-TextFromToken/7 AsIs: s.Type#1/9 } Tile{ AsIs: e.Unexpected#1/5 } >/15" expected"/16 Tile{ HalfReuse: ' '/8 AsIs: e.Message#1/2 AsIs: >/1 ]] }
  refalrts::alloc_chars(vm, context[12], context[13], "Unexpected ", 11);
  refalrts::alloc_open_call(vm, context[14]);
  refalrts::alloc_close_call(vm, context[15]);
  refalrts::alloc_chars(vm, context[16], context[17], " expected", 9);
  refalrts::update_name(context[4], functions[efunc_ErrorAt]);
  refalrts::reinit_name(context[7], functions[efunc_DFAm_TextFromToken]);
  refalrts::reinit_char(context[8], ' ');
  refalrts::push_stack( vm, context[1] );
  refalrts::push_stack( vm, context[0] );
  refalrts::push_stack( vm, context[15] );
  refalrts::push_stack( vm, context[14] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  res = refalrts::splice_evar( res, context[15], context[17] );
  res = refalrts::splice_evar( res, context[5], context[6] );
  res = refalrts::splice_evar( res, context[7], context[9] );
  res = refalrts::splice_evar( res, context[12], context[14] );
  res = refalrts::splice_evar( res, context[10], context[11] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::NativeReference nat_ref_UnexpectedToken("UnexpectedToken", COOKIE1_, COOKIE2_, func_UnexpectedToken);


//End of file
