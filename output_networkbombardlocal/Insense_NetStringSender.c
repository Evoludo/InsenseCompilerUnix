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
	StringPNTR addr = NULL;
	DAL_assign(&addr , Construct_String0("127.0.0.1"));
	StringPNTR message = NULL;
	DAL_assign(&message , Construct_String0("spam"));
	struct_Ssaddr_apayload___PNTR npacketS = NULL;
	DAL_assign(&npacketS , construct_struct_Ssaddr_apayload__(addr, Construct_PointerAnyType0( message,"s" ) ));
	// Make call to send op 
{ 
	struct_Ssaddr_apayload___PNTR  _lvalue= copy_struct_Ssaddr_apayload__( npacketS ) ;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	struct_Ssaddr_apayload___PNTR npacketI = NULL;
	DAL_assign(&npacketI , construct_struct_Ssaddr_apayload__(addr, Construct_IntAnyType0( this->i_comp,"i" ) ));
	// Make call to send op 
{ 
	struct_Ssaddr_apayload___PNTR  _lvalue= copy_struct_Ssaddr_apayload__( npacketI ) ;
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
	struct_Ssaddr_apayload___PNTR npacketR = NULL;
	DAL_assign(&npacketR , construct_struct_Ssaddr_apayload__(addr, Construct_RealAnyType0( 4.2,"r" ) ));
	// Make call to send op 
{ 
	struct_Ssaddr_apayload___PNTR  _lvalue= copy_struct_Ssaddr_apayload__( npacketR ) ;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	// End of sequence
	DAL_decRef( addr ) ;
	DAL_decRef( message ) ;
	DAL_decRef( npacketS ) ;
	DAL_decRef( npacketI ) ;
	DAL_decRef( npacketR ) ;

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


