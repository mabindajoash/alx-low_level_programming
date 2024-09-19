#include "lists.h"
/**
  * insert_dnodeint_at_index - add a new node at a given position
  * @h: head of the list
  * @idx: index to be added
  * @n: data to be added
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *temp1;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*h == NULL)
	{
		*h = new_node;
	}

	temp = *h;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			temp1 = temp;
		}
		if (count == idx)
		{
			new_node->prev = temp->prev;
			new_node->next = temp;
			temp->prev = new_node;
			temp1 = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
