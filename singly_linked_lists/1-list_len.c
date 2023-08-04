#include "lists.h"
/**
  * list_len - function that returns the number of elements.
  * @h: pointer to list
  * Return: Number of elements
  **/
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{	
		count++;
		temp = temp->next;
	}
	return (count);
}
