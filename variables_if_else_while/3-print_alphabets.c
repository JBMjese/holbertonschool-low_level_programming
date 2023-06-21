#include <stdio.h>
/**
  * main - The alphabet game
  * Return: Always 0.
  **/
int main(void)
{

	char letra = 'a';

	while (letra <= 'z')
	{
	putchar(letra);
	letra++;
	}
	letra= 'A';
	while (letra <= 'Z')
	{
	putchar(letra);
	letra++;
	}
	putchar('\n');
	return (0);
}
