// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "KeyboardTest";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_KeyboardTest( KeyboardTestPNTR this ) { 
	channel_unbind( this->input_comp ) ;
	// TODO need InceOS Channel_decRef( this->input_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_KeyboardTest( KeyboardTestPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	StringPNTR recvd = NULL;

	// Make call to receive function 
	channel_receive( this->input_comp,&recvd ) ;
;
	printString_proc(this, NULL, Construct_String0("Received string on output:\n") ) ;
	printString_proc(this, NULL, recvd ) ;
	printString_proc(this, NULL, Construct_String0("\n") ) ;
	// End of sequence
	DAL_decRef( recvd ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void KeyboardTest_init_globals( KeyboardTestPNTR this ) 
{ 
	this->decRef = decRef_KeyboardTest;
	this->input_comp=channel_create( sizeof( StringPNTR  ) ,CHAN_IN ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_KeyboardTest0( KeyboardTestPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	KeyboardTest_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_KeyboardTest( this ) ;
} 


