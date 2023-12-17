#include <stdlib.h>
#include <stdio.h>

void writetofile(char *name)
{
	FILE *file;
	
	file = fopen("names.txt", "a+");
	
	fprintf(file, "%s", name);
	
}

int main(int argc, char **argv)
{
	char name[50];
	int flag = 1;
	
	while (flag)
	{
		// Prompt user to enter name.
		printf("Please enter a name or type 'END' to exit program: \n");
		fgets(name, sizeof(name), stdin);
		
		// Check if name is "END".
		if (strcmp(name,"END\n") == 0)
		{
			flag = 0;
			continue;
		}
		else
		{
			writetofile(name);
		}
	
	}
	printf("Exiting...\n");
	return 0;
}