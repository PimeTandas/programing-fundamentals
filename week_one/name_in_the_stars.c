#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	char name[50];

	// Get user input to store name.
	printf("Please enter your name:\n");
	fgets(name, 50, stdin);
	
	// Remove the new line for name.	
	int len = strlen(name);
	if (len > 0 && name[len - 1] == '\n')
	{
		name[len - 1] = '\0';
	}
	
	// Print the top stars.
	for (int i = 1; i < len+2; i++)
	{
		printf("*");
	}
	
	// Print the middle stars and name.
	printf("\n*%s*\n", name);
	
	// Print the bottom stars.
	for (int i = 1; i < len+2; i++)
	{
		printf("*");
	}

	return 0;
}