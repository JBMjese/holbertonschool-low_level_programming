#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * print_numbers -  prints numbers.
  * @separator: String which separates numbers
  * @n: number of integers
  */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list fv;

	if (separator == NULL)
	separator = "\0";
	va_start(fv, n);
	if (n != 0)
	{
		for (i = 0; i < (n - 1); i++)
		printf("%d%s", va_arg(fv, int), separator);
		printf("%d\n", va_arg(fv, int));
	}
	else
	printf("\n");
	va_end(fv);
}
