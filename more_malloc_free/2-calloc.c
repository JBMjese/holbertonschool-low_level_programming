#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  * _calloc - allocates memory for an array.
  * @nmemb: Amount of elements of the array
  * @size: Size of each element
  * Return: pointer to the allocated memory, or NULL in fail
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	size_t total_size = nmemb * size;
	void *ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, total_size);
	return (ptr);
}	
