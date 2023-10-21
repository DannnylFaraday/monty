#include "monty.h"
/**
 * take_out - this prints the top
 * @top: stack head
 * @meter: line_number in the program
 * Return: no return in this function
*/
void take_out(stack_t **top, unsigned int meter)
{
	stack_t *h;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	*top = h->next;
	free(h);
}
