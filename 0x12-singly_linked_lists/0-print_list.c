#include "lists.h"

/**
  * print_list - print data in the lists
  * @h: the pointer pointing to the first node
  * Return: Number of nodes
  */
size_t print_list(const list_t *h)
{
	unsigned int counter = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else if (strcmp(h->str, "") == 0)
			printf("[0]\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
