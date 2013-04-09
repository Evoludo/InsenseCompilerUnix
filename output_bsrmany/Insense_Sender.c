// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Sender";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Sender( SenderPNTR this ) { 
	channel_unbind( this->errchan_comp ) ;
	// TODO need InceOS Channel_decRef( this->errchan_comp ) ;
	channel_unbind( this->output_comp ) ;
	// TODO need InceOS Channel_decRef( this->output_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Sender( SenderPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printInt_proc(this, NULL, this->id_comp ) ;
	printString_proc(this, NULL, Construct_String0("S: sending value on output chan\n") ) ;
	// Make call to send op 
{ 
	int  _lvalue= this->number_comp;
	channel_send( this->output_comp,&_lvalue ) ;
	// end of send op 
} 
;
	this->number_comp = this->number_comp+1;
if( this->number_comp%10==0) { // Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("S: sent another 10 values ... disconnecting\n") ) ;
	// Make call to send op 
{ 
	bool  _lvalue= true;
	channel_send( this->errchan_comp,&_lvalue ) ;
	// end of send op 
} 
;
	// End of sequence
;
} ;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Sender_init_globals( SenderPNTR this ) 
{ 
	this->decRef = decRef_Sender;
	this->errchan_comp=channel_create( sizeof( bool  ) ,CHAN_OUT ) ;
	this->output_comp=channel_create( sizeof( int  ) ,CHAN_OUT ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->number_comp = 0;
	this->id_comp = 0;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::arrayFunctionDecl
void **Construct_argv_array_Sender0( int n ) { 
	int  *_p2n = DAL_alloc( sizeof( int  ) , false ) ;
	*_p2n = n;
	void **_argv = DAL_alloc( 1*sizeof( void*  ) , false ) ;
	DAL_assign( &_argv[0],_p2n ) ;
	return _argv;
} 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Sender0( SenderPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	int n = *((int *)_argv[0]);
	Sender_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	this->id_comp = n;
	// End of sequence

	int _i;
	for(_i = 0 ;_i <_argc ;_i++ ){ 
		DAL_decRef( _argv[_i] ) ;
	} 
	DAL_decRef( _argv ) ;
	behaviour_Sender( this ) ;
} 


