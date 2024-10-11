#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table
  * @size: size of the hashtable
  * Return: pointer to a newly created hash table
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
	if (table->array == NULL)
		return (NULL);
	return (table);
}
