#include "main.h"
#include <stdio.h>
/**
  ** factorial - Returns the length of a string.
  ** Return: 0
  **@s: Pointer
  **/
int factorial(int n)
{
	if (n < 0 )
	return -1;
	else if (n == 0)
	return 1;
	else
	return (n * factorial(n -1));
}	
