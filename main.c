#include "monty.h"
/**
 * main - entry point
 * @argv: argument vector
 * @argc: argument counter
 * 
 * Return: Nothing
 */
int main(int argc, char *argv[])
{
        FILE *fp;
        char *line = NULL;
        size_t len = 0;
	stack_t *stack_ptr = NULL;
	unsigned int count = 1;
        ssize_t read;

        if (argc != 2)
        {
                fprintf(stderr, "USAGE: monty file\n");
                exit(EXIT_FAILURE);
        }

        fp = fopen(argv[1], "r");

        if (fp == NULL)
        {
		fprintf(stderr, "Error: Can't open file %s\n", argv[0]);
                exit(EXIT_FAILURE);
        }

        while ((read = _getline(&line, &len, fp)) != -1)
        {
                if (*line == '\n')
		{
			count++;
			continue;
		}
		opcode(&stack_ptr, line, count);
		count++;
        }
        free(line);
        fclose(fp);
	free_stack(stack_ptr);
        exit(EXIT_SUCCESS);
}
