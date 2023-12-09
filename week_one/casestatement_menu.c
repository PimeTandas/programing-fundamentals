#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main(char argv, int **argc)
{
	int flag = 1;
	while (flag)
	{
		printf("1 - Say hello\n");
		printf("2 - Say goodbye\n");
		printf("0 - Exit\n");
		printf("Enter your choice: ");
	
		char buffer[10];
		fgets(buffer, 10, stdin);
		
		// Convert number.
		int number = atoi(buffer);
		
		switch (number)
		{
			case 1:
				printf("Hello World!\n");
				break;
			case 2:
				printf("Goodbye World!\n");
				break;
			case 0:
				printf("Exiting...\n");
				flag = 0;
				break;
			default:
				printf("Error with the input\n");
		}
	}
	return 0;
} 