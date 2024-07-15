#include "main.h"
#include <stdlib.h>

/**
  * create_array - create array and initialize it with char c
  * @size: size of the array
  * @c: character to be stored
  * Return: pointer to address
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return ('\0');
	ptr = (char *)malloc(size * (sizeof(char)));
	if (ptr == NULL)
		return ('\0');
	for (i = 0; i < size; i++)
	{
		*(ptr + (i)) = c;
	}
	return (ptr);
}
