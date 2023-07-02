#include "main.h"
#include <string.h>
/**
  ** _strncat - concatenates two strings too.
  ** @src: pointer to source string
  ** @dest: pointer to target string
  ** @n: Bytes to take
  ** Return: pointer to the resulting string dest
  **/
char *_strncat(char *dest, char *src, int n)
{
	int lendest;
	int lensrc;
	int i;

	lendest = strlen(dest);
	lensrc = strlen(src);
	i = 0;
	while (i < n && i < lensrc)
	{
		*(dest + lendest) = *(src + i);
		lendest++;
		i++;
	}
	return (dest);
}
