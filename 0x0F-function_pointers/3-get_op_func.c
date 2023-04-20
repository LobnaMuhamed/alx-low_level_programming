#include "3-calc.h"
#include <stddef.h>
/**
 * get_op_func - a  function that selects the correct function 
 * @s: the operator passed as argument to the program
 * Return: return pointer
*/
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	while (*(ops[i].op) != *s)
	{
		i++;
		if (ops[i].op == NULL)
			return NULL;
	}
	return (ops[i].f);
}
