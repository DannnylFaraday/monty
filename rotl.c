#include "monty.h"
/**
  *cycle_top- rotates the stack to the top
  *@top: stack head
  *@head: line_number used in the stack
  *Return: no return
 */
void cycle_top(stack_t **top,  __attribute__((unused)) unsigned int head)
{
	stack_t *tmp = *top, *aux;

	if (*top == NULL || (*top)->next == NULL)
	{
		return;
	}
	aux = (*top)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *top;
	(*top)->next = NULL;
	(*top)->prev = tmp;
	(*top) = aux;
}
