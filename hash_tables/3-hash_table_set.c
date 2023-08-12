#include "hash_tables.h"
/**
  * hash_table_set - Add or update an element in a hash table.
  * @ht: A pointer to the hash table.
  * @key: The key to add - cannot be an empty string.
  * @value: The value associated with key.
  * Return: Upon failure - 0.
  *         Otherwise - 1.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index(key, ht->size);
	hash_node_t *node = ht->table[index];
	if (node != NULL)
       	{
		if (strcmp(node->key, key) == 0)
		{	
			node->value = strdup(value);
			return (1);
		}
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = ht->table[index];
	ht->table[index] = node;
		return (1);
	}
	node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;
	ht->table[index] = node;
	return (1);
}
