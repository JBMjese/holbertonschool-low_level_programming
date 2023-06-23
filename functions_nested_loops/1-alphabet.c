#include "main.h"
/**
 *print_alphabet - alphabe in lowercase
 *Return: Always 0.
 **/
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');

}
