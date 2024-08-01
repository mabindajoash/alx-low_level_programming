#include "lists.h"

/**
  * print_list - print data in the lists
  * @h: the pointer pointing to the first node
  * Return: Number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	while(h->next != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
			return (0);
		}
		else
		{
			printf("[%d] [%s]", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
