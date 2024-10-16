#include "hash_tables.h"
/**
  * hash_table_get - retrieves a value associated with a key
  * @ht: Hash table
  * @key: Key
  * Return: value associated with the key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;

	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		return (ht->array[index]->value);
	}
	while (ht->array[index] != NULL)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			return (ht->array[index]->value);
		ht->array[index] = ht->array[index]->next;
	}
	return (NULL);
}
