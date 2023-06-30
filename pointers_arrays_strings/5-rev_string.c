#include "main.h"
#include <string.h>
/**
  ** rev_string - invert a string without printing a new one
  ** @s: pointer to string
  ** return: 0
  **/
void rev_string(char *s)

{
	if (s == NULL)
	{
		return;
	}
	char *star = s;
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;
	while (start < end)
	{
		char f = *start;
		*start = *end;
		*end = f;
		start++;
		end--;
	}
}	
