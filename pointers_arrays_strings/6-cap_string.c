#include "main.h"
/**
  * cap_string - capitalizes all words of a string.
  * @str: Pointer to the string to capitalize.
  * Return: Pointer to the resulting string.
  **/
 char *cap_string(char *str)
{
	char *ptr = str;
	int capitalize_next = 1;

	if (str == NULL)
	return NULL;

	while (*ptr != '\0')
	{
		if (capitalize_next && (*ptr >= 'a' && *ptr <= 'z'))
		*ptr = *ptr - 32;

		if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n' || *ptr == ',' ||
		*ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
		*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' ||
		*ptr == '}')
		capitalize_next = 1;
		else
		capitalize_next = 0;
		ptr++;
	}
	return str;
}

