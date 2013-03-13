// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Receiver";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Receiver( ReceiverPNTR this ) { 
	channel_unbind( this->input_comp ) ;
	// TODO need InceOS Channel_decRef( this->input_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::generateCode
void  Receiver_printDetails_proc( ReceiverPNTR this, jmp_buf *ex_handler, int number ) { 
	inceos_event_t op_status;// for exception handling
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Function::<init>
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, ex_handler, Construct_String0("R: Got value ") ) ;
	printInt_proc(this, ex_handler, number ) ;
	printString_proc(this, ex_handler, Construct_String0("\n") ) ;
	// End of sequence

	// decRef any pntr function parameters
} 


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Receiver( ReceiverPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	int number;

	// Make call to receive function 
	channel_receive( this->input_comp,&number,false ) ;
;
	Receiver_printDetails_proc(this, NULL, number ) ;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Receiver_init_globals( ReceiverPNTR this ) 
{ 
	this->decRef = decRef_Receiver;
	this->input_comp=channel_create( sizeof( int  ) ,CHAN_IN ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Receiver0( ReceiverPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Receiver_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Receiver( this ) ;
} 


