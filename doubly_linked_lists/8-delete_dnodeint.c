#include "lists.h"
/**
  * delete_dnodeint_at_index - deletes the node at index of a
  * dlistint_t linked list
  *
  * @head: head of the list
  * @index: index of the new node
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	return (-1);
	if (current->prev != NULL)
	current->prev->next = current->next;

	if (current->next != NULL)
	current->next->prev = current->prev;

	if (index == 0)
	*head = current->next;
	free(current);
	return (1);
}
