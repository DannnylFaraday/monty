#include "monty.h"
/**
 * print_int - This prints the top
 * @top: stack head
 * @meter: line_number used in the program
 * Return: no return in this function
*/
void print_int(stack_t **top, unsigned int meter)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}
