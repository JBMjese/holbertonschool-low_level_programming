#include "main.h"
/**
  * _memset - Fills memory with a constant byte.
  * @s: Pointer to the memory area to fill.
  * @b: Value to be set. The value is treated as an unsigned char.
  * @n: Number of bytes to be filled.
  * Return: Pointer to the memory area @s.
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	s[i] = b;

	return (s);
}

