#include "main.h"
/**
  * prm - Auxiliar function for is_prime
  * @n:  number to check if is prime
  * @i: auxiliar number
  * Return: i if is a divisor of n
  */
int prm(int n, int i)
{
	if (i * i > n)
	{	
		return (1);
	}	
	if (n % i == 0)
	{	
		return (0);
	}	
}
/**
  * is_prime_number - returns 1 if the input integer is a prime number,
  * otherwise return 0
  * @n: number
  * * Return: 1 if is prime, 0 otherwise
  */
int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
	return (0);
	else
	return (prm(n, i));
}
