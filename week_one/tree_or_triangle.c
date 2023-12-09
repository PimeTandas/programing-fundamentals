#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// Get the height of the shape.
int get_height()
{
	char buffer[10];
	int height;
	printf("Please select the height of your shape: \n");
	fgets(buffer, 10, stdin);
	height = atoi(buffer);

	return height;
}

// Deal with printing the spaces.
void print_spaces(int num)
{
	for (int i = 0; i < num; i++)
	{
		printf(" ");
	}
}


// Deal with printing the stars.
void print_stars(int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("*");
	}	
}

// Create the triangle part.
void create_shared_shape(int height)
{
	for (int i = 1; i < height; i++)
	{
		print_spaces(height - i);
		print_stars(i * 2 - 1);
		printf("\n");
	}
}

void create_triangle()
{
	int height = get_height();
	create_shared_shape(height);
}

void create_tree()
{
	int height = get_height();
	create_shared_shape(height);
	print_spaces(height-1);
	printf("*\n");
}


int main(int argc, char **argv)
{
	char buffer[10];
	int user_choice;
	
	int exit_flag = 1;
	
	while (exit_flag)
	{
		// Get user choice.
		printf("Would you like to print a (1) A Tree, (2) A Triangle or (3) to Exit:\n");
		fgets(buffer, 10, stdin);
		// Convert to int
		user_choice = atoi(buffer);
		
		// Conditional Statement.
		if (user_choice == 1)
		{
			create_tree();
		}
		else if (user_choice == 2)
		{
			create_triangle();
		}
		else if (user_choice == 3S)
		{
			exit_flag = 0;
			printf("Exiting...");
			break;
		}
		else
		{
			printf("Please select one of the two choices\n");
		}
	}
	return 0;
}