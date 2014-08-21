package;
import format.swf.Data.FontData;
import format.swf.Data.FontInfoData;
import haxe.crypto.Md5;
import haxe.io.Bytes;
import haxe.io.BytesInput;
import haxe.io.BytesOutput;
import haxe.Resource;
import format.abc.Data;
import sys.io.File;

using Main;
class Main {
	static   var map ;
	static var symbolList ; 
	static function main() {
		map = new Map();  		
		new Main();
	}
	public function new() {
		
		var symbols =  Resource.getString("symbols");
		symbolList = new Array();
		symbolList = symbols.split("\r\n");
		//trace(symbolList.length);
		
		//return ;
		// var swfInput = new BytesInput( Resource.getBytes( "C:\\openfl\\swf-obfuscator2\\bin\\login.swf" ) );
       var swfInput =  File.read("test.swf");// new BytesInput( Resource.getBytes( "game" ) );
       trace("open file test.swf ", swfInput); 

       var swfReader = new format.swf.Reader( swfInput );
       var swf  = swfReader.read();
       var symbolClassCount  = 0;
		// symbolClass name map
		for( i in 0...swf.tags.length ) {
			var tag = swf.tags[i];
			switch( tag ) {
				case TSymbolClass( classes ):
                     //trace( ' = Class linkage: $classes' );
                     replectSymbolClass(classes) ;
                     symbolClassCount = classes.length;
                     case TFont( id  , data  ):
                     fontTest(id, data) ;
                     case TFontInfo( id , data ) :
                     fontTest2(id, data);

                     case _:
                 }
             }
		//confuscate classNames 
		for( i in 0...swf.tags.length ) {
			var tag = swf.tags[i];
			switch( tag ) {
				case TSymbolClass( classes ):
				case TActionScript3( abcBytes, other ):
				swf.tags[i] = TActionScript3( transformAbc( abcBytes  ,symbolClassCount ) );
				case _:
			}
		}
		//confuscate symbolClass names 
		for( i in 0...swf.tags.length ) {
			var tag = swf.tags[i];
			switch( tag ) {
				case TSymbolClass( classes ):
                     //trace( ' = Class linkage: $classes' );
                     swf.tags[i] =  TSymbolClass(tranformSymbolClass(classes));
                     case _:
                 }
             }
             return ;
             //var swfWriter = new format.swf.Writer( swfOutput );
             //swfWriter.write( swf ); 
             //sys.io.File.saveBytes("target.swf", swfOutput.getBytes());
             //trace("confuscate file = target.swf  KO");
         }

         function fontTest(id:Int , data: FontData):Void {
		trace(" fontTest  id" , 1);// id , data);

}

function fontTest2( id:Int , data:FontInfoData):Void {
		trace(" fontTest2  id" , 2);// id , data);
}

function replectSymbolClass(classList  : Array<{cid: Int, className: String}> ) {
	var id:Int  = 128 ;
	for ( classItem in classList) {
		++id;
		var split = classItem.className.split(".");
		map[ split[split.length-1]] = String.fromCharCode(id) ;
	}
}

function tranformSymbolClass(classList  : Array<{cid: Int, className: String}> ) {
	for ( classItem in classList) {
			//trace("XXXX" , classItem.className );
			var split = classItem.className.split(".");
			classItem.className = map[split[split.length - 1]];// StringTools.replace(classItem.className ,  split[split.length - 1]  , map[split[split.length - 1]]);
		}
		return classList ; 
	}

	function transformAbc( abcBytes : Bytes  ,pre:Int ){
		var abcInput = new BytesInput( abcBytes );
		var abcReader = new format.abc.Reader( abcInput );
		var nameSpaceName ;

		var abcData = abcReader.read();
		var reg1:EReg = ~/([a-zA-Z0-9])+ControllerXXXX$/;
		var reg2:EReg = ~/([a-zA-Z0-9])+View$/;
		var id:Int  = 129 + pre ;
		 // trace("pre" , pre , map );
		 for ( cls in abcData.classes ) {
			//trace("CLASS NAME === " , cls.name );
			//trace("cls " , cls );
			switch( abcData.getName( cls.name ) ) {
				case NName( name, ns ):
				var nameString = abcData.getString( name );	
				if (map.exists ( nameString)) {
						//trace("found======" , nameString);
						abcData.setString( name, map[nameString]);
						}else {
							++id;
							var newNameString = String.fromCharCode(id); 
							abcData.setString( name, newNameString);
						} 
						case _:
						throw "Unexpected class name";
					}

				}
				var f :format.abc.Function ;
				for ( f  in abcData.functions ) {
		//	 trace("function  ======== " , abcData.getName( f.code ));
		  //trace("function  = ", f.code );
		//  var ops = format.abc.OpReader.decode(new haxe.io.BytesInput(f.code));

		 // trace("OPS");
             //  var code = format.abc.OpReader.decode( new BytesInput( f.code ) );
             //  trace( code );
         }
		 
		 var regSystemNameSpaces:EReg = ~/^(flash|fl)\.+/;

         for ( f1 in abcData.strings ) {
			// trace("f1  = ", f1 );
             // var code = format.abc.OpReader.decode( new BytesInput( f.code ) );
             //  trace( code );
         }
         trace("abcData.names.length = " , abcData.names.length);
         for ( f1 in abcData.names ) {
			  //trace("f1  = ", f1 );
			  switch( f1) {
			  	case NName( name, ns ):
					if (symbolList.indexOf(abcData.getString(name) )> -1)    continue;
					 trace( "NAMe ==========" , abcData.getString( name )  ,symbolList.indexOf(abcData.getString(name)));
							switch( abcData.getNameSpace(ns)) {
									case NPrivate(  ns ):
										trace("NPrivate" ,   abcData.getString(ns) );
									case NPublic(  ns ):
										nameSpaceName  = abcData.getString(ns);
									if (nameSpaceName!=null  &&   !regSystemNameSpaces.match(nameSpaceName)) {
										trace("NPublic passed ," ,  nameSpaceName);
									}else {
										trace("NPublic not found=======" ,  nameSpaceName);
									}
									case NInternal(  ns):
										trace("NInternal" ,  abcData.getString(ns ));
									case NProtected(  ns ):
										trace("NProtected" ,  abcData.getString(ns ));
									case NExplicit(  ns ):
										trace("NExplicit" ,  abcData.getString(ns ));
									case NStaticProtected(  ns ):
										trace("NStaticProtected" ,  abcData.getString(ns ));
									case _ :
										trace("unkown type !!!!!!!!!!!!!!!" );
							  //throw "Unexpected names";
							}

					  //trace(abcData.getName(ns));
					 // getNameSpace(ns);
				    
				    case _ :
				  //throw "Unexpected names";
				}
			 //trace(f1.getName) ;
             // var code = format.abc.OpReader.decode( new BytesInput( f.code ) );
             //  trace( code );
         }
		//trace("abcData.namespaces.leng = " , abcData.namespaces.length);
		
		//if (regSystemNameSpaces.match("ftel.a.*")) {
			//trace("hahaah====================");
		//}else {
			//trace("wuwuwuw=============");
		//}
		
		for (f1 in abcData.namespaces ) {
			 //trace("namespaces = " , f1);
			 switch( f1) {
			 	case NPrivate(  ns ):
						//trace("NPrivate" ,   ns );
						case NPublic(  ns ):
						nameSpaceName  = abcData.getString(ns);
						//trace("NPublic" ,  nameSpaceName);
						if (nameSpaceName!=null  &&   !regSystemNameSpaces.match(nameSpaceName)) {
							//var name2 = ++id +"";
							abcData.setString(ns, "");// name2);
}
case NInternal(  ns):
						//trace("NInternal" ,  abcData.getString(ns ));
						case NProtected(  ns ):
						//trace("NProtected" ,  abcData.getString(ns ));
						case NExplicit(  ns ):
							//trace("NExplicit" ,  abcData.getString(ns ));
							case NStaticProtected(  ns ):
						//trace("NStaticProtected" ,  abcData.getString(ns ));
						case _ :
				  //throw "Unexpected names";
				}
			}

			for ( f3 in abcData.methodTypes ) {
			// trace("f3  = ", f3.args ,f3.ret ,f3.extra );
             // var code = format.abc.OpReader.decode( new BytesInput( f.code ) );
             //  trace( code );
         }

         var abcOutput = new BytesOutput();
         var abcWriter = new format.abc.Writer( abcOutput );
         abcWriter.write( abcData );
         return abcOutput.getBytes();
     }

     public static function getNameSpace( abcData : format.abc.Data.ABCData, idx : Index<Namespace> ) : Namespace {
     	switch( idx ) {
     		case Idx(i):    return abcData.namespaces[i-1];
     	}
     }
    // Static extensions for easier dereferencing of indices
    public static function getName( abcData : format.abc.Data.ABCData, idx : Index<Name> ) : Name {
    	switch( idx ) {
    		case Idx(i):    return abcData.names[i-1];
    	}
    }
    
    public static function getString( abcData : format.abc.Data.ABCData, idx : Index<String> ) : String {
		//trace("HERER!!!" ,idx );
		switch( idx ) {
			case Idx(i):    return abcData.strings[i-1];
		}
	}

	public static function setString( abcData : format.abc.Data.ABCData, idx : Index<String>, value : String ) {
		switch( idx ) {
			case Idx(i):    abcData.strings[i-1] = value;
		}
	}
}