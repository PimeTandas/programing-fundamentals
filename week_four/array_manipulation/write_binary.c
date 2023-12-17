#include <stdio.h>
#include <stdlib.h>

#include "sort.h"

int readfile(int **data)
{
	FILE *file;
	file = fopen("numebers.dat", "rb");
	
	int size;
	fread(&size, sizeof(int), 1, file);
	
	*data = (int *)malloc(sizeof(int) * size);
	
	fread(*data, sizeof(int), size, file);
	
	fclose(file);

	return size;
}

void writefile(int size, int *data)
{
	FILE *file;
	file = fopen("sorted.txt", "w");
	
	// Loop through each file writing it to the text file.
	for (int i = 0; i < size; i++)
	{
		fprintf(file, "%d\n", data[i]);
	}
	fclose(file);
}

int main(int argc, char **argv)
{
	// Read in the data.
	int *data;
	int size = readfile(&data);
	
	sort(size, data);
	
	writefile(size, data);
	
	free(data);
	
	return 0;
}