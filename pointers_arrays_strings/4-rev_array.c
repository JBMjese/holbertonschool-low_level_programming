#include "main.h"
/**
  ** reverse_array - reverses the content.
  ** @a: Pointer to the array
  ** @n: Number of elements in the array
  ** Return:Always 0
  **/
void matriz_inversa(int *a, int n)
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
