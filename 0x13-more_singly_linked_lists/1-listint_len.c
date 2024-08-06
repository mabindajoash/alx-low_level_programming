#include "lists.h"
/**
  * listint_len - calculates the number of elements
  * @h: pointer to the first element of the list
  * Return: Number of elements
  */
size_t listint_len(const listint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
