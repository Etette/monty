#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

size_t getline(char **lineptr, size_t *n, FILE *stream);
void pall(stack_t **stack_ptr, unsigned int count __attribute__((unused)));
size_t print_dlistint(const stack_t *stack_ptr);
int delete_dnodeint(stack_t **stack_ptr);
stack_t *add_dnodeint(stack_t **stack_ptr, const int n);
void push(stack_t **stack_ptr, char *arg_data, unsigned int count);
void opcode(stack_t **stack_ptr, char *line, unsigned int count);
void free_stack(stack_t *stack_ptr);
#endif
