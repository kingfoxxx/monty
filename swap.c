#include "monty.h"

/**
 * f_swap - adds top two elements of the stack.
 * @head: head of stack
 * @counter: line_number
 * Return: no return
*/

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *f;
	int len = 0, xus;

	f = *head;
	while (f)
	{
		f = f->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	f = *head;
	xus = f->n;
	f->n = f->next->n;
	f->next->n = aux;
}