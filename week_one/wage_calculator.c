#include <string.h>
#include <stdio.h>
#include <stdlib.h>

double calculate_wage(double rate, double hours)
{
	return rate * hours;
}

// Pass a modifiable value.
void remove_newline(char *str)
{
	int len = strlen(str);
	
	if (len > 0 && str[len - 1] == '\n')
	{
		str[len - 1] = '\0';
	}
}

int main(char argv, int **argc)
{
	int flag = 1;
	while (flag != 0)
	{
		char name[50];
		char number[10];
		
		// Get user name input.
		printf("Please enter your name: \n");
		fgets(name, 50, stdin);
		remove_newline(name);
		
		// Check if name equals 0 and if so exit.
		if (strcmp(name, "0") == 0)
		{
			flag = 0;
			continue;
		}
		
		// Get user hourly rate input.
		printf("Please enter your hourly rate: \n");
		fgets(number, 10, stdin);
		
		// Convert string to number.
		double rate = atof(number);
		
		// Get user hours input.
		printf("Please enter your hours: \n");
		fgets(number, 10, stdin);
		
		// Convert string to number.
		double hours = atof(number);
		
		// Calculate wage.
		double wage = calculate_wage(rate, hours);
		printf("Wage for %s, is %.2f\n", name, wage);
		
	}
	printf("Goodbye!");
	
	return 0;
}