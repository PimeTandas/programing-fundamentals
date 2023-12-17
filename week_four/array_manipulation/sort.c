#include "sort.h"
#include <stdio.h>

void sort(int size, int *data)
{
	for (int i = 0; i < size; i++){
		for (int  j = 0; j < size - (i + 1); ++j)
		{
			if (data[j] > data[j + 1])
			{
				int temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
		if (i % 1000 == 0)
		{
			printf("%.2f%% sorted\n", ((float)i/(float)size) * 100.0f);
		}
	}
}