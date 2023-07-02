#include "main.h"
#include <string.h>
/**
  ** _strcmp - Compare two strings
  ** @s1: Pointer to first string
  ** @s2: Pointer to second string
  * Return: Integer less than, equal to, or greater than zero if s1 is
  * found, respectively, to be less than, to match, or be greater
  * than s2.
  */ 
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
