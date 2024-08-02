#include "lists.h"
/**
  * my_first - print string before the main function executes
  * Return: void
  */
void __attribute__((constructor)) function()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
