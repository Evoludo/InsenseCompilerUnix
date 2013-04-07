// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.CompilationUnit::printHeaders
#include "main.h"
#ifndef CHANSENDER_H_
 #include "Insense_ChanSender.h"
#endif 
#ifndef CHANRECEIVER_H_
 #include "Insense_ChanReceiver.h"
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
	sem_init( &can_exit,0,1 ) ;
	num_threads=0;
	pthread_mutex_init( &conn_op_mutex,NULL ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	ChanSenderPNTR cs_glob = NULL;
	DAL_assign(&cs_glob , component_create( Construct_ChanSender0, sizeof( ChanSenderStruct ) , 44, 0, NULL ) );
	component_yield(  ) ;
;
	ChanReceiverPNTR cr_glob = NULL;
	DAL_assign(&cr_glob , component_create( Construct_ChanReceiver0, sizeof( ChanReceiverStruct ) , 28, 0, NULL ) );
	component_yield(  ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( cs_glob->chanOut_comp,cr_glob->chanIn_comp ) ;
;
	// End of sequence

	sem_wait( &can_exit  ) ;
	component_exit(  ) ;// as the primordial is a component itself created by the boot code, must deleted to return the memory and space it uses
}
