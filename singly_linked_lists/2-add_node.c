#include "lists.h"
#include <string.h>
/**
  * add_node - function that adds a new node at the beginning of a list_t list.
  * @str: pointer to list
  * @head: pointer to head of the linked list
  * Return: the address of the new element.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node; 

	new_nodo = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}		
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = *head;
    		*head = new_node;
	}
	return (new_node);
}	
