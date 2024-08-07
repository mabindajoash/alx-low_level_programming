#include "lists.h"
/**
  * add_nodeint - add a new node at the beginning of a list
  * @head: the head of the list
  * @n: input n;
  * Return: Adress of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
