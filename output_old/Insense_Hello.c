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
if( this->count_comp>this->limit_comp) { 
	component_stop( this ) ;
;
} ;
	printAny_proc(this, NULL, Construct_PointerAnyType0( Construct_String0("\nHello World "),"s" )  ) ;
	printAny_proc(this, NULL, Construct_IntAnyType0( this->count_comp,"i" )  ) ;
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
	this->count_comp = 0;
	this->limit_comp = 0;

} 

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::generateCode
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::arrayFunctionDecl
void **Construct_argv_array_Hello0( int number ) { 
	int  *_p2number = DAL_alloc( sizeof( int  ) , false ) ;
	*_p2number = number;
	void **_argv = DAL_alloc( 1*sizeof( void*  ) , false ) ;
	DAL_assign( &_argv[0],_p2number ) ;
	return _argv;
} 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Constructor::constructorFunctionDecl
void Construct_Hello0( args_s *args ) {
	HelloPNTR this = *(HelloPNTR*)(args->this_dp);
	int _argc = args->argc;
	void **_argv = args->argv;
	int number = *((int *)_argv[0]);
	Hello_init_globals( this ) ;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Sequence::complete
	this->limit_comp = number;
	// End of sequence

	int _i;
	for(_i = 0 ;_i <_argc ;_i++ ){ 
		DAL_decRef( _argv[_i] ) ;
	} 
	DAL_decRef( _argv ) ;
	behaviour_Hello( this ) ;
} 


