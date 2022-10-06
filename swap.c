#include "monty.h"

/**
 * swap - swap top two elements of `stack'
 * @stack: double pointer to head of stack
 * @line_number: line number of current operation
 * Return: void
 */
void swap(stack_t **stack, unsigned int line_number)
{
stack_t *temp;
if (!stack || !(*stack) || !(*stack)->next)
{
printf("L%u: can't swap, stack too short\n", line_number);
exit(EXIT_FAILURE);
}
temp = (*stack)->next;
(*stack)->prev = temp;
(*stack)->next = temp->next;
temp->prev = NULL;
if (temp->next)
temp->next->prev = *stack;
temp->next = *stack;
*stack = temp;
}
