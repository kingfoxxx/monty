#include "monty.h"

/**
 * f_push - add node to the stacks
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_push(stack_t **head, unsigned int counter)
{
	int x, j = 0, flags = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flags = 1; }
		if (flags == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	x = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, x);
	else
		addqueue(head, x);
}
