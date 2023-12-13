#include <stdio.h>

int main(int argc, char **argv)
{
	#ifdef DEBUG
		printf("We are in debug mode\n");
	#elif RELEASE
		printf("In release mode\n");
	#else
		printf("What mode am I in?\n");
	#endif
	return 0;
}