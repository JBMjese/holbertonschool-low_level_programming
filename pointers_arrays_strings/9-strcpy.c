#include <string.h>
/**
  ** _strcpy - copies the string
  ** null byte (\0)
  **@src: Pointer to dest
  **@dest: Pointer to destiny
  **Return: Pointer to dest
  **/
char *_strcpy(char *dest, char *src)
{
	int c;
	int i;

	c = strlen(src);
	for (i = 0; i <= c; i++)
	*(dest + i) = *(src + i);
	return (dest);
}
