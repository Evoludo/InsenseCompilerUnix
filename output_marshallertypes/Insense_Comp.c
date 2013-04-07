// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "union_boolintunsignedfloatuint8_tStringPNTR.h"


#ifndef DALSMALL
static char *file_name = "Comp";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Comp( CompPNTR this ) { 
	DAL_decRef( this->vbool_comp ) ;
	DAL_decRef( this->vint_comp ) ;
	DAL_decRef( this->tunsigned_comp ) ;
	DAL_decRef( this->treal_comp ) ;
	DAL_decRef( this->tbyte_comp ) ;
	DAL_decRef( this->tpointer_comp ) ;
	channel_unbind( this->channel_comp ) ;
	// TODO need InceOS Channel_decRef( this->channel_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Comp( CompPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	AnyTypePNTR types = NULL;

	// Make call to receive function 
	channel_receive( this->channel_comp,&types ) ;
;
	//any project start
	if( anyTypeIsEqual( types,"b" ) ) { 
		bool  ttype =  anyTypeGetBoolValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else if( anyTypeIsEqual( types,"i" ) ) { 
		int  ttype =  anyTypeGetIntValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else if( anyTypeIsEqual( types,"u" ) ) { 
		unsigned  ttype =  anyTypeGetUnsignedIntValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else if( anyTypeIsEqual( types,"r" ) ) { 
		float  ttype =  anyTypeGetRealValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else if( anyTypeIsEqual( types,"8" ) ) { 
		uint8_t  ttype =  anyTypeGetByteValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else if( anyTypeIsEqual( types,"s" ) ) { 
		StringPNTR  ttype =  anyTypeGetPointerValue( types ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence
	} 
	else { 
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	}  
	//any project end
;
	// End of sequence
	DAL_decRef( types ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Comp_init_globals( CompPNTR this ) 
{ 
	this->decRef = decRef_Comp;
	this->channel_comp=channel_create( sizeof( AnyTypePNTR  ) ,CHAN_IN ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	DAL_assign( &this->vbool_comp,Construct_BoolAnyType0( true,"b" )  ) ;
	DAL_assign( &this->vint_comp,Construct_IntAnyType0( -3,"i" )  ) ;
	DAL_assign( &this->tunsigned_comp,Construct_UnsignedIntAnyType0( 3,"u" )  ) ;
	DAL_assign( &this->treal_comp,Construct_RealAnyType0( 3.2,"r" )  ) ;
	DAL_assign( &this->tbyte_comp,Construct_ByteAnyType0( 10,"8" )  ) ;
	DAL_assign( &this->tpointer_comp,Construct_PointerAnyType0( Construct_String0("ohai"),"s" )  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Comp0( CompPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	Comp_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Comp( this ) ;
} 


