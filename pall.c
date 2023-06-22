#include "monty.h"
/**
 * f_pall - prints stack
 * @head: the head of stack
 * @counter: not to be used
 * Return: no return
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *f;
	(void)counter;

	f = *head;
	if (f == NULL)
		return;
	while (f)
	{
		printf("%d\n", f->n);
		f = f->next;
	}
}
