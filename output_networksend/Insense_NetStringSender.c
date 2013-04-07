// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "struct_Ssaddr_apayload__.h"


#ifndef DALSMALL
static char *file_name = "NetStringSender";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_NetStringSender( NetStringSenderPNTR this ) { 
	channel_unbind( this->input_comp ) ;
	// TODO need InceOS Channel_decRef( this->input_comp ) ;
	channel_unbind( this->output_comp ) ;
	// TODO need InceOS Channel_decRef( this->output_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_NetStringSender( NetStringSenderPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("Enter address to connect to:\n") ) ;
	StringPNTR addr = NULL;

	// Make call to receive function 
	channel_receive( this->input_comp,&addr ) ;
;
	struct_Ssaddr_apayload___PNTR npacket = NULL;
	DAL_assign(&npacket , construct_struct_Ssaddr_apayload__(addr, Construct_IntAnyType0( this->i_comp,"i" ) ));
	// Make call to send op 
{ 
	struct_Ssaddr_apayload___PNTR  _lvalue= copy_struct_Ssaddr_apayload__( npacket ) ;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	this->i_comp = this->i_comp+1;
if( this->i_comp==100) { // Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	this->i_comp = 0;
	// End of sequence
;
} ;
	// End of sequence
	DAL_decRef( addr ) ;
	DAL_decRef( npacket ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void NetStringSender_init_globals( NetStringSenderPNTR this ) 
{ 
	this->decRef = decRef_NetStringSender;
	this->input_comp=channel_create( sizeof( StringPNTR  ) ,CHAN_IN ) ;
	this->output_comp=channel_create( sizeof( struct_Ssaddr_apayload___PNTR  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->i_comp = 0;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_NetStringSender0( NetStringSenderPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	NetStringSender_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_NetStringSender( this ) ;
} 


