#include "lists.h"
/**
  * free_dlistint - free a list
  * @head: head of the list
  * Return: 0
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
