#include "monty.h"
/**
 * insertNode - insert node to the head stack
 * @top: top of the stack
 * @n: new_value
 * Return: no return
*/
void insertNode(stack_t **top, int n)
{

	stack_t *new_node, *aux;

	aux = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->n = n;
	new_node->next = *top;
	new_node->prev = NULL;
	*top = new_node;
}
