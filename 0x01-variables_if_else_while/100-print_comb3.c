#include <stdio.h>
/**
  *main - takes no argument
  *Return: 0 value
  */
int main(void)
{
	int (i);
	int (n);

	for (i = 0; i < 10; i++)
	{
		for (n = 0; n < 10; n++)
		{
			putchar('0' + i);
			putchar('0' + n);
			if ((i * 10 + n) < 99)
			{
				putchar (',');
				putchar(' ');
			}
		}
		putchar ('\n');
	}
	return (0);
}
