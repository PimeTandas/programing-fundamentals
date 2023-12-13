#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv)
{
	// Lets start with an unsigned char
	unsigned char c = UCHAR_MAX;
	printf("Value is %d\n", c);
	
	// Cast to signed char.
	printf("As signed char %d\n", (char)c);

	// Cast to short.
	printf("As short %d\n", (short)c);
	
	// Cast to int.
	printf("As int %d\n", (int)c);
	
	// Cast to long.
	printf("As long %ld", (long)c);

	// Cast to long long.
	printf("As long long %lld\n", (long long)c);

	return 0;
}