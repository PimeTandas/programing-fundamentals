#include <stdlib.h>
#include <stdio.h>

#include "generate.h"
#include "search.h"
#include "sort.h"

#define NUM_INTEGERS 65535

int main(int argc, char **argv)
{
	int data[NUM_INTEGERS];
	
	generate(NUM_INTEGERS, data);
	
	printf("======== Unsorted ========\n");
	for (int i = 0; i < 50; i++)
	{
		printf("%d\n", data[i]);
	}
	
	sort(NUM_INTEGERS, data);

	printf("======== Sorted ========\n");
	for (int i = 0; i < 50; i++)
	{
		printf("%d\n", data[i]);
	}
	
	return 0;
}