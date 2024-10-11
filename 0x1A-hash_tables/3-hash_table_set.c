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
	hash_node_t *current_item;
	int i = 0;

	if (key == NULL)
		return (-1);
	item = malloc(sizeof(hash_node_t));
	if (item == NULL)
		return (-1);
	item->key = malloc(sizeof(char*) * strlen(key) + 1);
	if (!item->key)
	{
		free(item);
		return (-1);
	}
	strcpy(item->key, key);
	item->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!item->value)
	{
		free(item);
		free(key);
		return (-1);
	}
	strcpy(item->value, value);
	index = key_index(key)
	current_item = item[index];
}
