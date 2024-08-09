#include "main.h"
/**
  * flip_bits - flip
  * @n: value to be passed
  * @m: The second value to be passed
  * Return: number of bits flipped
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	unsigned long int d;

	d = n ^ m;
	while (d)
	{
		counter += d & 1;
		d >>= 1;
	}
	return (counter);
}
