#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void print_stars(int num)
{
	for (int i = 0; i < num; i++)
	{
		printf("*");
	}
}


void print_spaces(int num)
{
	for(int i = 0; i < num; i++)
	{
		printf(" ");		
	}
}

void  generate_tree(int height)
{
	for (int i = 1; i <= height; i++)
	{
		print_spaces(height - i);
		print_stars(i * 2 - 1);
		printf("\n");
	}
	// Print the trunk.
	print_spaces(height-1);
	printf("*\n");
	print_spaces(height-1);
	printf("*\n");
}


int main(int argc, char **argv)
{
	char buffer[10];
	int tree_height;
	
	// Get tree height.
	printf("Please enter the height of the tree: \n");
	fgets(buffer, 10, stdin);
	
	// Convert tree height.
	tree_height = atoi(buffer);
	
	// Generate tree call
	generate_tree(tree_height);
	
	return 0;
}