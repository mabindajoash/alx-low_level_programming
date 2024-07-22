#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  * free_dog - function to free dogs
  * @d: memory to be freed
  * Return: void
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
}
