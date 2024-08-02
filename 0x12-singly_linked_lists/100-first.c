#include "lists.h"
/**
  * my_first - print string before the main function executes
  * Return: void
  */
void __attribute__((constructor)) my_first()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
