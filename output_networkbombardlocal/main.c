// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#ifndef NETSTRINGSENDER_H_
 #include "Insense_NetStringSender.h"
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
	NetStringSenderPNTR networktest_glob = NULL;
	DAL_assign(&networktest_glob , component_create( Construct_NetStringSender0, sizeof( NetStringSenderStruct ) , 126, 0, NULL ) );
	component_yield(  ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( networktest_glob->input_comp,Keyboard_glob->output_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( networktest_glob->output_comp,NetworkSend_glob->input_comp ) ;
;
	// End of sequence

	sem_wait( &can_exit  ) ;
	exit( 0 ) ;
}
