#include <stdio.h>
#include <stdlib.h>
/**
  ** main - adds positive numbers.
  ** @argc: Argument counter
  ** @argv: Argument vector
  ** Return: Always 0
  **/
int main(int argc, char *argv[])
{
	int i;
	int j;
	int sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; *(argv[i] + j) != '\0'; j++)
			{
				if (*(argv[i] + j) >= 48 && *(argv[i] + j) <= 57)
				continue;
				else
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
