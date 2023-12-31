#include "main.h"
/**
  ** reverse_array - reverses the content.
  ** @a: array to reverse
  ** @n: number of elements of the array
  ** Return: Always 0
  **/
void reverse_array(int *a, int n)
{
	int c;
	int i;

	i = 0;
	c = 0;
	while (i <= n && n > 0)
	{
		c = *(a + i);
		*(a + i) = *(a + (n - 1));
		*(a + (n - 1)) = c;
		i++;
		n--;
	}
}
