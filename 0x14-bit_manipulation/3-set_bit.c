#include "main.h"
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @n: Value to be passed
  * @index: the index to be set
  * Return: 1 if it worked and -1 if not
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(n) * 8;
	if (index >= bit)
		return (-1);
	*n = *n | (1UL << index);
	return (1);
}
