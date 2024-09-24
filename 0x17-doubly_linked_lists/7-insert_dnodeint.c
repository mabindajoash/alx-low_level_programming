#include "lists.h"
/**
  * insert_dnodeint_at_index - add a new node at a given position
  * @h: head of the list
  * @idx: index to be added
  * @n: data to be added
  * Return: address of the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;
	dlistint_t *new_node;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	temp = *h;
	while (temp != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = temp->next;
			new_node->prev = temp;
			if (temp->next != NULL)
			{
				temp->next->prev = new_node;
			}
			temp->next = new_node;
			return (new_node);
		}
		count++;
		temp = temp->next;
	}
	free(new_node);
	return (NULL);
}
