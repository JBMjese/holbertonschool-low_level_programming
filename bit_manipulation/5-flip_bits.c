#include "main.h"
/**
  * flip_bits - flip bits to convert one number to another number
  * @n: first number
  * @m: second number to convert to
  * Return: number of bits that was needed to flip
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;

	while (n != m)
	{
		count += (n ^ m) & 1;
		n >>= 1;
		m >>= 1;
	}
	return (count);
}
