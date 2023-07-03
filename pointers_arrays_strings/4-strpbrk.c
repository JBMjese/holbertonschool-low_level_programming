#include "main.h"
#include <string.h>
/**
  * _strpbrk - Searches a string.
  * @s: Pointer to the string to be searched.
  * @accept: Pointer to the string containing the bytes to match.
  * Return: Pointer in @s that matches in @accept,
  *         or NULL if no match is found.
  */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		if (strchr(accept, *s))
		return (s);
		s++;
	}

	return (NULL);
}

