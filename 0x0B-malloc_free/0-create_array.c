#include "main.h"

/**
  * create_array - create array and initialize it with char c
  * @size: size of the array
  * @c: character to be stored
  * Return: pointer to address
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int i;

	if (size == 0)
		return (1);
	ptr = (char *)malloc(size * size of(char));
	if (ptr == NULL)
		return (1);
	for (i = 0; i < size; i++)
	{
		*(ptr + (i)) = c;
	}
	return (ptr);
}
