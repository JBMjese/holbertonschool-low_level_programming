#include "lists.h"
/**
  * list_len - function that returns the number of elements.
  * @h: pointer to list
  * Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
