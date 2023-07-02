#include "main.h"
#include <string.h>
/**
  ** _strncpy - Copy a string
  ** @dest: pointer to target string
  ** @src: pointer to source string
  ** @n: Bytes from src
  ** Return: Pointer to resulting string dest
  **/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
