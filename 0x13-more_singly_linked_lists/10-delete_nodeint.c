#include "lists.h"
/**
  * delete_nodeint_at_index - delete node
  * @head: head of the list
  * @index: index of the node
  * Return: 1 if succeeded
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *temp1;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	for (i = 0; i < (index - 1) && temp != NULL; i++)
	{
		temp = temp->next;
	}
	if (temp == NULL || temp->next == NULL)
		return (-1);
	temp1 = temp->next;
	temp->next = temp1->next;
	free(temp1);
	return (1);
}
