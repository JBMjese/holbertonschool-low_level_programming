#include <stdio.h>
#define ABS(x) (((x) < 0) ? -(x) : (x))
/**
  * main - main function
  * Return: int (0 or 1)
  */
int main(void)
{
	int num = -5;
	printf(" %d is %d\n", num, ABS(num));
	return (0);
}
