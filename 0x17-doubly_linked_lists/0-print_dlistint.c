#include "lists.h"
/**
  * print_dlistint - print elements of a list
  * @h: head of the list
  * Return: number of nodes
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
