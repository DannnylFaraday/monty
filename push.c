#include "monty.h"
/**
 * store - This add node to the stack
 * @top: stack head used in the computation
 * @meter: line_number
 * Return: no return
*/
void store(stack_t **top, unsigned int meter)
{
	int n, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", meter);
			fclose(bus.file);
			free(bus.content);
			unload_stack(*top);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", meter);
		fclose(bus.file);
		free(bus.content);
		unload_stack(*top);
		exit(EXIT_FAILURE); }
	n = atoi(bus.arg);
	if (bus.lifi == 0)
		insertNode(top, n);
	else
		queue_up(top, n);
}
