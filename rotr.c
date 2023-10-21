#include "monty.h"
/**
  *cycle_down - rotates the stack to the bottom
  *@top: stack head used
  *@meter: line_number used in the calculation
  *Return: no return in this function
 */
void cycle_down(stack_t **top, __attribute__((unused)) unsigned int meter)
{
	stack_t *copy;

	copy = *top;
	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *top;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*top)->prev = copy;
	(*top) = copy;
}
