// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printIncludes
#include "InsenseRuntime.h"
#include "FunctionPair.h"
#include "BSTMap.h"
#include "GlobalObjects.h"
#include "cstring.h"
#include "marshaller.h"


#ifndef DALSMALL
static char *file_name = "marshaller"; // used by DAL_error macro
#endif
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printSerializer
void* serialize_s( StringPNTR p,int* size )  { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Code::genMallocAssign
	void*  pntr=( void* ) DAL_alloc( 128,false ) ;
	if( pntr== NULL ) { 
		DAL_error(OUT_OF_MEMORY_ERROR);
		return NULL;
	} 
	void* result=pntr;
	int used= 0;
	used += 2;
	if(used > 128){ 
		DAL_error( SERIALISATION_ERROR ) ;
		return NULL;
	} 
	memncpy( pntr,"s",2 ) ;
	pntr =((char *)pntr)+2;	
	used += p->length + 1;
	if(used > 128){ 
		DAL_error( SERIALISATION_ERROR ) ;
		return NULL;
	} 
	memncpy( (char *)pntr,p->data,p->length + 1 ) ;
	*size=used;
	return result;
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printSerializer
void* serialize_i( int *p,int* size )  { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Code::genMallocAssign
	void*  pntr=( void* ) DAL_alloc( 128,false ) ;
	if( pntr== NULL ) { 
		DAL_error(OUT_OF_MEMORY_ERROR);
		return NULL;
	} 
	void* result=pntr;
	int used= 0;
	used += 2;
	if(used > 128){ 
		DAL_error( SERIALISATION_ERROR ) ;
		return NULL;
	} 
	memncpy( pntr,"i",2 ) ;
	pntr =((char *)pntr)+2;	
	used += sizeof( int ) ;
	if(used > 128){ 
		DAL_error( SERIALISATION_ERROR ) ;
		return NULL;
	} 
	memncpy( (char *)pntr,(char *)p,sizeof( int )  ) ;
	*size=used;
	return result;
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printInitializeSerializerFunctions
void initializeSerializerFunctions() { 
	mapPut( serialiserMap,"s",Construct_FunctionPair( (serialf_t)serialize_s,NULL )  ) ;
	mapPut( serialiserMap,"i",Construct_FunctionPair( (serialf_t)serialize_i,NULL )  ) ;
} 

