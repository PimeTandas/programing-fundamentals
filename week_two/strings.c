#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	// Declare some strings.
	char *hello = "Hello World!";
	char goodbye[15] = "Goodbye World!";
	
	// Print the messages.
	printf("Hello message: %s\n", hello);
	printf("Goodbye message: %s\n", goodbye);
	
	// Get their sizes.
	printf("Size of hello message: %d\n", sizeof(hello));
	printf("Size of goodbye message: %d\n", sizeof(goodbye));
	
	// Get the size of the data pointed to by the string.
	printf("Size of data in hello message: %d\n", sizeof(*hello));
	printf("Size of data in goodbye message: %d\n", sizeof(*goodbye));
	
	// Get the length of the string.
	printf("Length of hello message: %d\n", strlen(hello));
	printf("Length of goodbye message: %d\n", strlen(goodbye));
	
	return 0;
}