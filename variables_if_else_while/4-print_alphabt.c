#include <stdio.h>
/**
  * main - Print all the letters except q and e
  * Return: Always 0.
  **/
int main(void)
{
		
	char letra = 'a';

	while (letra <= 'z')
	{
		if (letra != 'q' && letra != 'e')
		{
			putchar(letra);
		}

		letra++;
	}
	putchar('\n');
	return (0);
}

