#include "main.h"
#include <stdio.h>
/**
  ** swap_int - the values of two integers.
  **@a : The first integer to exchange
  **@b : The second integer to exchange
  **/
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}
