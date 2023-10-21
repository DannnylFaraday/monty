#include "monty.h"
/**
 * mod_func - This computes the rest of the division of the second
 * top element of the stack by the top element of the stack
 * @top: stack head
 * @meter: line_number used in the calculation
 * Return: no return in thus function
*/
void mod_func(stack_t **top, unsigned int meter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n % h->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}
