#include "monty.h"
/**
 * add_dnodeint - adds a new node to beggining of dlinked list
 * @stack_ptr: pointer to top of dlinked list
 * @n: input data for new node
 *
 * Return: adress to new dnode added
 *
 * */
stack_t *add_dnodeint(stack_t **stack_ptr, const int n)
{
	stack_t *new_node;

	/* allocate memory to node */
	new_node = (stack_t *)malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;/* put in data*/
	/* make next of new node as head & prev as NULL */
	new_node->next = n;
	new_node->prev = NULL;

	/* change the prev of head node to new node */
	if ((*stack_ptr) != NULL)
		(*stack_ptr)->prev = new_node

	return (newnode);
}
