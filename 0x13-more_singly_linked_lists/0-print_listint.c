#include "lists.h"
/**
  * print_listint - print elements of a list
  * @h: head of a list
  * Return: Number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
	{
		printf("0\n");
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
