#include "lists.h"
/**
  * print_list - prints all the elements of a list_t list.
  * @h: pointer to list to print
  * Return: Number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{	
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
	else
	{
		printf("[0] (nil)\n");
	}
	h = h->nex;
	count++;
	}
	return (count);
}	
