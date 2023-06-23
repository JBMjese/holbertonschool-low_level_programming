#include "main.h"
/**
 *_islower - lowercase character
 *@c: The character to be checked.
 *Return: 1 if character is lowercase, 0 otherwise.
 **/
int _isalpha(int c)

{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
