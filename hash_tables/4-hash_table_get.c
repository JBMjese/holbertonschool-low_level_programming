#include "hash_tables.h"
/**
  * hash_table_get - Retrieve the value associated with
  *                  a key in a hash table.
  * @ht: A pointer to the hash table.
  * @key: The key to get the value of.
  * Return: If the key cannot be matched - NULL.
  *         Otherwise - the value associated with key in ht.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index(key, ht->size);

	hash_node_t *node = ht->table[index];
	 if (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			return (node->value);
		}
	}
}	 
