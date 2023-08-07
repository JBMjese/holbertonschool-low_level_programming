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
	unsigned int len;
	char cop;

	new_node = (list_t *)malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	len = sterlen(str);
	cop = strdup(str);
	if (cop == NULL)
	{
		free (new_node);
		return (NULL);
	}
		new_node->len = len; 	
		new_node->next = *head;
		new_node->str = cop;
    		*head = new_node;
	
	return (new_node);
}
