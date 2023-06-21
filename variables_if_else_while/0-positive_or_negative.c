#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - Positive anything is better than negative nothing
  * Return: Always 0.
  **/
int main(void)
{
		int n;

			srand(time(0));
				n = rand() - RAND_MAX / 2;
					/* your code goes there */
				        printf("%d\n ",n);
					if (n > 0)
					{
						    printf("the number is positive\n");
					}
					else if (n == 0)
					{
						    printf("the number is zero\n");
					}
					else
					{
						    printf("the number is negative\n");
					}
						return (0);
}
