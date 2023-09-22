#include "monty.h"
/**
 * pint - prints the value at the top of the stack.
 * @stack: pointer to the head of the stack.
 * @line_number: number count in the command line for Monty file.
 */

void pint(stack_t **stack, unsigned int line_number)
{
if (*stack == NULL || (*stack) == NULL)/*Error Check*/
{
fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
exit(EXIT_FAILURE);
}

printf("%d\n", (*stack)->n); /*Print the value at the top*/
}
