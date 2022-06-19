#include "monty.h"

/**
 * _mul - multiplies first and second element in stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void _mul(stack_t **stack_ptr, unsigned int count)
{
	int num1, num2, result;

	if ((*stack_ptr) == NULL || (*stack_ptr)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack_ptr)->n;
	num2 = (*stack_ptr)->next->n;
	result = num2 * num1;
	(*stack_ptr)->next->n = result;
	pop(stack_ptr, count);
}

/**
 * _mod - finds modulus of first and second element
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void _mod(stack_t **stack_ptr, unsigned int count)
{
	int num1, num2, result;
	stack_t *tmp;
	tmp = *stack_ptr;

	if (tmp->next == NULL)
	{
		printf("L%d: can't mod, stack too short", count);
		exit(EXIT_FAILURE);
	}
	num1 = tmp->n;
	num2 = tmp->next->n;
	result = num2 % num1;
	(*stack_ptr)->next->n = result;
	pop(stack_ptr, count);
}

/**
 * _add - adds first and second element in stack
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void _add(stack_t **stack_ptr, unsigned int count)
{
	int num1, num2, result;

	if ((*stack_ptr) == NULL || (*stack_ptr)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack_ptr)->n;
	num2 = (*stack_ptr)->next->n;
	result = num1 + num2;
	(*stack_ptr)->next->n = result;
	pop(stack_ptr, count);
}
/**
 * _div - divides second and first element in stack
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void _div(stack_t **stack_ptr, unsigned int count)
{
	int num1, num2, result;

	if ((*stack_ptr) == NULL || (*stack_ptr)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack_ptr)->n;
	num2 = (*stack_ptr)->next->n;
	result = num2 / num1;
	(*stack_ptr)->next->n = result;
	pop(stack_ptr, count);
}
/**
 * _sub -finds the difference first and second element in stack
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */

void _sub(stack_t **stack_ptr, unsigned int count)
{
	int num1, num2, result;

	if ((*stack_ptr) == NULL || (*stack_ptr)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	num1 = (*stack_ptr)->n;
	num2 = (*stack_ptr)->next->n;
	result = num2 - num1;
	(*stack_ptr)->next->n = result;
	pop(stack_ptr, count);
}