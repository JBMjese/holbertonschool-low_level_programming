#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
  * print_strings - prints strings.
  * @separator: string.
  * @n: number of strings.
  *
  * Return: no return.
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vt;
	unsigned int i;
	char *sr;

	va_start(vt, n);
	for (i = 0; i < n; i++)
	{
		sr = va_arg(vt, char *);
		if (sr)
		printf("%s", sr);
		else
		printf("(nil)");
		if (i < n - 1)
		if (separator)													printf("%s", separator);
	}
	printf("\n");
	va_end(vt);
}
