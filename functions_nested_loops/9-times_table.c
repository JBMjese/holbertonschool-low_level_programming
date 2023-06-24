#include "main.h"
/**
 * times_table - Prints the 9 times table
 **/
void times_table(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		int result = 9 * i;
		printf("9 x %2d = %2d\n", i, result);
	}
}	
