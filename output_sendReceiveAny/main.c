// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#ifndef SENDER_H_
 #include "Insense_Sender.h"
#endif 
#ifndef RECEIVER_H_
 #include "Insense_Receiver.h"
#endif 


#ifndef DALSMALL
static char *file_name = "main";
#endif

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobals

// main_stack_size definition so that InceOS knows size of main component
int main_stack_size = 94;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printGlobalFunctions

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printMain
int main( int argc, char **argv ) {
	inceos_event_t op_status;// for exception handling
	DAL_assign( &serialiserMap,Construct_StringMap(  )  ) ;
	initializeSerializerFunctions(  ) ;
	initDALGlobalObjects(  ) ;
	initUnixGlobalObjects(  ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	SenderPNTR s_glob = NULL;
	DAL_assign(&s_glob , component_create( Construct_Sender0, sizeof( SenderStruct ) , 90, 0, NULL ) );
	component_yield(  ) ;
;
	ReceiverPNTR r_glob = NULL;
	DAL_assign(&r_glob , component_create( Construct_Receiver0, sizeof( ReceiverStruct ) , 70, 0, NULL ) );
	component_yield(  ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( s_glob->output_comp,r_glob->input_comp ) ;
;
	// End of sequence

	sem_wait( &can_exit  ) ;
	exit( 0 ) ;
}
