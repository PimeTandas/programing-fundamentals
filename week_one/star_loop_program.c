#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(char argv, int **argc)
{
	int flag = 1;
	
	while (flag)
	{
		char buffer[10];
		printf("Please enter how many stars, (0 to quit): ");
		fgets(buffer, 10, stdin);
		
		// Convert the string number input to an int.
		int number = atoi(buffer);
		
		if (!number)
		{
			break;
		}
		
		for (int i = 0; i <= number; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf("*");
			}
			printf("\n");
		}
	}
		printf("Goodbye!");

	return 0;
}