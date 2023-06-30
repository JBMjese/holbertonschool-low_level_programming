#include "main.h"
#include <stdio.h>
/**
  ** print_array - prints n elements
  ** followed by a new line.
  ** @a: pointer to string
  ** @n: Number of elements in the array
  ** return: 0
  **/
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < (n - 1); c++)
	{
		printf("%d, ", *(a + c));
	}
	if (n > 0)
	printf("%d\n", *(a + (n - 1)));
	else
	printf("\n");
}
