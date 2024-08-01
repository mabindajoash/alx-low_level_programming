#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/**
  * struct lists - struct containing int, string and pointer data types
  * @str: string
  * @num: number
  * @pt: pointer
  */
typedef struct list{
	char *str;
	int len;
	struct list *next;
}list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);











#endif
