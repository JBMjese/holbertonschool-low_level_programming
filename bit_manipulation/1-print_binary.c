#include "main.h"
/**
  * print_binary - prints the binary representation of a number.
  * @n: Number to print in binary
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
       	{
		return;
	}
	print_binary(n / 2);
	_putchar("%d", n % 2);
}
