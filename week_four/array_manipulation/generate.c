#include "generate.h"
#include <stdlib.h>
#include <time.h>

void generate(int size, int *data)
{
	srand(time(NULL));
	for (int i = 0; i < size; i++)
	{
		data[i] = rand();
	}
}