#include <stdio.h>
/**
  *main - no arguments
  *Return: 0 value
  */
int main(void)
{
	int (i);
	int (n);

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (n = 'A'; n <= 'Z'; n++)
		putchar (n);
	putchar ('\n');
	return (0);
}
