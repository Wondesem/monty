#include "monty.h"
#include <stdio.h>
#include <ctype.h>

/**
 * push - push an integer onto the stack
 * @stack: double pointer to the beginning of the stack
 * @line_number: script line number
 * Return: void
 */
void push(stack_t **stack, unsigned int line_number)
{
stack_t *node;
char *num;
num = strtok(NULL, DELIMS);
if (num == NULL)
{
printf("L%u: usage: push integer\n", line_number);
exit(EXIT_FAILURE);
}
node = malloc(sizeof(stack_t));
if (node == NULL)
{
printf("Error: malloc failed\n");
exit(EXIT_FAILURE);
}
node->n = atoi(num);
node->prev = NULL;
node->next = *stack;
if (*stack != NULL)
(*stack)->prev = node;
*stack = node;
}
