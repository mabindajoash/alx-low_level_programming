#include "lists.h"
/**
  * get_dnodeint_at_index - get the index of a node
  * @head: head of the list
  * @index: index of the node
  * Return: nth node of the list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = head;
	while (temp != NULL)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (NULL);
}
