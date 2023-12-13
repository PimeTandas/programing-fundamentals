#include <stdlib.h>
#include <stdio.h>

void func()
{
	// Define a static value.
	static int x = 0;
	
	// Print the value of x.
	printf("x = %d\n", x);
	// Increment.
	x = x + 1;
}

int main(int argc, char **argv)
{
	// Call func 100 times.
	for (int i = 0; i < 100; ++i)
	{
		func();
	}

	return 0;
}