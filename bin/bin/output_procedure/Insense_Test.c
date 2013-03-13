// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "struct_Sicycle_rtemp__.h"


#ifndef DALSMALL
static char *file_name = "Test";
#endif


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::generateDecRef
static void decRef_Test( TestPNTR this ) { 

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsImpl

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourImpl
void behaviour_Test( TestPNTR this ) { 
	inceos_event_t op_status;// for exception handling

	while( ! this->stopped ) { 

	// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	struct_Sicycle_rtemp___PNTR r = NULL;
	DAL_assign(&r , construct_struct_Sicycle_rtemp__(this->count_comp, this->val_comp));
	struct_Sicycle_rtemp___PNTR r2 = NULL;
	DAL_assign(&r2 , copyReading_proc(this, NULL, r ) );
	printReading_proc(this, NULL, copyReading_proc(this, NULL, r )  ) ;
	this->count_comp = this->count_comp+1;
	this->val_comp = this->val_comp+0.216;
	// End of sequence
	DAL_decRef( r ) ;
	DAL_decRef( r2 ) ;

	} 
	component_exit(  ) ;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorImpls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorGlobalInitialiser
void Test_init_globals( TestPNTR this ) 
{ 
	this->decRef = decRef_Test;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationInitialisers
	this->count_comp = 1;
	this->val_comp = 19.2;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Test0( TestPNTR this, int _argc, void* _argv[] ) { 
	Test_init_globals( this ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	// End of sequence

	behaviour_Test( this ) ;
} 


