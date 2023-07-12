#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
  * str_concat - concatenates two strings.
  * @st1: First string (Beginning)
  * @st2: Second string (Ending)
  * Return: Pointer to concatenated strings
  */
char *str_concat(char *st1, char *st2)
{
	int i;
	int len1;
	int len2;
	char *ret;

	len1 = 0;
	len2 = 0;
	if (st1 == NULL)
	st1 = "\0";
	if (st2 == NULL)
	st2 = "\0";
	for (i = 0; st1[i] != '\0'; i++)
	len1 += 1;
	for (i = 0; st2[i] != '\0'; i++)
	len2 += 1;
	ret = malloc(len1 + len2 + 1);
	if (ret == NULL)
	return (NULL);
	for (i = 0; i < len1; i++)
	ret[i] = st1[i];
	for (i = len1; i < (len1 + len2); i++)
	ret[i] = st2[i - len1];
	return (ret);
}
