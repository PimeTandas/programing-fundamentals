#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a = -500;
	unsigned int b = -500;
	unsigned int c = (unsigned int)a;
	float f = -500;

	printf ("a signed : %d, a unsigned : %u\n", a , a ) ;
	printf ("b signed : %d, b unsigned : %u\n", b , b ) ;
	printf ("c signed : %d, c unsigned : %u\n", c , c ) ;
	printf ("f signed : %d, f unsigned : %u\n", f , f ) ;
	printf ("a == b: %d\n", a == b ) ;
	printf ("a == c: %d\n", a == c ) ;
	printf ("a == f: %d\n", a == f ) ;


	return 0;
}