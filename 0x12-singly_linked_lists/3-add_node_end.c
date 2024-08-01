#include <lists.h>
/**
  * add_node_end - add a node at the end of a list
  * @head: pointer to the first node
  * @str: string to be duplicated
  * Return: a new pointer to the first node
  */
  
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int size = 0;
	car *last;

	while(str[size++])
		size++;
	if (str == NULL)
		return (NULL);
	new_node = (list_t*)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = size;
	new_node->next = NUL
	if (*head == NULL)
		*head = new_node;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new_node;
	}
	return (*head);
}

