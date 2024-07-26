#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
#include <string.h>
/**
  * get_op_func - select function to perform operation
  * @s: operator passed as argument to the function
  * Return : function pointer
  */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}
