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
	char *cop;
	unsigned int len;
	list_t *ret;

	ret = (list_t *)malloc(sizeof(list_t));
	if (ret == NULL)
	return (NULL);
	len = strlen(str);
	cop = strdup(str);
	if (cop == NULL)
	{
		free(ret);
		return (NULL);
	}
	ret->str = cop;
	ret->len = len;
	ret->next = *head;
	*head = ret;
	return (ret);
}
