#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Defines the menu choice.
enum CHOICE
{
	EXIT = 0,
	HELLO = 1,
	GOODBYE = 2
};

int main(int argc, char **argv)
{
	int flag  = 1;
	while (flag)
	{
		// Print menu.
		printf("1 - say Hello\n");
		printf("2 - say Goodbye\n");
		printf("0 - exit\n");
		printf("Enter choice - ");
		
		// Read input.
		char buffer[50];
		fgets(buffer, 50, stdin);
		
		enum choice ch = atoi(buffer);
		
		switch (ch)
		{
			case HELLO:
				printf("Hello world!\n");
				break;
			case GOODBYE:
				printf("Goodbye!\n");
				break;
			case EXIT:
				printf("Exiting...\n");
				flag = 0;
				break;
			default:
				printf("Invalid option\n");
				break;
		}
	}

	return 0;
}