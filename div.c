#include "monty.h"

/**
 * f_div - divides the top two elements of the stack in file head
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/

void f_div(stack_t **head, unsigned int counter)
{
	stack_t *m;
	int len = 0, aux;

	m = *head;
	while (m)
	{
		m = m->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	m = *head;
	if (m->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = m->next->n / m->n;
	m->next->n = aux;
	*head = m->next;
	free(m);
}
