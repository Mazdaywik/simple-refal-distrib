// Automatically generated file. Don't edit!
#include "refalrts.h"


const refalrts::RefalIdentifier ident_Current = refalrts::ident_from_static("Current");
const refalrts::RefalIdentifier ident_False = refalrts::ident_from_static("False");
const refalrts::RefalIdentifier ident_NotFound = refalrts::ident_from_static("NotFound");
const refalrts::RefalIdentifier ident_Output = refalrts::ident_from_static("Output");
const refalrts::RefalIdentifier ident_OutputWithNative = refalrts::ident_from_static("OutputWithNative");
const refalrts::RefalIdentifier ident_Source = refalrts::ident_from_static("Source");
const refalrts::RefalIdentifier ident_True = refalrts::ident_from_static("True");
static refalrts::ExternalReference ref_Map("Map", 0U, 0U);
#define str_Map refalrts::RefalFuncName("Map", 0U, 0U)
static refalrts::ExternalReference ref_Fetch("Fetch", 0U, 0U);
#define str_Fetch refalrts::RefalFuncName("Fetch", 0U, 0U)
static refalrts::ExternalReference ref_ExistFile("ExistFile", 0U, 0U);
#define str_ExistFile refalrts::RefalFuncName("ExistFile", 0U, 0U)
static refalrts::ExternalReference ref_FindFiles("FindFiles", 0U, 0U);
static refalrts::ExternalReference ref_AnalyzeFile_ByFolders("AnalyzeFile-ByFolders", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_AnalyzeInFolder("AnalyzeInFolder", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_AnalyzeFile_CheckNotFound("AnalyzeFile-CheckNotFound", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_ExistFile_T("ExistFile-T", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S1L1("AnalyzeFile$1\\1", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S2L1S1L1("AnalyzeFile$2\\1$1\\1", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S2L1("AnalyzeFile$2\\1", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_gen_AnalyzeFile_S3L1("AnalyzeFile$3\\1", 2890757293U, 861746543U);
static refalrts::ExternalReference ref_AnalyzeFile("AnalyzeFile", 2890757293U, 861746543U);

static refalrts::FnResult func_FindFiles(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 11 elems
  refalrts::Iter context[11];
  refalrts::zeros( context, 11 );
  // </0 & FindFiles/4 (/7 e.Folders#1/5 )/8 e.Files#1/2 >/1
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
  // closed e.Folders#1 as range 5
  // closed e.Files#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </9 & Map/10 Tile{ HalfReuse: (/0 Reuse: & AnalyzeFile-ByFolders/4 HalfReuse: # Current/7 AsIs: e.Folders#1/5 AsIs: )/8 AsIs: e.Files#1/2 AsIs: >/1 ]] }
  if( ! refalrts::alloc_open_call( context[9] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[10], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  refalrts::reinit_open_bracket( context[0] );
  refalrts::update_name( context[4], ref_AnalyzeFile_ByFolders.ref.function );
  refalrts::reinit_ident( context[7], ident_Current );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[9] );
  refalrts::link_brackets( context[0], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[0];
  res = refalrts::splice_evar( res, context[9], context[10] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_FindFiles(func_FindFiles, refalrts::RefalFuncName("FindFiles", 0U, 0U));

static refalrts::FnResult func_AnalyzeFile_ByFolders(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 17 elems
  refalrts::Iter context[17];
  refalrts::zeros( context, 17 );
  // </0 & AnalyzeFile-ByFolders/4 e.Folders#1/2 (/7 e.FileName#1/5 )/8 >/1
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
  // closed e.Folders#1 as range 2
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile-CheckNotFound/4 } Tile{ AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 HalfReuse: </1 } & Map/9 (/10 & AnalyzeInFolder/11 e.FileName#1/5/12 )/14 Tile{ AsIs: e.Folders#1/2 } >/15 >/16 Tile{ ]] }
  if( ! refalrts::alloc_name( context[9], ref_Map.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[11], ref_AnalyzeInFolder.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[12], context[13], context[5], context[6]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[14] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[15] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[16] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_AnalyzeFile_CheckNotFound.ref.function );
  refalrts::reinit_open_call( context[1] );
  refalrts::push_stack( context[16] );
  refalrts::push_stack( context[0] );
  refalrts::push_stack( context[15] );
  refalrts::push_stack( context[1] );
  refalrts::link_brackets( context[10], context[14] );
  refalrts::link_brackets( context[7], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[15], context[16] );
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[9], context[14] );
  res = refalrts::splice_evar( res, context[7], context[1] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile_ByFolders(func_AnalyzeFile_ByFolders, refalrts::RefalFuncName("AnalyzeFile-ByFolders", 2890757293U, 861746543U));

static refalrts::FnResult func_AnalyzeInFolder(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 9 elems
  refalrts::Iter context[9];
  refalrts::zeros( context, 9 );
  //FAST GEN: e.$ t.$
  //GLOBAL GEN: e.$ t.$
  // </0 & AnalyzeInFolder/4 e.idx#0/2 t.idxV#0/5 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  context[6] = refalrts::tvar_right( context[5], context[2], context[3] );
  if( ! context[6] )
    return refalrts::cRecognitionImpossible;
  // closed e.idx#0 as range 2
  do {
    // e.idx # Current
    // </0 & AnalyzeInFolder/4 e.FileName#1/2 # Current/5 >/1
    if( ! refalrts::ident_term(  ident_Current, context[5] ) )
      continue;
    // closed e.FileName#1 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 AsIs: e.FileName#1/2 HalfReuse: >/5 } Tile{ ]] }
    refalrts::update_name( context[4], ref_AnalyzeFile.ref.function );
    refalrts::reinit_close_call( context[5] );
    refalrts::push_stack( context[5] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    refalrts::splice_to_freelist_open( context[5], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx ( e.idx )
  // </0 & AnalyzeInFolder/4 e.FileName#1/2 (/5 e.Folder#1/7 )/6 >/1
  context[7] = 0;
  context[8] = 0;
  if( ! refalrts::brackets_term( context[7], context[8], context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 2
  // closed e.Folder#1 as range 7

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} )/6 {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & AnalyzeFile/4 } Tile{ AsIs: e.Folder#1/7 } Tile{ HalfReuse: '/'/5 } Tile{ AsIs: e.FileName#1/2 } Tile{ AsIs: >/1 ]] }
  refalrts::update_name( context[4], ref_AnalyzeFile.ref.function );
  refalrts::reinit_char( context[5], '/' );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[1];
  res = refalrts::splice_evar( res, context[2], context[3] );
  res = refalrts::splice_evar( res, context[5], context[5] );
  res = refalrts::splice_evar( res, context[7], context[8] );
  refalrts::splice_to_freelist_open( context[4], res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeInFolder(func_AnalyzeInFolder, refalrts::RefalFuncName("AnalyzeInFolder", 2890757293U, 861746543U));

static refalrts::FnResult func_AnalyzeFile_CheckNotFound(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 20 elems
  refalrts::Iter context[20];
  refalrts::zeros( context, 20 );
  //FAST GEN: e.$
  //GLOBAL GEN: ( e.$ ) e.$
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.idxB#0/5 )/8 e.idxT#0/2 >/1
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
  // closed e.idxB#0 as range 5
  // closed e.idxT#0 as range 2
  do {
    // ( e.idx ) ( # Source ( e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Source/13 (/16 e.Source#1/14 )/17 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Source, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Source#1 as range 14
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Source/13 AsIs: (/16 AsIs: e.Source#1/14 AsIs: )/17 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # Output e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # Output/13 e.Output#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_Output, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # Output/13 AsIs: e.Output#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # OutputWithNative ( e.idx ) e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # OutputWithNative/13 (/16 e.Output#1/14 )/17 e.Native#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_OutputWithNative, context[9], context[10] );
    if( ! context[13] )
      continue;
    context[14] = 0;
    context[15] = 0;
    context[16] = refalrts::brackets_left( context[14], context[15], context[9], context[10] );
    if( ! context[16] )
      continue;
    refalrts::bracket_pointers(context[16], context[17]);
    // closed e.FileName#1 as range 5
    // closed e.Output#1 as range 14
    // closed e.Native#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 {REMOVED TILE} e.Variants#1/18(2) >/1 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ AsIs: (/11 AsIs: # OutputWithNative/13 AsIs: (/16 AsIs: e.Output#1/14 AsIs: )/17 AsIs: e.Native#1/9 AsIs: )/12 } Tile{ ]] }
    refalrts::link_brackets( context[11], context[12] );
    refalrts::link_brackets( context[16], context[17] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( e.idx ) ( # NotFound e.idx ) e.idx
    // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 e.Variants#1/2 >/1
    context[18] = context[2];
    context[19] = context[3];
    context[9] = 0;
    context[10] = 0;
    context[11] = refalrts::brackets_left( context[9], context[10], context[18], context[19] );
    if( ! context[11] )
      continue;
    refalrts::bracket_pointers(context[11], context[12]);
    context[13] = refalrts::ident_left(  ident_NotFound, context[9], context[10] );
    if( ! context[13] )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.NotFoundPath#1 as range 9
    // closed e.Variants#1 as range 18(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} (/11 # NotFound/13 e.NotFoundPath#1/9 )/12 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 AsIs: & AnalyzeFile-CheckNotFound/4 AsIs: (/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ AsIs: e.Variants#1/18(2) } Tile{ AsIs: >/1 ]] }
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[18], context[19] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx )
  // </0 & AnalyzeFile-CheckNotFound/4 (/7 e.FileName#1/5 )/8 >/1
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # NotFound/7 AsIs: e.FileName#1/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_NotFound );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile_CheckNotFound(func_AnalyzeFile_CheckNotFound, refalrts::RefalFuncName("AnalyzeFile-CheckNotFound", 2890757293U, 861746543U));

static refalrts::FnResult func_ExistFile_T(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 7 elems
  refalrts::Iter context[7];
  refalrts::zeros( context, 7 );
  // </0 & ExistFile-T/4 e.FileName#1/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ AsIs: </0 Reuse: & ExistFile/4 AsIs: e.FileName#1/2 AsIs: >/1 } e.FileName#1/2/5 Tile{ ]] }
  if (! refalrts::copy_evar(context[5], context[6], context[2], context[3]))
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFile.ref.function );
  refalrts::push_stack( context[1] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[5], context[6] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_ExistFile_T(func_ExistFile_T, refalrts::RefalFuncName("ExistFile-T", 2890757293U, 861746543U));

static refalrts::FnResult func_gen_AnalyzeFile_S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: s.$ e.$
  //GLOBAL GEN: s.$ e.$
  // </0 & AnalyzeFile$1\1/4 s.idx#0/5 e.idxV#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  if( ! refalrts::svar_left( context[5], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxV#0 as range 2
  do {
    // # True e.idx '.sref'
    // </0 & AnalyzeFile$1\1/4 # True/5 e.UnitName#2/2 '.'/10 's'/9 'r'/8 'e'/7 'f'/6 >/1
    if( ! refalrts::ident_term(  ident_True, context[5] ) )
      continue;
    context[16] = context[2];
    context[17] = context[3];
    context[6] = refalrts::char_right( 'f', context[16], context[17] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'e', context[16], context[17] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 'r', context[16], context[17] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( 's', context[16], context[17] );
    if( ! context[9] )
      continue;
    context[10] = refalrts::char_right( '.', context[16], context[17] );
    if( ! context[10] )
      continue;
    // closed e.UnitName#2 as range 16(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # Source/4 HalfReuse: (/5 AsIs: e.UnitName#2/16(2) AsIs: '.'/10 AsIs: 's'/9 AsIs: 'r'/8 AsIs: 'e'/7 AsIs: 'f'/6 HalfReuse: )/1 } e.UnitName#2/16(2)/11".cpp"/13 )/15 Tile{ ]] }
    if (! refalrts::copy_evar(context[11], context[12], context[16], context[17]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[13], context[14], ".cpp", 4 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[15] ) )
      return refalrts::cNoMemory;
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_Source );
    refalrts::reinit_open_bracket( context[5] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[15] );
    refalrts::link_brackets( context[5], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[13], context[15] );
    res = refalrts::splice_evar( res, context[11], context[12] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // # False e.idx
  // </0 & AnalyzeFile$1\1/4 # False/5 e.SourceName#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[5] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.SourceName#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 Reuse: # NotFound/5 AsIs: e.SourceName#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::update_ident( context[5], ident_NotFound );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[4], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[4];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_AnalyzeFile_S1L1(func_gen_AnalyzeFile_S1L1, refalrts::RefalFuncName("AnalyzeFile$1\\1", 2890757293U, 861746543U));

static refalrts::FnResult func_gen_AnalyzeFile_S2L1S1L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 10 elems
  refalrts::Iter context[10];
  refalrts::zeros( context, 10 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & AnalyzeFile$2\1$1\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( e.idx ) # True e.idx
    // </0 & AnalyzeFile$2\1$1\1/4 (/7 e.OutName#2/5 )/8 # True/9 e.NativeName#3/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.OutName#2 as range 5
    // closed e.NativeName#3 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} # True/9 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ HalfReuse: (/0 HalfReuse: # OutputWithNative/4 AsIs: (/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ AsIs: e.NativeName#3/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[0] );
    refalrts::reinit_ident( context[4], ident_OutputWithNative );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[0], context[1] );
    refalrts::link_brackets( context[7], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    refalrts::splice_to_freelist_open( context[8], res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$2\1$1\1/4 (/7 e.OutName#2/5 )/8 # False/9 e.NativeName#3/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.OutName#2 as range 5
  // closed e.NativeName#3 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 {REMOVED TILE} # False/9 e.NativeName#3/2 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Output/7 AsIs: e.OutName#2/5 AsIs: )/8 } Tile{ ]] }
  refalrts::reinit_open_bracket( context[4] );
  refalrts::reinit_ident( context[7], ident_Output );
  refalrts::link_brackets( context[4], context[8] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[4], context[8] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_AnalyzeFile_S2L1S1L1(func_gen_AnalyzeFile_S2L1S1L1, refalrts::RefalFuncName("AnalyzeFile$2\\1$1\\1", 2890757293U, 861746543U));

static refalrts::FnResult func_gen_AnalyzeFile_S2L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 18 elems
  refalrts::Iter context[18];
  refalrts::zeros( context, 18 );
  //FAST GEN: ( e.$ ) s.$ e.$
  //GLOBAL GEN: ( e.$ ) s.$ e.$
  // </0 & AnalyzeFile$2\1/4 (/7 e.idxB#0/5 )/8 s.idxT#0/9 e.idxTV#0/2 >/1
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
  // closed e.idxB#0 as range 5
  if( ! refalrts::svar_left( context[9], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( e.idx ) # True e.idx
    // </0 & AnalyzeFile$2\1/4 (/7 e.FileName#1/5 )/8 # True/9 e.OutName#2/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.FileName#1 as range 5
    // closed e.OutName#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ AsIs: </0 Reuse: & Fetch/4 HalfReuse: </7 } & ExistFile-T/10 Tile{ AsIs: e.FileName#1/5 }".native.cpp"/11 >/13 </14 & @create_closure@/15 Tile{ HalfReuse: & AnalyzeFile$2\1$1\1/8 HalfReuse: (/9 AsIs: e.OutName#2/2 HalfReuse: )/1 } >/16 >/17 Tile{ ]] }
    if( ! refalrts::alloc_name( context[10], ref_ExistFile_T.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_chars( context[11], context[12], ".native.cpp", 11 ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[14] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[15], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[16] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[17] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_Fetch.ref.function );
    refalrts::reinit_open_call( context[7] );
    refalrts::reinit_name( context[8], ref_gen_AnalyzeFile_S2L1S1L1.ref.function );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::push_stack( context[17] );
    refalrts::push_stack( context[0] );
    refalrts::push_stack( context[16] );
    refalrts::push_stack( context[14] );
    refalrts::link_brackets( context[9], context[1] );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[7] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[16], context[17] );
    res = refalrts::splice_evar( res, context[8], context[1] );
    res = refalrts::splice_evar( res, context[11], context[15] );
    res = refalrts::splice_evar( res, context[5], context[6] );
    res = refalrts::splice_evar( res, context[10], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( e.idx ) # False e.idx
  // </0 & AnalyzeFile$2\1/4 (/7 e.FileName#1/5 )/8 # False/9 e.OutName#2/2 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.FileName#1 as range 5
  // closed e.OutName#2 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$2\1/4 (/7 e.FileName#1/5 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # NotFound/9 AsIs: e.OutName#2/2 HalfReuse: )/1 ]] }
  refalrts::reinit_open_bracket( context[8] );
  refalrts::update_ident( context[9], ident_NotFound );
  refalrts::reinit_close_bracket( context[1] );
  refalrts::link_brackets( context[8], context[1] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = context[8];
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_AnalyzeFile_S2L1(func_gen_AnalyzeFile_S2L1, refalrts::RefalFuncName("AnalyzeFile$2\\1", 2890757293U, 861746543U));

static refalrts::FnResult func_gen_AnalyzeFile_S3L1(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 22 elems
  refalrts::Iter context[22];
  refalrts::zeros( context, 22 );
  //FAST GEN: ( s.$ e.$ ) s.$ e.$
  //GLOBAL GEN: ( s.$ e.$ ) s.$ e.$
  // </0 & AnalyzeFile$3\1/4 (/7 s.idxB#0/9 e.idxBV#0/5 )/8 s.idxT#0/10 e.idxTV#0/2 >/1
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
  if( ! refalrts::svar_left( context[9], context[5], context[6] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxBV#0 as range 5
  if( ! refalrts::svar_left( context[10], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  // closed e.idxTV#0 as range 2
  do {
    // ( # True e.idx ) s.idx e.idx
    // </0 & AnalyzeFile$3\1/4 (/7 # True/9 e.SourceName#2/5 )/8 s.Res#2/10 e.OutName#2/2 >/1
    if( ! refalrts::ident_term(  ident_True, context[9] ) )
      continue;
    // closed e.SourceName#2 as range 5
    // closed e.OutName#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 {REMOVED TILE} s.Res#2/10 {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/4 HalfReuse: # Source/7 HalfReuse: (/9 AsIs: e.SourceName#2/5 AsIs: )/8 } Tile{ AsIs: e.OutName#2/2 } Tile{ HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[4] );
    refalrts::reinit_ident( context[7], ident_Source );
    refalrts::reinit_open_bracket( context[9] );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[4], context[1] );
    refalrts::link_brackets( context[9], context[8] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[1];
    res = refalrts::splice_evar( res, context[2], context[3] );
    res = refalrts::splice_evar( res, context[4], context[8] );
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // ( # False e.idx ) # True e.idx
    // </0 & AnalyzeFile$3\1/4 (/7 # False/9 e.SourceName#2/5 )/8 # True/10 e.OutName#2/2 >/1
    if( ! refalrts::ident_term(  ident_False, context[9] ) )
      continue;
    if( ! refalrts::ident_term(  ident_True, context[10] ) )
      continue;
    // closed e.SourceName#2 as range 5
    // closed e.OutName#2 as range 2

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} </0 & AnalyzeFile$3\1/4 (/7 # False/9 e.SourceName#2/5 {REMOVED TILE}
    //RESULT: Tile{ [[ } Tile{ HalfReuse: (/8 Reuse: # Output/10 AsIs: e.OutName#2/2 HalfReuse: )/1 ]] }
    refalrts::reinit_open_bracket( context[8] );
    refalrts::update_ident( context[10], ident_Output );
    refalrts::reinit_close_bracket( context[1] );
    refalrts::link_brackets( context[8], context[1] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = context[8];
    refalrts::splice_to_freelist_open( trash_prev, res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // ( # False e.idx '.sref' ) # False e.idx '.cpp'
  // </0 & AnalyzeFile$3\1/4 (/7 # False/9 e.UnitName#2/5 '.'/15 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/10 e.UnitName#2/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1
  if( ! refalrts::ident_term(  ident_False, context[9] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::ident_term(  ident_False, context[10] ) )
    return refalrts::cRecognitionImpossible;
  context[11] = refalrts::char_right( 'f', context[5], context[6] );
  if( ! context[11] )
    return refalrts::cRecognitionImpossible;
  context[12] = refalrts::char_right( 'e', context[5], context[6] );
  if( ! context[12] )
    return refalrts::cRecognitionImpossible;
  context[13] = refalrts::char_right( 'r', context[5], context[6] );
  if( ! context[13] )
    return refalrts::cRecognitionImpossible;
  context[14] = refalrts::char_right( 's', context[5], context[6] );
  if( ! context[14] )
    return refalrts::cRecognitionImpossible;
  context[15] = refalrts::char_right( '.', context[5], context[6] );
  if( ! context[15] )
    return refalrts::cRecognitionImpossible;
  context[16] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[16] )
    return refalrts::cRecognitionImpossible;
  context[17] = refalrts::char_right( 'p', context[2], context[3] );
  if( ! context[17] )
    return refalrts::cRecognitionImpossible;
  context[18] = refalrts::char_right( 'c', context[2], context[3] );
  if( ! context[18] )
    return refalrts::cRecognitionImpossible;
  context[19] = refalrts::char_right( '.', context[2], context[3] );
  if( ! context[19] )
    return refalrts::cRecognitionImpossible;
  // closed e.UnitName#2 as range 5
  if( ! refalrts::repeated_evar_left( context[20], context[21], context[5], context[6], context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;
  if( ! refalrts::empty_seq( context[2], context[3] ) )
    return refalrts::cRecognitionImpossible;

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} </0 & AnalyzeFile$3\1/4 {REMOVED TILE} 's'/14 'r'/13 'e'/12 'f'/11 )/8 # False/10 e.UnitName#2/20 '.'/19 'c'/18 'p'/17 'p'/16 >/1 {REMOVED TILE}
  //RESULT: Tile{ [[ } Tile{ AsIs: (/7 Reuse: # NotFound/9 AsIs: e.UnitName#2/5 HalfReuse: )/15 } Tile{ ]] }
  refalrts::update_ident( context[9], ident_NotFound );
  refalrts::reinit_close_bracket( context[15] );
  refalrts::link_brackets( context[7], context[15] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[7], context[15] );
  refalrts::splice_to_freelist_open( trash_prev, res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_gen_AnalyzeFile_S3L1(func_gen_AnalyzeFile_S3L1, refalrts::RefalFuncName("AnalyzeFile$3\\1", 2890757293U, 861746543U));

static refalrts::FnResult func_AnalyzeFile(refalrts::Iter arg_begin, refalrts::Iter arg_end) {
  refalrts::this_is_generated_function();
  // issue here memory for vars with 23 elems
  refalrts::Iter context[23];
  refalrts::zeros( context, 23 );
  //FAST GEN: e.$
  //GLOBAL GEN: e.$
  // </0 & AnalyzeFile/4 e.idx#0/2 >/1
  context[0] = arg_begin;
  context[1] = arg_end;
  context[2] = 0;
  context[3] = 0;
  context[4] = refalrts::call_left( context[2], context[3], context[0], context[1] );
  // closed e.idx#0 as range 2
  do {
    // e.idx '.sref'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/9 's'/8 'r'/7 'e'/6 'f'/5 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = refalrts::char_right( 'f', context[21], context[22] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'e', context[21], context[22] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'r', context[21], context[22] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( 's', context[21], context[22] );
    if( ! context[8] )
      continue;
    context[9] = refalrts::char_right( '.', context[21], context[22] );
    if( ! context[9] )
      continue;
    // closed e.FileName#1 as range 21(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </10 & Fetch/11 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/21(2) AsIs: '.'/9 AsIs: 's'/8 AsIs: 'r'/7 AsIs: 'e'/6 AsIs: 'f'/5 AsIs: >/1 } & AnalyzeFile$1\1/12 >/13 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[10] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[11], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], ref_gen_AnalyzeFile_S1L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[13] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFile_T.ref.function );
    refalrts::push_stack( context[13] );
    refalrts::push_stack( context[10] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[12], context[13] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[10], context[11] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  do {
    // e.idx '.cpp'
    // </0 & AnalyzeFile/4 e.FileName#1/2 '.'/8 'c'/7 'p'/6 'p'/5 >/1
    context[21] = context[2];
    context[22] = context[3];
    context[5] = refalrts::char_right( 'p', context[21], context[22] );
    if( ! context[5] )
      continue;
    context[6] = refalrts::char_right( 'p', context[21], context[22] );
    if( ! context[6] )
      continue;
    context[7] = refalrts::char_right( 'c', context[21], context[22] );
    if( ! context[7] )
      continue;
    context[8] = refalrts::char_right( '.', context[21], context[22] );
    if( ! context[8] )
      continue;
    // closed e.FileName#1 as range 21(2)

    refalrts::reset_allocator();
    //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
    //RESULT: Tile{ [[ } </9 & Fetch/10 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/21(2) AsIs: '.'/8 AsIs: 'c'/7 AsIs: 'p'/6 AsIs: 'p'/5 AsIs: >/1 } </11 & @create_closure@/12 & AnalyzeFile$2\1/13 (/14 e.FileName#1/21(2)/15 )/17 >/18 >/19 Tile{ ]] }
    if( ! refalrts::alloc_open_call( context[9] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[10], ref_Fetch.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_call( context[11] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[12], & refalrts::create_closure ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_name( context[13], ref_gen_AnalyzeFile_S2L1.ref.function ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_open_bracket( context[14] ) )
      return refalrts::cNoMemory;
    if (! refalrts::copy_evar(context[15], context[16], context[21], context[22]))
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_bracket( context[17] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[18] ) )
      return refalrts::cNoMemory;
    if( ! refalrts::alloc_close_call( context[19] ) )
      return refalrts::cNoMemory;
    refalrts::update_name( context[4], ref_ExistFile_T.ref.function );
    refalrts::push_stack( context[19] );
    refalrts::push_stack( context[9] );
    refalrts::push_stack( context[18] );
    refalrts::push_stack( context[11] );
    refalrts::link_brackets( context[14], context[17] );
    refalrts::push_stack( context[1] );
    refalrts::push_stack( context[0] );
    refalrts::Iter trash_prev = arg_begin->prev;
    refalrts::use(trash_prev);
    refalrts::Iter res = arg_end->next;
    res = refalrts::splice_evar( res, context[11], context[19] );
    res = refalrts::splice_evar( res, context[0], context[1] );
    res = refalrts::splice_evar( res, context[9], context[10] );
    refalrts::use( res );
    return refalrts::cSuccess;
  } while ( 0 );
  refalrts::stop_sentence();

  // e.idx
  // </0 & AnalyzeFile/4 e.FileName#1/2 >/1
  // closed e.FileName#1 as range 2

  refalrts::reset_allocator();
  //TRASH: {REMOVED TILE} {REMOVED TILE} {REMOVED TILE}
  //RESULT: Tile{ [[ } </5 & Fetch/6 (/7 Tile{ AsIs: </0 Reuse: & ExistFile-T/4 AsIs: e.FileName#1/2 HalfReuse: '.'/1 }"sref"/8 >/10 )/11 </12 & ExistFile-T/13 e.FileName#1/2/14".cpp"/16 >/18 & AnalyzeFile$3\1/19 >/20 Tile{ ]] }
  if( ! refalrts::alloc_open_call( context[5] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[6], ref_Fetch.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_bracket( context[7] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[8], context[9], "sref", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[10] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_bracket( context[11] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_open_call( context[12] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[13], ref_ExistFile_T.ref.function ) )
    return refalrts::cNoMemory;
  if (! refalrts::copy_evar(context[14], context[15], context[2], context[3]))
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_chars( context[16], context[17], ".cpp", 4 ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[18] ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_name( context[19], ref_gen_AnalyzeFile_S3L1.ref.function ) )
    return refalrts::cNoMemory;
  if( ! refalrts::alloc_close_call( context[20] ) )
    return refalrts::cNoMemory;
  refalrts::update_name( context[4], ref_ExistFile_T.ref.function );
  refalrts::reinit_char( context[1], '.' );
  refalrts::push_stack( context[20] );
  refalrts::push_stack( context[5] );
  refalrts::push_stack( context[18] );
  refalrts::push_stack( context[12] );
  refalrts::link_brackets( context[7], context[11] );
  refalrts::push_stack( context[10] );
  refalrts::push_stack( context[0] );
  refalrts::Iter trash_prev = arg_begin->prev;
  refalrts::use(trash_prev);
  refalrts::Iter res = arg_end->next;
  res = refalrts::splice_evar( res, context[8], context[20] );
  res = refalrts::splice_evar( res, context[0], context[1] );
  res = refalrts::splice_evar( res, context[5], context[7] );
  refalrts::use( res );
  return refalrts::cSuccess;
}

static refalrts::RefalNativeFunction descr_AnalyzeFile(func_AnalyzeFile, refalrts::RefalFuncName("AnalyzeFile", 2890757293U, 861746543U));


//End of file