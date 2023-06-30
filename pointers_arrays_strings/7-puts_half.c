#include "main.h"
#include <string.h>
/**
  ** puts_half - Prints half
  ** if the string length is odd, the center character will also print
  ** @str: pinter to string
  ** return: 0
  **/
void puts_half(char *str)
{
	int c;
	int n;
	int j;

	c = strlen(str);
	if (c % 2 == 0)
	n = c / 2;
	else
	n = (c + 1) / 2;
	for (j = n; j < c; j++)
	{
		_putchar(*(str + j));
	}
	_putchar('\n');
}
