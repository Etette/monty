#include "monty.h"

/**
 * push - add an element to the stack/queue
 * @stack_ptr: pointer to dlinked list 
 * @arg_data: data of node to be pushed
 * @count: line number
 */
void push(stack_t **stack_ptr, char *arg_data, unsigned int count)
{
	stack_t *node;

	if (arg_data == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		free(*stack_ptr);
		*stack_ptr = NULL;
		exit(EXIT_FAILURE);
	};

	node = add_dnodeint(stack_ptr, atoi(arg_data));
	if (node == NULL)
	{
		puts("Error: malloc failed");
		free_stack(*stack_ptr);
		exit(EXIT_FAILURE);
	}
}

/**
 * pall - prints top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pop(stack_t **stack_ptr, unsigned int count)
{
	if (stack_ptr != NULL)
		delete_dnodeint(stack_ptr, count);
	else
	{
		printf("L%d: can't pop an empty stack", count);
		exit (EXIT_FAILURE);
	}
}

/**
 * pall - prints top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void swap(stack_t **stack_ptr, unsigned int count)
{
	int buff;

	if ((*stack_ptr) == NULL || (*stack_ptr)->next == NULL)
	{
		printf("L%d: can't swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	buff = (*stack_ptr)->n;
	(*stack_ptr)->n = (*stack_ptr)->next->n;
	(*stack_ptr)->next->n = buff;
}

/**
 * pall - prints top of stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void nop(stack_t **stack_ptr, unsigned int count)
{
	(void)stack_ptr;
	(void)count;
}



