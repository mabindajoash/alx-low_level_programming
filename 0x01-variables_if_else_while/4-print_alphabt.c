#include <stdlib.h>
#include <stdio.h>

/**
 *  main - Print alphabet in lowercase, except q and e
 * Return: 0 value always
*/
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
