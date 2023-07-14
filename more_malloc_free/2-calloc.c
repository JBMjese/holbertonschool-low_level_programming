#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * _calloc - allocates memory for an array.
  * @nmemb: Amount of elements of the array
  * @size: Size of each element
  * Return: pointer to the allocated memory, or NULL in fail
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *len;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	len = malloc(nmemb * size);
	if (len == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		len[i] = 0x00;
	}	
	return (len);
}	
