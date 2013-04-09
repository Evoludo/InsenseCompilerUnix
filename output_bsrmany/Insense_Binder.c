// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Binder";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Binder( BinderPNTR this ) { 
	DAL_decRef( this->s1_comp ) ;
	DAL_decRef( this->s2_comp ) ;
	DAL_decRef( this->s3_comp ) ;
	DAL_decRef( this->s4_comp ) ;
	DAL_decRef( this->r1_comp ) ;
	DAL_decRef( this->r2_comp ) ;
	DAL_decRef( this->r3_comp ) ;
	DAL_decRef( this->r4_comp ) ;
	channel_unbind( this->errchan_comp ) ;
	// TODO need InceOS Channel_decRef( this->errchan_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Binder( BinderPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("B: Connecting sender to receiver ...\n") ) ;
	bool ooops;

	// Make call to receive function 
	channel_receive( this->errchan_comp,&ooops ) ;
;
	printString_proc(this, NULL, Construct_String0("B: received oops on errchan ...\n") ) ;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Disconnect::complete
	channel_unbind( this->s1_comp->output_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s1_comp->output_comp,this->r1_comp->input_comp ) ;
;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Binder_init_globals( BinderPNTR this ) 
{ 
	this->decRef = decRef_Binder;
	this->errchan_comp=channel_create( sizeof( bool  ) ,CHAN_IN ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	DAL_assign( &this->s1_comp,component_create( Construct_Sender0, sizeof( SenderStruct ) , 26, 1, Construct_argv_array_Sender0( 1 ) )  ) ;
	DAL_assign( &this->s2_comp,component_create( Construct_Sender0, sizeof( SenderStruct ) , 26, 1, Construct_argv_array_Sender0( 2 ) )  ) ;
	DAL_assign( &this->s3_comp,component_create( Construct_Sender0, sizeof( SenderStruct ) , 26, 1, Construct_argv_array_Sender0( 3 ) )  ) ;
	DAL_assign( &this->s4_comp,component_create( Construct_Sender0, sizeof( SenderStruct ) , 26, 1, Construct_argv_array_Sender0( 4 ) )  ) ;
	DAL_assign( &this->r1_comp,component_create( Construct_Receiver0, sizeof( ReceiverStruct ) , 34, 1, Construct_argv_array_Receiver0( 1 ) )  ) ;
	DAL_assign( &this->r2_comp,component_create( Construct_Receiver0, sizeof( ReceiverStruct ) , 34, 1, Construct_argv_array_Receiver0( 2 ) )  ) ;
	DAL_assign( &this->r3_comp,component_create( Construct_Receiver0, sizeof( ReceiverStruct ) , 34, 1, Construct_argv_array_Receiver0( 3 ) )  ) ;
	DAL_assign( &this->r4_comp,component_create( Construct_Receiver0, sizeof( ReceiverStruct ) , 34, 1, Construct_argv_array_Receiver0( 4 ) )  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Binder0( BinderPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Binder_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s1_comp->errchan_comp,this->errchan_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s1_comp->output_comp,this->r1_comp->input_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s1_comp->output_comp,this->r2_comp->input_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s1_comp->output_comp,this->r3_comp->input_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s2_comp->output_comp,this->r4_comp->input_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s3_comp->output_comp,this->r4_comp->input_comp ) ;
;


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Connect::complete
	channel_bind( this->s4_comp->output_comp,this->r4_comp->input_comp ) ;
;
	// End of sequence

	behaviour_Binder( this ) ;
} 


