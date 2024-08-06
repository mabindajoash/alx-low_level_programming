#include "lists.h"
/**
  * get_nodeint_at_index - get the nth node of the list
  * @head: head of the list
  * @index: index of the node
  * Return: nth node
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index || head == NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
