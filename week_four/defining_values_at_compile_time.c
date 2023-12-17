#include <stdio.h>


// We can get different code to run depending on what we pass the compiler with the /D flag.
int main(int argc, char **argv)
{
#ifdef DEBUG
	printf("I am in Debug mode!\n");
#elif RELESE
	printf("I am in Release mode!\n");
#else
	printf("I am in Standard mode!\n");
#endif
	return 0;
}