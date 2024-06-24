#include <stdio.h>
/**
  *main - entry point, takes no argument
  *Return: no return value
  */
int main(void)
{
	int (i);

	for (i = 0; i < 10; i++)
		putchar('0' + i);
	putchar ('\n');
	return (0);
}
