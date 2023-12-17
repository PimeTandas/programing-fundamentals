#include <stdlib.h>
#include <stdio.h>

#include "sort.h"

int readfile(int **data)
{
	FILE *file;
	file = fopen("numbers.dat", "rb");
	
	int size;
	fread(&size, sizeof(int), 1, file);

	*data = (int*)malloc(sizeof(int) * size);
	
	fread(*data, sizeof(int), size, file);
	
	fclose(file);
	
	return size;
}

int main(int argc, char **argv)
{
	int *data;
	
	int size = readfile(&data);
	
	sort(size, data);
	
	for (int i = 0; i < 20; ++ i )
	{
		printf("%d\n", data[i]);
	}
	
	free(data);
	
	return 0;
}