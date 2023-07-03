#include "main.h"
/**
  * _strspn - Gets the length of a prefix substring.
  * @s: Pointer to the string to be scanned.
  * @accept: Pointer to the string containing the characters to match.
  * Return: Number of bytes of @s consisting only of bytes from @accept.
  */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int c;

	c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c += 1;
				break;
			}
		}
		if (accept[j] == '\0')
		break;
	}
	return (c);
}
