#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
  * struct list - struct list
  * @n: integer variable
  * @next: pointer variable
  */
typedef struct list
{
	int n;
	struct list *next;
} listint_t;
size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);







#endif
