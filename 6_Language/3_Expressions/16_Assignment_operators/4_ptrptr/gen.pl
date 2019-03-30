@x = ("", "const", "volatile", "const volatile" );

$pp = 0;
foreach $p ( @x ){
    $qq = 0;
    foreach $q ( @x ){
	$rr = 0;
	foreach $r ( @x ){
	    $ss = 0;
	    foreach $s ( @x ){
		$x = ($pp << 6) |
		     ($qq << 4) |
		     ($rr << 2) |
		     ($ss << 0) ;
		$file = sprintf "test%03d.c", $x;
		open(FILE,">$file");
		print FILE<<EOF;
int main(void)
{
  $p char* $q * p;
  $r char* $s * q;
  p = q;
  return 0;
}
EOF
		$ss++;
	    }
	    $rr++;
	}
	$qq++;
    }
    $pp++;
}
