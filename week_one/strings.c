// Different ways of declaring strings in C
#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	// Notice we have set this box of memeory to be size 5, meaning there is no room for a null terminator to be automatically added at the end.
	char message_1[5] = {'H','e','l','l','o'};
	
	// Since the string is size 7 and we have made the block of memeory size 8 the null terminator has room to be automatically added to the end.
	char message_2[8] = " World!";
	
	// Here we have added the null terminator manually, in this case there will be two.
	char message_3[9] = "Goodbye!\0";

	// Here we left the memory block size empty so compiler will work this out for us.
	char message_4[] = "Compiler worked out my size!";

	// In this example we declare a pointer to a block of memory, there is no real difference between this method and the previous one.
	char *message_5 = "Compiler worked out my size too!";
	
	printf("%s\n", message_1);
	printf("%s\n", message_2);
	printf("%s\n", message_3);
	printf("%s\n", message_4);
	printf("%s\n", message_5);
	

	return 0;
}