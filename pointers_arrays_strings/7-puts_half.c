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
	int length = strlen(str);
	int start_index = length % 2 == 0 ? length / 2 : (length + 1) / 2;

	for (int i = start_index; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}	
