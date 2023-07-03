#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - imprime la suma de las dos diagonales de una matriz cuadrada
  * @a: matriz cuadrada de números enteros
  * @size: tamaño de la matriz
  */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
		sum2 += *(a + i * size + (size - 1 - i));
	}
	printf("Sum of main diagonal: %d\n", sum1);
	printf("Sum of secondary diagonal: %d\n", sum2);
}
