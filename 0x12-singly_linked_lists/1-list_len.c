#include "lists.h"
/**
  * list_len - calculatesthe number of elements
  * @h: pointer to the first node
  * Return: number of elements
  */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
