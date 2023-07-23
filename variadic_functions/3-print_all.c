#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

/**
  * print_all - prints anything.
  * @format: a list of types of arguments passed to the function.
  *
  * Return: no return.
  */
void print_all(const char * const format, ...)
{
	va_list vt;
	unsigned int i = 0, j, c = 0;
	char *jbm;
	const char t_arg[] = "cifs";

	va_start(vt, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
			case 'c':
			printf("%c", va_arg(vt, int)), c = 1;
			break;
			case 'i':
			printf("%d", va_arg(vt, int)), c = 1;
			break;
			case 'f':
			printf("%f", va_arg(vt, double)), c = 1;
			break;
			case 's':
			str = va_arg(vt, char *), c = 1;
			if (!jbm)
			{
				printf("(nil)");
				break;
			}
			printf("%s", jbm);
			break;
		} i++;
	}
	printf("\n"), va_end(vt);
}
