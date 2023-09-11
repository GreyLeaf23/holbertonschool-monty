#include "monty.h"

/**
 * swap - swaps the top two elements of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: number count in the command line for Monty file.
 */

void swap(stack_t **stack, unsigned int line_number)
{
    if (*stack == NULL || (*stack)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }
    stack_t *temp = (*stack)->next;
    (*stack)->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = *stack;

    temp->prev = NULL;
    temp->next = *stack;
    (*stack)->prev = temp;
    *stack = temp;
<<<<<<< HEAD
}
=======
}
>>>>>>> efa737ec2152f6c52de165bf4c75c1034ac3c88e
