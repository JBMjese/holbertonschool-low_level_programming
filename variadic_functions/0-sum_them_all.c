#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: Parameters
  * Return: Sum of all parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list vf;
	
	if (n == 0)
	return (0);
	va_start(vf, n);
	sum = 0;
	for (i = 0; i < n; i++)
	sum += va_arg(vf, int);
	va_end(vf);	
	return (sum);
}	
