// This program tests giving an input to many characters.

#include <stdio.h>
#include <string.h>

int main (int argc, char **argv)
{
	char test_string1[5];
	char test_string2[5];
	
	printf("Please enter 6 characters: \n");
	fgets(test_string1, 5, stdin);
	
	printf("test_string1: %s", test_string1);
	
	printf("Please enter another 6 characters: \n");
	
	fgets(test_string2, 5, stdin);
	printf("test_string2: %s", test_string2);

	return 0;
}