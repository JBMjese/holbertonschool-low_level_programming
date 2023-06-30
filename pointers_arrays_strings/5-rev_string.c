#include "main.h"
#include <string.h>
/**
  ** rev_string - invert a string
  ** @s: pointer to string
  ** return: 0
  **/
void rev_string(char *s)
{
	int length = strlen(s);
	char *start = s;
	char *end = s + length - 1;

	while (start < end)
		{
			char temp = *start;
			*start = *end;
			*end = temp;
			start++;
			end--;
		}
}
