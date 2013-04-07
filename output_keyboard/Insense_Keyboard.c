// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Keyboard";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Keyboard( KeyboardPNTR this ) { 
	channel_unbind( this->output_comp ) ;
	// TODO need InceOS Channel_decRef( this->output_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Keyboard( KeyboardPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	StringPNTR buffer = NULL;
	DAL_assign(&buffer , Construct_String0(""));
	// Make call to send op 
{ 
	StringPNTR  _lvalue= buffer;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue,NULL  ) ;
	// end of send op 
} 
;
	printString_proc(this, NULL, Construct_String0("Sent string on output:\n") ) ;
	printString_proc(this, NULL, buffer ) ;
	// End of sequence
	DAL_decRef( buffer ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Keyboard_init_globals( KeyboardPNTR this ) 
{ 
	this->decRef = decRef_Keyboard;
	this->output_comp=channel_create( sizeof( StringPNTR  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Keyboard0( KeyboardPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Keyboard_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Keyboard( this ) ;
} 


