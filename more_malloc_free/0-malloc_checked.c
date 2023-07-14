#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * malloc_checked - allocates memory.
  * @b: Bytes to allocate
  * Return: pointer to the allocated memory or 98 if malloc fails
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);
	return (ptr);
}
