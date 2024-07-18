#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: size of the memory to be allocated
  * Return: 0
  */

void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);
	if (!s)
		exit(98);
	return (s);
}
