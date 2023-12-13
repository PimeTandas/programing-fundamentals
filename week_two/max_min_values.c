#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char **argv)
{
	printf("Unsigned int is %d bytes, and its max value is, %u and its min value is, 0.\n", sizeof(unsigned int), UINT_MAX);
	printf("Signed int is %d bytes, and its max value is, %d and its min value is, %d.", sizeof(int), INT_MAX, INT_MIN);
	return 0;
}