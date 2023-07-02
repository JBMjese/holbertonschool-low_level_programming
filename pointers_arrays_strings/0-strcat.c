#include "main.h"
#include <string.h>
/**
  ** _strcat - Concatenates two strings
  ** @dest: Pointer to target string
  ** @src: Pointer to source string
  ** Return: pointer to the resulting string dest
  **/
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;
	
	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src:
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}	
