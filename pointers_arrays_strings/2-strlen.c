#include "main.h"
#include <stdio.h>
/**
  ** _strlen - Returns the length of a string.
  ** Return: 0
  **@s: Pointer
  **/
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
