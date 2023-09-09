#include "monty.h"

/**
 * push - pushes an element to the stack.
 * @stack: double pointer to the head of the stack.
 * @line_number: number count in the command line of Monty file.
 */

typedef struct stack {
    int data;
    struct stack* next;
} stack_t;

stack_t* push(stack_t* stack, int value) {
    stack_t* new_node = malloc(sizeof(stack_t));
    if (new_node == NULL) {
        fprintf(stderr, "Error: malloc failed\n");
        exit(EXIT_FAILURE);
    }
    new_node->data = value;
    new_node->next = stack;
    return new_node;
}

void pall(stack_t* stack) {
    while (stack != NULL) {
        printf("%d\n", stack->data);
        stack = stack->next;
    }
}

int main() {
    stack_t* stack = NULL;

    // Ejemplo de uso
    stack = push(stack, 1);
    stack = push(stack, 2);
    stack = push(stack, 3);

    pall(stack);

    return 0;
}
