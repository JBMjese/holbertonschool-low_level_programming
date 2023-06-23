#include "main.h"
/**
 *main - alphabet, in lowercase
 *Return: Always 0.
 **/
void printAlphabet(void)
{
	char letter;
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}	
_putchar('\n');
}
int main(void)
{
	printAlphabet();
	return (0);
}	
