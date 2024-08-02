#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>
/**
  * struct list - struct containing int, string and pointer data types
  * @str: string
  * @len: number
  * @next: pointer
  */
typedef struct list
{
	char *str;
	int len;
	struct list *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
void free_list(list_t *head);
list_t *add_node_end(list_t **head, const char *str);








#endif
