#include "lists.h"
/**
  * free_listint2 - free list
  * @head: head of the list
  * Return: void
  */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
