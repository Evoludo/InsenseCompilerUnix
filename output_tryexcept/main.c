// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#ifndef TEST2_H_
 #include "Insense_Test2.h"
#endif 


#ifndef DALSMALL
static char *file_name = "main";
#endif

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobals

// main_stack_size definition so that InceOS knows size of main component
int main_stack_size = 92;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobalFunctions

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printMain
int main( int argc, char **argv ) {
	inceos_event_t op_status;// for exception handling
	DAL_assign( &serialiserMap,Construct_StringMap(  )  ) ;
	initializeSerializerFunctions(  ) ;
	initDALGlobalObjects(  ) ;
	initUnixGlobalObjects(  ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	Test2PNTR test2_glob = NULL;
	DAL_assign(&test2_glob , component_create( Construct_Test20, sizeof( Test2Struct ) , 82, 0, NULL ) );
	component_yield(  ) ;
;
	// End of sequence

	sem_wait( &can_exit  ) ;
	exit( 0 ) ;
}
