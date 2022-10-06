#include "monty.h"
/**
 * pall - prints all the values on the stack, starting from the top stack
 * @stack: pointer to top of stack
 * @line_number: void argument
 */
void pall(stack_t **stack, unsigned int line_number)
{
stack_t *tmp;
(void) line_number;
for (tmp = *stack; tmp; tmp = tmp->next)
printf("%d\n", tmp->n);
}
