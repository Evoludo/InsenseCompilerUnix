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
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printDeSerializer
void* deserialize_s( void* p )  { 
	void *result;
	StringPNTR value;
	value=Construct_String1( p ) ;
	result = Construct_PointerAnyType0( value,"s" ) ;
	return result;
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.TypeMarshaller::printInitializeSerializerFunctions
void initializeSerializerFunctions() { 
	mapPut( serialiserMap,"s",Construct_FunctionPair( NULL,(deserialf_t)deserialize_s )  ) ;
} 

