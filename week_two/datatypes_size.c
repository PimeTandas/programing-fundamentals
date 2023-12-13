#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main(int argc, char **argv)
{
	printf("unsigned char is %d bytes , min value %u, max value %u\n", sizeof(unsigned char), 0, UCHAR_MAX);
	
	printf("signed char is %d bytes , min value %d, max value %d\n", sizeof(signed char), SCHAR_MIN, SCHAR_MAX);
	
	printf("char is %d bytes , min value %d, max value %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
	
	printf("unsigned short is %d bytes , min value %u, max value %d\n", sizeof(unsigned short), 0,USHRT_MAX);
	
	printf("short is %d bytes , min value %d, max value %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);

	printf("unsigned int is %d bytes , min value %u, max value %u\n", sizeof(unsigned int), 0, UINT_MAX);
	
	printf("int is %d bytes , min value %d, max value %d\n", sizeof(int), INT_MIN, INT_MAX);
	
	printf("unsigned long is %d bytes , min value %lu , max value %lu\n", sizeof(unsigned long) , 0, ULONG_MAX);
	
	printf("long is %d bytes , min value %ld , max value %ld\n", sizeof(long) , LONG_MIN, LONG_MAX);
	
	printf("unsigned long long is %d bytes , min value %llu , max value %llu\n", sizeof(unsigned long long), 0ULL, ULLONG_MAX);
	
	printf("long long is %d bytes , min value %lld , max value %lld \n", sizeof(long long), LLONG_MIN, LLONG_MAX);
	
	printf("float is %d bytes , min value %e, max value %e\n", sizeof(float), FLT_MIN, FLT_MAX);
	
	printf("double is %d bytes , min value %e, max value %e\n", sizeof(double), DBL_MIN, DBL_MAX);
	
	printf("long double is %d bytes , min value %e, max value %e\n", sizeof(long double), LDBL_MIN, LDBL_MAX);

	// Pointer sizes
	printf(" char * is %d bytes \n", sizeof(char*));
	printf(" short * is %d bytes \n", sizeof(short*));
	printf("int * is %d bytes \n", sizeof(int*));

	return 0;
}
