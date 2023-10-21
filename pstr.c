#include "monty.h"
/**
 * show_text - This prints the string starting at the top of the stack,
 * followed by a new
 * @top: stack head in the program
 * @meter: line_number
 * Return: no return
*/
void show_text(stack_t **top, unsigned int meter)
{
	stack_t *h;
	(void)meter;

	h = *top;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
