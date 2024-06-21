#include <stdlib.h>
#include <stdio.h>

/**
 *  main - print all single digits, upto base 10
 *  Return: 0 value always
 */
int main(void)
{
	int d;

	for (d = 0; d < 10; d++)
	putchar(d % 10 + '0');
	putchar('\n');
	return (0);
}
