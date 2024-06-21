#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints lowercase alphabet, in reverse
 *  Return: 0 value always
 */
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
	printf("%c", i);
	printf("\n");
	return (0);
}
