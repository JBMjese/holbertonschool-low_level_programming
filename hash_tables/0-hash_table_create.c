#include "hash_tables.h"
/**
  * hash_table_create - Creates a hash table.
  * @size: The size of the array.
  * Return: If an error occurs - NULL.
  *         Otherwise - a pointer to the new hash table.
  */
hash_table_t *hash_table_create(unsigned long int size) 
{
hash_table_t *hash_table = malloc(sizeof(hash_table_t));

	if (hash_table == NULL)
       	{
		return (NULL);
	}
	hash_table->table = malloc(sizeof(hash_table_node_t *) * size);

	if (hash_table->table == NULL) 
	{
		free(hash_table);
	return (NULL);
	}
	for (unsigned long int i = 0; i < size; i++) 
	{
		hash_table->table[i] = NULL;
	}
	hash_table->size = size;
	return (hash_table);
}
