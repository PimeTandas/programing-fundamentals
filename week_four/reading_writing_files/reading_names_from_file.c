#include <stdio.h>
#include <stdlib.h>

void readfromfile()
{
	
	char string[50];
	
	FILE *file;
	file = fopen("names.txt", "r");
	while(fgets(string, sizeof(string), file))
	{
		printf("%s", string);
	}
}

int main(int argc, char **argv)
{
	printf("Reading from contents of file: names.txt");
	readfromfile();
	return 0;
}