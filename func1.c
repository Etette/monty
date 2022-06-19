#include "monty.h"

/**
 * opcode - finds the functions matching the opcode
 * @stack_ptr: pointer to dlinkedlist
 * @str: string to compare
 * @count: line counts
 * @arg_data: data following the function
 */
void opcode(stack_t **stack_ptr, char *line, unsigned int count)
{
	/*
	instruction_t op[] = {
		{"pall", pall},
		{"swap", _add},
		{"pop", pop},
		{"pint", pint},
		{"mod", _mod},
		{"mul", _mul},
		{"div", _div},
		{"sub", _sub},
		{"nop", nop},
		{"add", _add},
		{NULL, NULL}
	};*/
	instruction_t op[] = {
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", _add},
		{"nop", nop},
		{"sub", _sub},
		{"div", _div},
		{"mod", _mod},
		{"mul", _mul},
		{"#", nop},
		{"pchar", pchar},
		{"pstr", pstr},
		{"rotl", rotl},
		{NULL, NULL}
	};
	int i;
	char *str = NULL;
	char *arg_data;
	char delimit[] = " \t\r\n\f$";

	str = strtok(line, delimit);
	arg_data = strtok(NULL, delimit);
	if (str == NULL)
		return;
	if (strcmp(str, "push") == 0)
	{
		push(stack_ptr, arg_data, count);
		return;
	}
	for (i = 0; op[i].opcode; i++)
	{
		if (strcmp(op[i].opcode, str) == 0)
		{
			op[i].f(stack_ptr, count);
			return;
		}
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", count, str);
	exit(EXIT_FAILURE);
}
