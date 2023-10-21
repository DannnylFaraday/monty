#include "monty.h"
/**
 * f_pall - prints the stack in the program
 * @top: stack head
 * @meter: no used in this function
 * Return: no return in this function
*/
void f_pall(stack_t **top, unsigned int meter)
{
	stack_t *h;
	(void)meter;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
