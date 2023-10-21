#include "monty.h"
/**
 * print_char - This prints the char at the top of the stack,
 * followed by a new line
 * @top: stack head
 * @meter: line_number
 * Return: no return in the function
*/
void print_char(stack_t **top, unsigned int meter)
{
	stack_t *h;

	h = *top;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
