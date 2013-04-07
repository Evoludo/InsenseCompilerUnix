// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "struct_Ssaddr_apayload__.h"
#include "union_StringPNTR.h"


#ifndef DALSMALL
static char *file_name = "NetStringPrinter";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_NetStringPrinter( NetStringPrinterPNTR this ) { 
	channel_unbind( this->input_comp ) ;
	// TODO need InceOS Channel_decRef( this->input_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_NetStringPrinter( NetStringPrinterPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	struct_Ssaddr_apayload___PNTR recvd = NULL;

	// Make call to receive function 
	channel_receive( this->input_comp,&recvd ) ;
;
	//any project start
	if( anyTypeIsEqual( recvd->payload,"s" ) ) { 
		StringPNTR  message =  anyTypeGetPointerValue( recvd->payload ) ;
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("Received string from ") ) ;
	printString_proc(this, NULL, recvd->addr ) ;
	printString_proc(this, NULL, Construct_String0(":\n") ) ;
	printString_proc(this, NULL, message ) ;
	printString_proc(this, NULL, Construct_String0("\n") ) ;
	// End of sequence
	} 
	else { 
	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("Error: unexpected data type") ) ;
	// End of sequence

	}  
	//any project end
;
	// End of sequence
	DAL_decRef( recvd ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void NetStringPrinter_init_globals( NetStringPrinterPNTR this ) 
{ 
	this->decRef = decRef_NetStringPrinter;
	this->input_comp=channel_create( sizeof( struct_Ssaddr_apayload___PNTR  ) ,CHAN_IN ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_NetStringPrinter0( NetStringPrinterPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) { 
	NetStringPrinter_init_globals( this ) ;
	pthread_mutex_unlock( init ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_NetStringPrinter( this ) ;
} 


