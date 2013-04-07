// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Test2";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Test2( Test2PNTR this ) { 

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
float  Test2_rationalToDecimal_proc( Test2PNTR this, jmp_buf *ex_handler, float whole, float numerator, float denominator ) { 
	inceos_event_t op_status;// for exception handling
	float  proc_result = 0.0;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// START return statement
	proc_result = Test2_add_proc(this, ex_handler, whole, Test2_divide_proc(this, ex_handler, numerator, denominator )  ) ;
	// no local decls requiring GC prior to jump
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence

end_proc:
	// decRef any pntr function parameters
	return proc_result;
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
float  Test2_add_proc( Test2PNTR this, jmp_buf *ex_handler, float a, float b ) { 
	inceos_event_t op_status;// for exception handling
	float  proc_result = 0.0;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
if( a<0|| b<0) { 	if(ex_handler) longjmp( *ex_handler,OperationFailedException ) ;
;
} ;
	// START return statement
	proc_result = a+b;
	// no local decls requiring GC prior to jump
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence

end_proc:
	// decRef any pntr function parameters
	return proc_result;
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
void  Test2_printRational_proc( Test2PNTR this, jmp_buf *ex_handler, float whole, float numerator, float denominator ) { 
	inceos_event_t op_status;// for exception handling
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete

{ 	// Start of try block
	jmp_buf ex_handler;
	if( (op_status = setjmp( ex_handler ) ) == 0){ 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, &ex_handler, Construct_String0("\n2: value = ") ) ;
	float value;
	value = Test2_rationalToDecimal_proc(this, &ex_handler, whole, numerator, denominator ) ;
	printReal_proc(this, &ex_handler, value ) ;
	// End of sequence
	}  else  { 
	if(op_status == DivisionByZeroException){ 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, &ex_handler, Construct_String0(" --- printRational: div by 0 ---") ) ;
	// End of sequence
	} else { // don't have handler for this exception here
		goto uid_1365353095317 ; // to throw exception to caller
	} 
	} // End of local exception handler(s)
} 
	goto enduid_1365353095317 ;// either no exception occurred or we have dealt with exception above, so do not pass it up to the caller
uid_1365353095317 :	// throw exception to caller if caller defined a handler
	if(ex_handler) longjmp( *ex_handler,op_status ) ;
enduid_1365353095317 :// End of try-except block
;
	printString_proc(this, ex_handler, Construct_String0("\n") ) ;
	// End of sequence

	// decRef any pntr function parameters
} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
float  Test2_divide_proc( Test2PNTR this, jmp_buf *ex_handler, float numerator, float denominator ) { 
	inceos_event_t op_status;// for exception handling
	float  proc_result = 0.0;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
if( denominator==0.0) { 	if(ex_handler) longjmp( *ex_handler,DivisionByZeroException ) ;
;
} ;
	// START return statement
	proc_result = numerator/denominator;
	// no local decls requiring GC prior to jump
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence

end_proc:
	// decRef any pntr function parameters
	return proc_result;
} 


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Test2( Test2PNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete

{ 	// Start of try block
	jmp_buf ex_handler;
	if( (op_status = setjmp( ex_handler ) ) == 0){ 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	Test2_printRational_proc(this, &ex_handler, 2.0, 3.0, 4.0 ) ;
	Test2_printRational_proc(this, &ex_handler, 2.0, 3.0, 0.0 ) ;
	Test2_printRational_proc(this, &ex_handler, -1.0, -3.0, 7.0 ) ;
	printString_proc(this, &ex_handler, Construct_String0(" --- behav: success ---") ) ;
	// End of sequence
	}  else  { 
	if(op_status == OperationFailedException){ 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, &ex_handler, Construct_String0(" --- behav: op failed  ---") ) ;
	// End of sequence
	} 
	} // End of local exception handler(s)
} 
// End of try-except block
;
	printString_proc(this, NULL, Construct_String0("\n") ) ;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Test2_init_globals( Test2PNTR this ) 
{ 
	this->decRef = decRef_Test2;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Test20( Test2PNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Test2_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Test2( this ) ;
} 


