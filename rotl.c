#include "monty.h"

/**
  *f_rotr- rotates the stack to the bottom
  *@head: stack head
  *@counter: line_number
  *Return: no return
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *copying;

	copying = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (copying->next)
	{
		copying = copying->next;
	}
	copying->next = *head;
	copying->prev->next = NULL;
	copying->prev = NULL;
	(*head)->prev = copying;
	(*head) = copying;
}
