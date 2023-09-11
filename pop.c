#include "monty.h"
/**
 * pop - removes the top element of the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: number count in the command line for Monty file.
 */

void pop(stack_t **stack, unsigned int line_number)
{
    if (stack == NULL || (*stack) == NULL)/*Error Check*/
    {
        fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
        exit(EXIT_FAILURE);
    }

    stack_t *temp = *stack; /*Store the top node in the temp variable*/
    *stack = (*stack)->next;/*Move head of the stack to the next node*/

    if (*stack != NULL)
        (*stack)->prev = NULL;/*Prev pointer as the start.*/

    free(temp);
}
