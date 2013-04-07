// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "union_intfloat.h"


#ifndef DALSMALL
static char *file_name = "Receiver";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Receiver( ReceiverPNTR this ) { 
	channel_unbind( this->input_comp ) ;
	// TODO need InceOS Channel_decRef( this->input_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Receiver( ReceiverPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	AnyTypePNTR something = NULL;

	// Make call to receive function 
	channel_receive( this->input_comp,&something ) ;
;
	//any project start
	if( anyTypeIsEqual( something,"i" ) ) { 
		int  val =  anyTypeGetIntValue( something ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printInt_proc(this, NULL, val ) ;
	// End of sequence
	} 
	else if( anyTypeIsEqual( something,"r" ) ) { 
		float  val =  anyTypeGetRealValue( something ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printReal_proc(this, NULL, val ) ;
	// End of sequence
	} 
	else { 
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("???") ) ;
	// End of sequence

	}  
	//any project end
;
	printString_proc(this, NULL, Construct_String0(" received\n") ) ;
	// End of sequence
	DAL_decRef( something ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Receiver_init_globals( ReceiverPNTR this ) 
{ 
	this->decRef = decRef_Receiver;
	this->input_comp=channel_create( sizeof( AnyTypePNTR  ) ,CHAN_IN ) ;
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


