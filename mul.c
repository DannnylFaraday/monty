#include "monty.h"
/**
 * mul_func - This multiplies the top two elements of the stack.
 * @top: stack head in the program
 * @meter: line_number used
 * Return: no return in this function
*/
void mul_func(stack_t **top, unsigned int meter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}
