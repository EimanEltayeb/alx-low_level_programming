#include "3-calc.h"
/**
 * (*get_op_func(char *s)) - function
 * @int: i
 * @int: g
 * Return: int
 */
int (*get_op_func(char *s))(int num1, int num2)
{
	op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
	int i = 0;

	while (!(strcmp((ops[i].op), s)))
	{
		i++;
		if (ops[i].op == NULL)
			return (NULL);
	}
	get_op_func(*s) = ops[i];

	return (get_op_func(num1, num2));
}
