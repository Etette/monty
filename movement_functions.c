#include "monty.h"

void rotl(stack_t **stack_ptr, unsigned int count)
{
    stack_t *tmp, *node;
    node = *stack_ptr;
    tmp = (*stack_ptr);
    (void)(count);
    if (stack_ptr != NULL && (*stack_ptr)->next != NULL)
    {
        while(tmp)
            tmp = tmp->next;
        printf("%d\n", tmp->n);
        pop(stack_ptr, count);
        printf("TEST\n");
        printf("%d\n", tmp->n);
        node->next = NULL;
        tmp->next = node;
        node->prev = tmp;
        printf("%d\n", tmp->n);
        printf("TEST-2\n");
    }
    return;
}