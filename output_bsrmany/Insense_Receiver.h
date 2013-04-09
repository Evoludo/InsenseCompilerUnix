// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::print_ifdef
#ifndef RECEIVER_H_
#define RECEIVER_H_

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructDecl
typedef struct Receiver *ReceiverPNTR , ReceiverStruct ;
struct Receiver { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printCommonDecls
	void (*decRef)(ReceiverPNTR pntr);
	bool stopped;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructChannelDecls
	Channel_PNTR input_comp;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::printLocationDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationDecls
	int  id_comp;
} ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsDecls
void  Receiver_printDetails_proc( ReceiverPNTR this, jmp_buf *ex_handler, int number ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printArrayFunctionSignatures
extern void **Construct_argv_array_Receiver0( int n ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorSignatures
extern void Construct_Receiver0( ReceiverPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourForwardDecl
extern void behaviour_Receiver( ReceiverPNTR this ) ;
#endif /* RECEIVER_H_*/ 

