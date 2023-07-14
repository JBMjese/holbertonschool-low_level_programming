#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
  * array_range - creates an array of integers.
  * @min: Lower limit of the array
  * @max: Higher limit of the array.
  * Return: Pointer to the created array.
  */
int *array_range(int min, int max)
{
	int *ary;
	int j;
		
	if (min > max)
	return (NULL);
	ary = malloc(sizeof(int) * (max - min + 1));
	if (ary == NULL)
	return (NULL);
	for (j = 0; (min + j) <= max; j++)
	ary[j] = min + j;	
	return (ary);
}
