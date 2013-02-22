// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::print_ifdef
#ifndef HELLO_H_
#define HELLO_H_

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructDecl
typedef struct Hello *HelloPNTR , HelloStruct ;
struct Hello { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printCommonDecls
	void (*decRef)(HelloPNTR pntr);
	bool stopped;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructChannelDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::printLocationDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationDecls
	int  count_comp;	int  limit_comp;
} ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsDecls

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorSignatures
extern void Construct_Hello0( args_s *args ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourForwardDecl
extern void behaviour_Hello( HelloPNTR this ) ;
#endif /* HELLO_H_*/ 

