// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "ChanSender";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_ChanSender( ChanSenderPNTR this ) { 
	channel_unbind( this->chanOut_comp ) ;
	// TODO need InceOS Channel_decRef( this->chanOut_comp ) ;
	channel_unbind( this->dataIn_comp ) ;
	// TODO need InceOS Channel_decRef( this->dataIn_comp ) ;
	channel_unbind( this->dataOut_comp ) ;
	// TODO need InceOS Channel_decRef( this->dataOut_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_ChanSender( ChanSenderPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
if( !this->sentChan_comp) { // Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->dataOut_comp,this->dataIn_comp ) ;
;
	// Make call to send op 
{ 
	Channel_PNTR  _lvalue= channel_duplicate( this->dataOut_comp ) ;
	channel_send( this->chanOut_comp,&_lvalue,NULL  ) ;
	// end of send op 
} 
;
	this->sentChan_comp = true;
	// End of sequence
;
} ;
	int i;

	// Make call to receive function 
	channel_receive( this->dataIn_comp,&i,false ) ;
;
	printInt_proc(this, NULL, i ) ;
	printString_proc(this, NULL, Construct_String0(" was received\n") ) ;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void ChanSender_init_globals( ChanSenderPNTR this ) 
{ 
	this->decRef = decRef_ChanSender;
	this->chanOut_comp=channel_create( sizeof( Channel_PNTR  ) ,CHAN_OUT ) ;
	this->dataIn_comp=channel_create( sizeof( int  ) ,CHAN_IN ) ;
	this->dataOut_comp=channel_create( sizeof( int  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->dataOut_comp = channel_create( sizeof( int  ) ,CHAN_OUT ) ;
	this->dataIn_comp = channel_create( sizeof( int  ) ,CHAN_IN ) ;
	this->sentChan_comp = false;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_ChanSender0( ChanSenderPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	ChanSender_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_ChanSender( this ) ;
} 


