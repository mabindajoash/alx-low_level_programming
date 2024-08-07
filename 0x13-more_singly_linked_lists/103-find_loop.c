#include "lists.h"
/**
  * find_listint_loop - find a loop in a linked list
  * @head: head of the list
  * Return: Address of the node where theloop starts
  */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (first != NULL && first->next != NULL)
	{
		slow = slow->next;
		fast = fast->next;
	if (slow == fast)
		slow = head;
	while (slow != fast)
	{
		slow = slow->next;
		fast = fast->next;
	}
	return (slow);
	}
	return (NULL);
	
}
