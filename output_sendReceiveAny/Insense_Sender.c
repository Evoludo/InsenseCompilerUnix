// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Sender";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Sender( SenderPNTR this ) { 
	channel_unbind( this->output_comp ) ;
	// TODO need InceOS Channel_decRef( this->output_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Sender( SenderPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	AnyTypePNTR ai = NULL;
	DAL_assign(&ai , Construct_IntAnyType0( this->i_comp,"i" ) );
	AnyTypePNTR ar = NULL;
	DAL_assign(&ar , Construct_RealAnyType0( this->r_comp,"r" ) );
	// Make call to send op 
{ 
	AnyTypePNTR  _lvalue= ai;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	// Make call to send op 
{ 
	AnyTypePNTR  _lvalue= ar;
	DAL_incRef( _lvalue ) ;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	this->i_comp = this->i_comp+1;
	this->r_comp = this->r_comp+1.0;
	// End of sequence
	DAL_decRef( ai ) ;
	DAL_decRef( ar ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Sender_init_globals( SenderPNTR this ) 
{ 
	this->decRef = decRef_Sender;
	this->output_comp=channel_create( sizeof( AnyTypePNTR  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->i_comp = 0;
	this->r_comp = 0.0;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Sender0( SenderPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Sender_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Sender( this ) ;
} 


