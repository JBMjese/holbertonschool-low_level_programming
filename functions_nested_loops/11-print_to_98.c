#include <stdio.h>
/**
 * print_to_98 - Printf to 98.
 * @n: The number to begin counting at.
 **/
void print_to_98(int n)

{
	if (n >= 98)
	{
		for (; n > 98; n--)
		printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (; n < 98; n++)
		printf("%d, ", n);
		printf("%d\n", n);
	}
}
