#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Prints numbers of base 16, in lowercase
 *  Return: 0 value always
 */
int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	putchar(num);
	for (num = 'a'; num <= 'f'; num++)
	putchar(num);
	putchar('\n');
	return (0);
}
