#include "monty.h"

/**
 * pstr - prints string starting from top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pstr(stack_t **stack_ptr, unsigned int count)
{
	stack_t *tmp;
	tmp = *stack_ptr;
	(void)(count);

	if (stack_ptr != NULL)
	{
		while (tmp != NULL && tmp->n > 0 && tmp->n < 127)
		{
			printf("%c", tmp->n);
			tmp = tmp->next;
		}
	}
	putchar('\n');
}

/**
 * pchar - prints char at top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pchar(stack_t **stack_ptr, unsigned int count)
{
	int num;
	num = (*stack_ptr)->n;

	if (stack_ptr == NULL)
	{
		printf("L%d: can't pchar, stack empty", count);
		exit(EXIT_FAILURE);
	}
	else if (num >= 0 && num <= 127)
	{
		print_dlistheadch(*stack_ptr, count);
		return;
	}
	printf("L%d: can't pchar, value out of range", count);
	exit(EXIT_FAILURE);
}

/**
 * pall - prints all the values on the stack, starting from the top of the stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pall(stack_t **stack_ptr, unsigned int count __attribute__((unused)))
{
	if (stack_ptr != NULL)
		print_dlistint(*stack_ptr);
	return;
}

/**
 * pall - prints top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pint(stack_t **stack_ptr, unsigned int count)
{
	print_dlisthead(*stack_ptr, count);
}