#include "monty.h"
/**
 * swap_func - adds the top two elements of the stack.
 * @top: stack head of the stack
 * @meter: line_number used in the calculation
 * Return: no return in this function
*/
void swap_func(stack_t **top, unsigned int meter)
{
	stack_t *h;
	int len = 0, aux;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
