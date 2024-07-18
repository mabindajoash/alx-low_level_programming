#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * _calloc - allocates memory for an array using malloc
  * @nmemb: number of elements
  * @size: size of each element
  * Return: newly allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (!s)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		((char *)s)[i] = 0;
	return (s);
}
