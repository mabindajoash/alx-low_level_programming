#include "main.h"
/**
  * clear_bit - set value of a bit to 0
  * @n: value to be set
  * @index: position to be set
  * Return: int
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit;

	bit = sizeof(*n) *  8;
	if (index >= bit)
		return (-1);
	*n = *n & ~(1 << index);
	return (0);
}
