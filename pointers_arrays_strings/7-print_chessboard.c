#include "main.h"
#include <stdio.h>
/**
  * print_chessboard - prints the chessboard
  * @a:2D array representing the chessboard
  */
void print_chessboard(char (*a)[8])
{
	int i, j;

	printf("  0 1 2 3 4 5 6 7\n");
	for (i = 0; i < 8; i++)
	{
		printf("%d ", i);
		for (j = 0; j < 8; j++)
		{
			printf("%c ", a[i][j]);
		}
		printf("\n");
	}
}

