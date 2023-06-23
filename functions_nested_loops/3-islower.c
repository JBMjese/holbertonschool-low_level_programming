#include "main.h"
/**
 *_islower - lowercase character
 *@a: The character to be checked.
 *Return: 1 if character is lowercase, 0 otherwise.
 **/
int _islower(int a)

{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
		else
	{
		return (0);
	}
}

