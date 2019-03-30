while ( <> ){
    chop $_;
    if ( /\$1 =.*0[Xx]([0-9a-fA-f]*)/ ){ 
      print "#define ABCDEF0 0x",$1, "\n";
    }
}
