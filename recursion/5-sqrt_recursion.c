#include "main.h"
/**
  * _root - Auxiliar function sqrt_recursion
  * @n: Number to find square root
  * @i: Possible square root
  * Return: i if is the exact root, -1 in other case
  */
int _root(int n, int i)
{
	if (i * i == n)
	return (i);
	else if (i < n)
	return (_root(n, i + 1));
	else
	return (-1);
}

/**
  * _sqrt_recursion - square root of a number.
  * @n: Number to be evaluated
  * Return: Square root of n, or -1 if n has no natural square root
  */

int _sqrt_recursion(int n)
{
	int i;

	i = 0;
	return (_root(n, i));
}
