#include "lists.h"
/**
  * add_node - Add a new node at the beginning of the list
  * @head: pointer pointing at the next pointer in the first item of the list
  * @str: string to be copied
  * Return: The address of the new element
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = (list_t*)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (str == NULL)
		return (NULL);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
