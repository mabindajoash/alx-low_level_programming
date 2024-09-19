#include "lists.h"
/**
  * sum_dlistint - calculate sum of all the data
  * @head: head of the list
  * Return: sum
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
