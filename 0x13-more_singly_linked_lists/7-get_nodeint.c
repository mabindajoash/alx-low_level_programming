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
	unsigned int n = 0;
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		n++;
		temp = temp->next;
	}
	if (index > n)
		return (NULL);
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
	}
	return (head);
}
