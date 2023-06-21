#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - The last digit
  * Return: Always 0.
  **/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d\n", n, lastDigit);
	if (n > 5)
	{
	printf("%d and is greater than 5\n", n);
	}
	else if (n == 0)
	{
	printf("0 and is 0\n");
	}
	else if (n < 6)
	{
	printf("%d and is less than 6 and not 0\n", n);
	}
	return (0);
}
