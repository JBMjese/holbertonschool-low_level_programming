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
	if (min > max)
	{
		return (NULL);
	}
	int size = max - min + 1;
	int *jbm = (int *) malloc(sizeof(int) * size);
	if (jbm == NULL)
	{
		return (NULL);
	}
	for (int i = 0; i < size; i++)
	jbm[i] = min++;
	{
		return (jbm);
}
