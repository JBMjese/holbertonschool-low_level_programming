#include "main.h"

/**
  ** leet - encodes a string into 1337 (LEET).
  ** @s: Pointer to string to encode
  ** Return: Pointer to encoded string
  **/
char *leet(char *s)
{
	char let[11] = {'a', 'A', 'e', 'E', 't', 'T', 'l', 'L', 'o', 'O'};
	char num[11] = {'4', '4', '3', '3', '7', '7', '1', '1', '0', '0'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; let[j] != '\0'; j++)
		{
			if (s[i] == let[j])
			{
				s[i] = num[j];
				break;
			}
		}
	}
	return (s);
}
