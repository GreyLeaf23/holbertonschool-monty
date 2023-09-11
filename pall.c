#include "monty.h"

/**
 * pall - prints all the values on the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: number count in the command line of Monty file.
 */

void pall(stack_t **stack, unsigned int line_number)
{
<<<<<<< HEAD
stack_t *current;

(void)line_number;

current = *stack;
while (current != NULL)
{
	printf("%d\n", current->n);
	current = current->next;
}
=======
    stack_t *current;

    (void)line_number;

    current = *stack;
    while (current != NULL)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
>>>>>>> efa737ec2152f6c52de165bf4c75c1034ac3c88e
}
