#include "monty.h"
/**
* unload_stack - This unloads a doubly linked list
* @top: top of the stack
*/
void unload_stack(stack_t *top)
{
	stack_t *aux;

	aux = top;
	while (top)
	{
		aux = top->next;
		free(top);
		top = aux;
	}
}
