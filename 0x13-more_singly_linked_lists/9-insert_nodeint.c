#include "lists.h"
/**
  * insert_nodeint_at_index - inserts a new node at a given position
  * @head: head of the list
  * @idx: index where the node should be added
  * @n: value to be added
  * Return: address of the new node
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	unsigned int i;
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	for (i = 0; i < (idx - 1) && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
