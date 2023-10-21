#include "monty.h"
/**
 * queue_func - This prints the top
 * @top: stack head
 * @meter: line_number in the program
 * Return: no return in this function
*/
void queue_func(stack_t **top, unsigned int meter)
{
	(void)top;
	(void)meter;
	bus.lifi = 1;
}

/**
 * queue_up - This add node to the tail stack
 * @n: new_value
 * @top: head of the stack in the program
 * Return: no return in this function
*/
void queue_up(stack_t **top, int n)
{
	stack_t *new_node, *aux;

	aux = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*top = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
