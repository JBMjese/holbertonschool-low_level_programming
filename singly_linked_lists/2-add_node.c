#include "lists.h"
/**
  * add_node - function that adds a new node at the beginning of a list_t list.
  * @str: pointer to list
  * Return: the address of the new element.
  */
list_t *add_node(list_t **head, const char *str)
{
	 list_t *new_node = malloc(sizeof(list_t));
 	 new_node->str = strdup(str);
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
