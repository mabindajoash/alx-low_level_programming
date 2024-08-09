#include "main.h"
/**
  * get_bit - retrieve a bit at a given index
  * @n: number to be converted
  * @index: index of the value to be returned
  * Return: value of the bit at index index
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bits;

	bits = sizeof(n) * 8;
	if (index > bits)
		return (-1);
	return ((n >> index) & 1);
}
