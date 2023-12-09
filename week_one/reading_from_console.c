#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
	// Declare char arrays to store names.
	char first_name[50];
	char second_name[50];
	char full_name[50];
	
	// Prompt user for their first name.
	printf("Please enter your first name: ");
	fgets(first_name, 50, stdin);
	
	// Remove the newline character from the end.
	int len = strlen(first_name);
	
	if (len > 0 && first_name[len - 1] == '\n')
		first_name[len - 1] = '\0';
		
	if (strcmp(first_name, "Kevin") == 0)
		printf("Hey another Kevin!");
	else
		printf("Oh well\n");
		
	// Prompt the user for their second name.
	printf("Please enter your second name: ");
	fgets(second_name, 50, stdin);
	
	len = strlen(second_name);
	
	if (len > 0 && second_name[len - 1] == '\n')
		second_name[len - 1] = '\0';
	
	// Join the two strings.
	full_name[0] = '\0';
	strcat(full_name, first_name);
	strcat(full_name, " ");
	strcat(full_name, second_name);
	
	// Print out their full name.
	printf("Your full name is %s which is %d characters long\n", full_name, strlen(full_name));
	
	return 
	0;
}