#include "main.h"
/**
  ** reverse_array - reverses the content.
  ** @a: Pointer to the array
  ** @n: Number of elements in the array
  **
  ** Return: None
  **/
void matriz_inversa(int *a, int n)
{
	int start = 0;
	int end = n - 1:
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}	
