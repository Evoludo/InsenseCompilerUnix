// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::print_ifdef
#ifndef TEST2_H_
#define TEST2_H_

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructDecl
typedef struct Test2 *Test2PNTR , Test2Struct ;
struct Test2 { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printCommonDecls
	void (*decRef)(Test2PNTR pntr);
	bool stopped;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructChannelDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::printLocationDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationDecls

} ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsDecls
float  Test2_rationalToDecimal_proc( Test2PNTR this, jmp_buf *ex_handler, float whole, float numerator, float denominator ) ;
float  Test2_add_proc( Test2PNTR this, jmp_buf *ex_handler, float a, float b ) ;
void  Test2_printRational_proc( Test2PNTR this, jmp_buf *ex_handler, float whole, float numerator, float denominator ) ;
float  Test2_divide_proc( Test2PNTR this, jmp_buf *ex_handler, float numerator, float denominator ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorSignatures
extern void Construct_Test20( Test2PNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourForwardDecl
extern void behaviour_Test2( Test2PNTR this ) ;
#endif /* TEST2_H_*/ 

