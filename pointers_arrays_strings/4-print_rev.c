#include "main.h"
#include <string.h>
/**
  ** print_rev - reverses
  **@s: pointer to reverses
  **return: 0
  **/
void print_rev(char *s)
{
	int c;

	c = strlen(s) - 1;
	for (; c >= 0; c = c - 1)
	{
		_putchar (*(s + c));
	}
	_putchar ('\n');
}
