#include <stdio.h>
/**
 *main -numbers of base 16 in lowercase
 *Return: Always 0.
 **/
int main(void)
{
	int h;

	for (h = 0; h < 16; h++)
	{
		if (h < 10)
	{
		putchar(h + '0');
	}
	else
	{
		putchar(h - 10 + 'a');
	}
	}
putchar('\n');

return (0);
}
