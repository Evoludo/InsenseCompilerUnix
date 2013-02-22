package uk.ac.stand.cs.insense.compiler.unixCCgen;

import uk.ac.stand.cs.insense.compiler.cgen.IArrayDereference;
import uk.ac.stand.cs.insense.compiler.cgen.ICode;
import uk.ac.stand.cs.insense.compiler.symbols.STEntry;

/*
 * @author al
 * @deprecated as of 16/5/07 by the new class @see uk.ac.stand.cs.insense.compiler.cgen.Dereference
 */
public class ArrayDereference extends ArrayOps implements ICode, IArrayDereference {
	
	private String fn;
	private String array_name;
	private String array_index;
	
	private static boolean success_generated = false;
	
	public ArrayDereference( STEntry ste ) { //ITypeRep referend_type ) {
		super();
		array_name = ste.getName();
		fn = array_deref_function( ste.getType() );
	}

	public void append( String s ) {
			array_index = s;
	}
	
	public void complete() {
		super.append( functionCall( fn, array_name, array_index, AMPERSAND + "success" )  + RRB);
		if( ExceptionBlock.inExceptionBlock() ) {
			super.append( "; if( ! success ) { goto " + ExceptionBlock.getLabel() + RCB_ + SEMI + NEWLINE );
		}
		if( ! success_generated ) {
			success_generated = true;
			Cgen.get_instance().addHoistedCodeToComponentContext( TAB + "bool success;" + NEWLINE );
		}
	}
	


}
