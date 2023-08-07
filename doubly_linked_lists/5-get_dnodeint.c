#include "lists.h"
/**
  * get_dnodeint_at_index - returns the
  * nth node of a dlistint_t linked list
  *
  * @head: head of the list
  * @index: index of the nth node
  * Return: nth node
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	
	unsigned int i = 0;
	
	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	return (NULL);
	return (current);
}
