#include <stdio.h>
#include <stdlib.h>
/**
  * main - multiplies two numbers.
  * @argc: Argument counter
  * @argv: Argument vector
  * Return: Always 0
  **/
int main(int argc, char *argv[])
{
	int i;
	int mul;

	mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
		mul = mul * atoi(argv[i]);
		}
	printf("%d\n", mul);
	return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
