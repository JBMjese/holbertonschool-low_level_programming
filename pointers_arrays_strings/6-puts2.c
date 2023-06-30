#include "main.h"
#include <string.h>
/**
  ** puts2 - prints every other character
  ** starting with the first character, followed by a new line
  ** @str: Pointer to string
  ** return: 0
  **/
void puts2(char *str)
{
	int c;
	int n;

	c = strlen(str) - 1;
	n = 0;
	while (n <= c)
	{
		if (n % 2 == 0)
		_putchar(*(str + n));
		n++;
	}
	_putchar('\n');
}
