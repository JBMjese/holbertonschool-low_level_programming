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
	int Cdest;
	int Csrc;
	int Cfdest;
	int i;

	Cdest = strlen(dest);
	Csrc = strlen(src);
	Cfdest = Cdest + Csrc;
	i = 0;
	while (Cdest <= Cfdest)
	{
		*(dest + Cdest) = *(src + i);
		Cdest++;
		i++;
	}
	return (dest);
}	
