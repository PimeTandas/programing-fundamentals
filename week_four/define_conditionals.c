#include <stdio.h>
#define TEST

int main()
{
	#ifdef TEST
	printf("Test, is defined.\n");
	#else
	printf("Test is not defined, is defined.\n");	
	#endif
	return 0;
}