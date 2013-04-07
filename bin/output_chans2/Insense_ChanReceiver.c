// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "ChanReceiver";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_ChanReceiver( ChanReceiverPNTR this ) { 
	channel_unbind( this->chanIn_comp ) ;
	// TODO need InceOS Channel_decRef( this->chanIn_comp ) ;
	channel_unbind( this->dataOut_comp ) ;
	// TODO need InceOS Channel_decRef( this->dataOut_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_ChanReceiver( ChanReceiverPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
if( !this->gotChan_comp) { // Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	Channel_PNTR chan;

	// Make call to receive function 
	channel_receive( this->chanIn_comp,&chan,false ) ;
	channel_adopt( chan ) ;
;
	this->dataOut_comp = chan;
	this->gotChan_comp = true;
	// End of sequence
;
} ;
	// Make call to send op 
{ 
	int  _lvalue= this->count_comp;
	channel_send( this->dataOut_comp,&_lvalue,NULL  ) ;
	// end of send op 
} 
;
	this->count_comp = this->count_comp+1;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void ChanReceiver_init_globals( ChanReceiverPNTR this ) 
{ 
	this->decRef = decRef_ChanReceiver;
	this->chanIn_comp=channel_create( sizeof( Channel_PNTR  ) ,CHAN_IN ) ;
	this->dataOut_comp=channel_create( sizeof( int  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->dataOut_comp = channel_create( sizeof( int  ) ,CHAN_OUT ) ;
	this->count_comp = 0;
	this->gotChan_comp = false;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_ChanReceiver0( ChanReceiverPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	ChanReceiver_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_ChanReceiver( this ) ;
} 


