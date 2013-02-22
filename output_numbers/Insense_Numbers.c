// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


#ifndef DALSMALL
static char *file_name = "Numbers";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Numbers( NumbersPNTR this ) { 
	DAL_decRef( this->comma_comp ) ;
	DAL_decRef( this->cr_comp ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Numbers( NumbersPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	float r;
	r = -3.14;
	int i;
	i = -28;
	uint8_t b;
	b = 255;
	unsigned u;
	u = 64000;
	printReal_proc(this, NULL, r ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	printInt_proc(this, NULL, i ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	printByte_proc(this, NULL, b ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	printUnsignedInt_proc(this, NULL, u ) ;
	printString_proc(this, NULL, this->cr_comp ) ;
	unsigned res1;
	res1 = b+u;
	printUnsignedInt_proc(this, NULL, res1 ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	int res2;
	res2 = i+b;
	printInt_proc(this, NULL, res2 ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	int res3;
	res3 = i+u;
	printInt_proc(this, NULL, res3 ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	unsigned res4;
	res4 = intToUnsigned_proc(this, NULL, res3 ) ;
	printUnsignedInt_proc(this, NULL, res4 ) ;
	printString_proc(this, NULL, this->comma_comp ) ;
	float res5;
	res5 = r+(i+u);
	printReal_proc(this, NULL, res5 ) ;
	printString_proc(this, NULL, this->cr_comp ) ;
	// End of sequence

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Numbers_init_globals( NumbersPNTR this ) 
{ 
	this->decRef = decRef_Numbers;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	DAL_assign( &this->comma_comp,Construct_String0(", ") ) ;
	DAL_assign( &this->cr_comp,Construct_String0("\n") ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Numbers0( NumbersPNTR this, int _argc, void* _argv[] ) { 
	Numbers_init_globals( this ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Numbers( this ) ;
} 


