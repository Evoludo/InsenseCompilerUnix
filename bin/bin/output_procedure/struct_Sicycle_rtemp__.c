#include "struct_Sicycle_rtemp__.h"

#ifndef DALSMALL
static char *file_name = "struct_Sicycle_rtemp__";
#endif

struct_Sicycle_rtemp___PNTR copy_struct_Sicycle_rtemp__( struct_Sicycle_rtemp___PNTR p )  { 
	DAL_incRef( p ) ;
	struct_Sicycle_rtemp___PNTR copy = construct_struct_Sicycle_rtemp__( p->cycle, p->temp );
	DAL_decRef( p ) ;
	return copy;
} 


struct_Sicycle_rtemp___PNTR construct_struct_Sicycle_rtemp__( int  cycle,float  temp ) { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Code::genMallocAssign
	struct_Sicycle_rtemp___PNTR  pntr=( struct_Sicycle_rtemp___PNTR ) DAL_alloc( sizeof( struct_Sicycle_rtemp___struct  ) ,false ) ;
	if( pntr== NULL ) { 
		DAL_error(OUT_OF_MEMORY_ERROR);
		return NULL;
	} 
	pntr->cycle=cycle;
	pntr->temp=temp;
	return pntr;
} 


