#include "monty.h"

/**
 * push - pushes an element to the stack.
<<<<<<< HEAD
=======
 * @stack_t: pointer head
>>>>>>> efa737ec2152f6c52de165bf4c75c1034ac3c88e
 * @stack: double pointer to the head of the stack.
 * @line_number: number count in the command line of Monty file.
 * Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
stack_t *new_node;

	if (stack == NULL)
{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
}
new_node = malloc(sizeof(stack_t));

<<<<<<< HEAD
	if (new_node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

new_node->n = atoi(global_variable->argument);
new_node->prev = NULL;
new_node->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new_node;
		*stack = new_node;
}
=======
	if (new_node == NULL) 
{ 
    fprintf(stderr, "Error: malloc failed\n"); 
    exit(EXIT_FAILURE); 
} 
new_node->n = atoi(global_variable->argument); 
new_node->prev = NULL; 
new_node->next = *stack;

	if (*stack != NULL) 
    (*stack)->prev = new_node; 
*stack = new_node; 
} 
>>>>>>> efa737ec2152f6c52de165bf4c75c1034ac3c88e
