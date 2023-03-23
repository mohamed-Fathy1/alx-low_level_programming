#include "3-calc.h"
#include <stdio.h>
#include <string.h>
#include "function_pointers.h"
/**
 * get_op_func - function
 * @s: input
 * Return: pointer yo func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	unsigned int i = 0;

	while (i < strlen((char *)ops) - 1)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
