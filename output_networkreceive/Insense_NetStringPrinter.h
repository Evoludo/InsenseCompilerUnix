// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::print_ifdef
#ifndef NETSTRINGPRINTER_H_
#define NETSTRINGPRINTER_H_

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printImplIncludes
#include "main.h"
// TODO put remainder of impl includes here
#include "struct_Ssaddr_apayload__.h"
#include "union_StringPNTR.h"


// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructDecl
typedef struct NetStringPrinter *NetStringPrinterPNTR , NetStringPrinterStruct ;
struct NetStringPrinter { 
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printCommonDecls
	void (*decRef)(NetStringPrinterPNTR pntr);
	bool stopped;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printStructChannelDecls
	Channel_PNTR input_comp;
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::printLocationDecls
// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.DeclarationContainer::locationDecls

} ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printComponentFuncsDecls

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printConstructorSignatures
extern void Construct_NetStringPrinter0( NetStringPrinterPNTR this, int _argc, void* _argv[], pthread_mutex_t* init ) ;

// Generated from: uk.ac.stand.cs.insense.compiler.unixCCgen.Component::printBehaviourForwardDecl
extern void behaviour_NetStringPrinter( NetStringPrinterPNTR this ) ;
#endif /* NETSTRINGPRINTER_H_*/ 

