#include <stdio.h>
/**
  ** main - prints the number of arguments passed into it.
  ** @argc: Argument counter
  ** @argv: Argument vector
  ** Return: Always 0
  **/
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}	
