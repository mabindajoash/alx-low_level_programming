#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * add_node_end - adds new node at end of a list
 * @head: pointer to head of list_t list
 * @str: string to be added
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	char *dup;
	list_t *new_node, *last;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	dup = strdup(str);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	for (len = 0; str[len];)
		len++;
	new_node->str = dup;
	new_node->len = len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}
