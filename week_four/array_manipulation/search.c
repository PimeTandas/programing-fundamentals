#include "search.h"

int search(int value, int size, int *data)
{
	for (int i = 0; i < size; ++i)
	{
		if (data[i] == value)
		{
			return i;
		}
	}
	
	return -1;
}

