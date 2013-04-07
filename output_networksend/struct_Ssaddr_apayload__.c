#include "struct_Ssaddr_apayload__.h"

#ifndef DALSMALL
static char *file_name = "struct_Ssaddr_apayload__";
#endif

struct_Ssaddr_apayload___PNTR copy_struct_Ssaddr_apayload__( struct_Ssaddr_apayload___PNTR p )  { 
	DAL_incRef( p ) ;
	struct_Ssaddr_apayload___PNTR copy = construct_struct_Ssaddr_apayload__( p->addr, p->payload );
	DAL_decRef( p ) ;
	return copy;
} 


void decRef_struct_Ssaddr_apayload__( struct_Ssaddr_apayload___PNTR pntr ) { 
	DAL_decRef( pntr->addr ) ;
	DAL_decRef( pntr->payload ) ;
} 


struct_Ssaddr_apayload___PNTR construct_struct_Ssaddr_apayload__( StringPNTR  addr,AnyTypePNTR  payload ) { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Code::genMallocAssign
	struct_Ssaddr_apayload___PNTR  pntr=( struct_Ssaddr_apayload___PNTR ) DAL_alloc( sizeof( struct_Ssaddr_apayload___struct  ) ,true ) ;
	if( pntr== NULL ) { 
		DAL_error(OUT_OF_MEMORY_ERROR);
		return NULL;
	} 
	pntr->_decRef=decRef_struct_Ssaddr_apayload__;
	DAL_assign( &pntr->addr,addr ) ;
	DAL_assign( &pntr->payload,payload ) ;
	return pntr;
} 


