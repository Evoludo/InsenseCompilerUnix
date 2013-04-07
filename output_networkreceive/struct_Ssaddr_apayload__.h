// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.StructDeclaration::printDOTHHeaders
#ifndef STRUCT_SSADDR_APAYLOAD___H_
#define STRUCT_SSADDR_APAYLOAD___H_
#include "InsenseRuntime.h"
#include "String.h"
#include "AnyType.h"

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.StructDeclaration::generateStructDecl
typedef struct struct_Ssaddr_apayload__ *struct_Ssaddr_apayload___PNTR , struct_Ssaddr_apayload___struct ;
struct struct_Ssaddr_apayload__ { 
	void (*_decRef)(struct_Ssaddr_apayload___PNTR  pntr);
	StringPNTR  addr;
	AnyTypePNTR  payload;
} ;


extern struct_Ssaddr_apayload___PNTR construct_struct_Ssaddr_apayload__( StringPNTR  addr,AnyTypePNTR  payload );

extern struct_Ssaddr_apayload___PNTR copy_struct_Ssaddr_apayload__( struct_Ssaddr_apayload___PNTR p ) ;

#endif /* STRUCT_SSADDR_APAYLOAD___H_*/ 

