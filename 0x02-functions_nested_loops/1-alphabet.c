#include <stdio.h>
#include "main.h"

/**
  * print_alphabet - prints alphabet in lowercase followed by a new line
  * Return: void
  */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
