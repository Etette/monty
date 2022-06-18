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
 * pall - prints all the values on the stack, starting from the top of the stack.
 * @stack_ptr: pointer to dlinkedlist
 * @count: line number
 */
void pall(stack_t **stack_ptr, unsigned int count __attribute__((unused)))
{
	print_dlistint(*stack_ptr);
}