// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#ifndef SENDER_H_
 #include "Insense_Sender.h"
#endif 
#ifndef RECEIVER_H_
 #include "Insense_Receiver.h"
#endif 
#ifndef BINDER_H_
 #include "Insense_Binder.h"
#endif 


#ifndef DALSMALL
static char *file_name = "main";
#endif

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobals

// main_stack_size definition so that InceOS knows size of main component
int main_stack_size = 104;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobalFunctions

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printMain
int main( int argc, char **argv ) {
	inceos_event_t op_status;// for exception handling
	DAL_assign( &serialiserMap,Construct_StringMap(  )  ) ;
	initializeSerializerFunctions(  ) ;
	initDALGlobalObjects(  ) ;
	initUnixGlobalObjects(  ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	BinderPNTR binder_glob = NULL;
	DAL_assign(&binder_glob , component_create( Construct_Binder0, sizeof( BinderStruct ) , 100, 0, NULL ) );
	component_yield(  ) ;
;
	// End of sequence

	sem_wait( &can_exit  ) ;
	exit( 0 ) ;
}
