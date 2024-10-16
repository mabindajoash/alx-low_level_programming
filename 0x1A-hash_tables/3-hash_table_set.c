#include "hash_tables.h"
/**
  * hash_table_set - adds an element to the hash table
  * @ht: hash table to add
  * @key: key
  * @value: value
  * Return: 1 if succeeded 0 if not
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item;
	unsigned long index;

	if (key == NULL || ht == NULL)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (0);
	item->key = malloc(sizeof(char*) * strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (0);
	}
	strcpy(item->key, key);
	item->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!item->value)
	{
		free(item);
		free(item->key);
		return (0);
	}
	strcpy(item->value, value);
	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	item->next = ht->array[index];
	ht->array[index] = item;
	return (1);
}
