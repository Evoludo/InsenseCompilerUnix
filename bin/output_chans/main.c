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
	pthread_mutex_init( &conn_op_mutex,NULL ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	BinderPNTR binder_glob = NULL;
	DAL_assign(&binder_glob , component_create( Construct_Binder0, sizeof( BinderStruct ) , 88, 0, NULL ) );
	component_yield(  ) ;
;
	// End of sequence

	while( true );
	component_exit(  ) ;// as the primordial is a component itself created by the boot code, must deleted to return the memory and space it uses
}
