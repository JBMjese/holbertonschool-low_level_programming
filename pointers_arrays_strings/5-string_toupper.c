#include "main.h"
/**
  * string_toupper - Converts all lowercase letters in a string to uppercase.
  * @str: Pointer to the string to convert.
  * Return: Pointer to the resulting string.
  */
char *string_toupper(char *str)
{
	char *ptr = str;

	if (str == NULL)
	return NULL;
	
	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		*ptr = *ptr - 32;

		ptr++;
	}
	return (str);
}	
