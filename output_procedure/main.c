// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#include "struct_Sicycle_rtemp__.h"
#ifndef TEST_H_
 #include "Insense_Test.h"
#endif 


#ifndef DALSMALL
static char *file_name = "main";
#endif

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobals

// main_stack_size definition so that InceOS knows size of main component
int main_stack_size = 92;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobalFunctions

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
struct_Sicycle_rtemp___PNTR  testReturn_proc( void* this, jmp_buf *ex_handler, struct_Sicycle_rtemp___PNTR src ) { 
	inceos_event_t op_status;// for exception handling
	struct_Sicycle_rtemp___PNTR  proc_result = NULL;
	DAL_incRef( src ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	struct_Sicycle_rtemp___PNTR copy = NULL;
	DAL_assign(&copy , construct_struct_Sicycle_rtemp__(src->cycle, src->temp));
if( src->cycle>5) { // Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	StringPNTR str = NULL;
	DAL_assign(&str , Construct_String0("hello"));
	// START return statement
	DAL_assign(&proc_result, copy);
	// garbage collect uncollected local decls that are in scope prior to jump
	DAL_decRef( copy ) ;
	DAL_decRef( str ) ;
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence
	DAL_decRef( str ) ;
;
} ;
	// START return statement
	DAL_assign(&proc_result, src);
	// garbage collect uncollected local decls that are in scope prior to jump
	DAL_decRef( copy ) ;
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence
	DAL_decRef( copy ) ;

end_proc:
	// decRef any pntr function parameters
	DAL_decRef( src ) ;
	// special decRef (without garbage collect) for function return value
	DAL_modRef_by_n( proc_result,-1 ) ;
	return proc_result;
} 


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
struct_Sicycle_rtemp___PNTR  copyReading_proc( void* this, jmp_buf *ex_handler, struct_Sicycle_rtemp___PNTR src ) { 
	inceos_event_t op_status;// for exception handling
	struct_Sicycle_rtemp___PNTR  proc_result = NULL;
	DAL_incRef( src ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	struct_Sicycle_rtemp___PNTR copy = NULL;
	DAL_assign(&copy , construct_struct_Sicycle_rtemp__(src->cycle, src->temp));
	// START return statement
	DAL_assign(&proc_result, copy);
	// garbage collect uncollected local decls that are in scope prior to jump
	DAL_decRef( copy ) ;
	// jump to end of procedure
	goto end_proc;
	// END return statement
;
	// End of sequence
	DAL_decRef( copy ) ;

end_proc:
	// decRef any pntr function parameters
	DAL_decRef( src ) ;
	// special decRef (without garbage collect) for function return value
	DAL_modRef_by_n( proc_result,-1 ) ;
	return proc_result;
} 


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
void  printReading_proc( void* this, jmp_buf *ex_handler, struct_Sicycle_rtemp___PNTR r ) { 
	inceos_event_t op_status;// for exception handling
	DAL_incRef( r ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printInt_proc(this, ex_handler, r->cycle ) ;
	printString_proc(this, ex_handler, Construct_String0(":") ) ;
	printReal_proc(this, ex_handler, r->temp ) ;
	printString_proc(this, ex_handler, Construct_String0("\n") ) ;
	// End of sequence

	// decRef any pntr function parameters
	DAL_decRef( r ) ;
} 


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printMain
int main( int argc, char **argv ) {
	inceos_event_t op_status;// for exception handling
	DAL_assign( &serialiserMap,Construct_StringMap(  )  ) ;
	initializeSerializerFunctions(  ) ;
	initDALGlobalObjects(  ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	TestPNTR test_glob = NULL;
	DAL_assign(&test_glob , component_create( Construct_Test0, sizeof( TestStruct ) , 72, 0, NULL ) );
	component_yield(  ) ;
;
	// End of sequence

	while( true );
	component_exit(  ) ;// as the primordial is a component itself created by the boot code, must deleted to return the memory and space it uses
}
