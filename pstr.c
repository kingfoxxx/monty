#include "monty.h"

/**
 * f_pstr - the string at the top of the stack will be printed,
 * followed by a new
 * @head: head of stack
 * @counter: line_number
 * Return: no return
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *f;
	(void)counter;

	f = *head;
	while (f)
	{
		if (f->n > 127 || f->n <= 0)
		{
			break;
		}
		printf("%c", f->n);
		f = f->next;
	}
	printf("\n");
}
