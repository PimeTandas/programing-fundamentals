#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	// Loop for number of arguments.
	for (int i = 0; i < argc; i++)
	{
		printf("Argument %d: %s \n", i, argv[i]);
	}
	printf("All arguments printed.");
	
	return 0;
}