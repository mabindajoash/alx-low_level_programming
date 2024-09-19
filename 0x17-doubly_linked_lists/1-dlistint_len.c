#include "lists.h"
/**
  * dlistint_len - calculate the number of elements in a list
  * @h: head of the list
  * Return: number of elements
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
