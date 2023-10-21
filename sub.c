#include "monty.h"
/**
  *sub_func- The subtraction function
  *@top: stack head
  *@meter: line_number
  *Return: no return
 */
void sub_func(stack_t **top, unsigned int meter)
{
	stack_t *aux;
	int sus, nodes;

	aux = *top;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE);
	}
	aux = *top;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*top = aux->next;
	free(aux);
}
