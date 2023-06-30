#include "main.h"
#include <stdio.h>
/**
  ** _atoi - convert a string to an integer.
  ** @s: Pointer to string to translate
  ** Return: Int from string
 **/
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == ' ')
	{
		s++;
	}
	if (*s == '-' || *s == '+')
	{
		sign= (*s == '-') ? -1 : 1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		if (result > INT_MAX / 10 || (result == INT_MAX / 10 && *s - '0' > INT_MAX % 10))
	
		{	return (sign == -1) ? INT_MIN : INT_MAX;	
		}
	result = resutt * 10 + (*s - '0');
	s++;
	}
	return sign * resul;
}		

