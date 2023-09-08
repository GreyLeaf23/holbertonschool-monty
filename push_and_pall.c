#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: line number of the command in the Monty file.
 */

void push(stack_t **stack, unsigned int line_number)
{
stack_t *new_node;

if (stack == NULL)
{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
}

new_node = malloc (sizeof(stack_t));

if (new_node == NULL)
{
    fprintf(stderr, "Error: malloc failed\n");
    exit(EXIT_FAILURE);
}

new_node->n = atoi(global_variable->argument);
new_node->prev = NULL;
new_node->next = *stack

if (*stack != NULL)
    (*stack)->prev = new_node;

*stack = new_node;

}

/**
 * pint - prints the value at the top of the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: line number of the command in the Monty file.
 */

void pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current;

    (void)line_number;

    current = *stack
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}