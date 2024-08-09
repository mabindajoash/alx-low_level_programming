#include "main.h"
/**
  * binary_to_uint - convert a binary number to an unsigned int
  * @b: string of zeros and ones
  * Return: the converted number
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	unsigned int len = 0;
	unsigned int sum = 0;
	unsigned int a;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (i = 0; i < len; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		a = b[i] - '0';
		if (a == 1)
			sum += a << (len - 1 - i);
	}
	return (sum);
}
