#include "main.h"
/**
 *main - alphabet, in lowercase
 *Return: Always 0.
 **/
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
