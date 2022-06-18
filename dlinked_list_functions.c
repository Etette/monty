#include "monty.h"

stack_t *add_dnodeint(stack_t **stack_ptr, const int n)
{
        stack_t *new_node;

        /* allocate memory to node */
        new_node = (stack_t *)malloc(sizeof(stack_t));
        if (new_node == NULL)
                return (NULL);

        new_node->n = n;/* put in data*/
        new_node->prev = NULL;
        /* Check if the list is empty */
        if (*stack_ptr == NULL)
        {
            new_node->next = NULL;
            (*stack_ptr) = new_node;
            return (new_node);
        }
        /* change the prev of stack_ptr node to new node */
        (*stack_ptr)->prev = new_node;
        /* make next of new node as stack_ptr & prev as NULL */
        new_node->next = (*stack_ptr);
        new_node->prev = NULL;
        (*stack_ptr) = new_node;

        return (new_node);
}

int delete_dnodeint(stack_t **stack_ptr)
{
    stack_t *tmp;
    tmp = (*stack_ptr);
    if (*stack_ptr == NULL)
        return (-1);
    /* Move the head pointer to the next node */
    (*stack_ptr) = tmp->next;
    free(tmp);
    return (1);
}

size_t print_dlistint(const stack_t *stack_ptr)
{
    int i = 0;
    while(stack_ptr){
        printf("%d\n", stack_ptr->n);
        stack_ptr = stack_ptr->next;
        i++;
    }
    return (i);
}

void free_stack(stack_t *stack_ptr)
{
	stack_t *tmp;

	while (stack_ptr != NULL)
	{
		tmp = stack_ptr;
		stack_ptr = stack_ptr->next;
		free(tmp);
	}
}