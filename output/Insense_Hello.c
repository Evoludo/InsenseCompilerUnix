// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Hello";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Hello( HelloPNTR this ) { 

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Hello( HelloPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	printString_proc(this, NULL, Construct_String0("\nHello World ") ) ;
	printInt_proc(this, NULL, this->count_comp ) ;
	this->count_comp = this->count_comp+1;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Hello_init_globals( HelloPNTR this ) 
{ 
	this->decRef = decRef_Hello;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->count_comp = 1;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Hello0( HelloPNTR this, int _argc, void* _argv[] ) { 
	Hello_init_globals( this ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Hello( this ) ;
} 


