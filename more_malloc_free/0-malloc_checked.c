#include "main.h"
#include <stdlib.h>
/**
  * malloc_checked - allocates memory.
  * @nb: Bytes to allocate
  * Return: pointer to the allocated memory or 98 if malloc fails
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL) {
	fprintf(stderr, "Error: malloc failed. Exiting with status 98.\n");
	exit(98);
	}
	return (ptr));
}
