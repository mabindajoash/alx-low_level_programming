#include <stdio.h>
#include <stdlib.h>
/**
  * realloc - reallocates memory block
  * @ptr: pointer to the memory previously allocated
  * @old_size: size of the allocated size for ptr
  * @new_size: size of the new memory block
  * @Return: pointer to newly allocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *str;
	char *dest;
	char *src;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	str = malloc(new_size);
	if (str == NULL)
		return (NULL);
	src = (char *)ptr;
	dest = (char *)str;
	for (i = 0; i < old_size && i < new_size; i++)
		dest[i] = src[i];
	free(ptr);
	return (str);
}
