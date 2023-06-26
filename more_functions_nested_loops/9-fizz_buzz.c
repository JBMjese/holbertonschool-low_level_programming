#include <stdio.h>
/**
 * main - Print numbers from 1 to 100, for multipliers of three print Fizz,
 *        for multiples of five print Buzz, for numbers that are multiples
 *        of three and five, print FizzBuzz.
 * Return: Always 0.
 */
int main(void)

{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		else if ((num % 3) == 0)
			printf("Fizz");
		else if ((num % 5) == 0)
			printf("Buzz");
		else
			printf("%d", num);
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
