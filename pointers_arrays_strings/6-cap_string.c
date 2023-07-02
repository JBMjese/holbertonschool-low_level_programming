#include "main.h"
/**
  ** cap_string - capitalizes all words of a string.
  ** @s: String to modify
  ** Return: Pointer to modify string
  **/
char *cap_string(char *s)
{
	char sp[14] = {' ', '\t', '\n', ',', ';', '.',
	'!', '?', '"', '(', ')', '{', '}'};
	int i;
	int j;

	i = 0;
	j = 0;
	if (i == 0 && *(s + i) >= 97 && *(s + i) <= 122)
	*(s + i) = *(s + i) - 32;
	while (*(s + i) != '\0')
	{
		while (*(sp + j) != '\0')
		{
			if (*(s + i) == *(sp + j))
			{
				if (*(s + (i + 1)) >= 97 && *(s + (i + 1)) <= 122)
				*(s + (i + 1)) = *(s + (i + 1)) - 32;
			}
			j++;
		}
		i++;
		j = 0;
	}
	return (s);
}
