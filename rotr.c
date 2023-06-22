#include "monty.h"

/**
  *f_rotr-  the stack will be rotates from top to the bottom
  *@head: head of stack
  *@counter: line_number
  *Return: no return
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *cup;

	cup = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (cup->next)
	{
		cup = cup->next;
	}
	cup->next = *head;
	cup->prev->next = NULL;
	cup->prev = NULL;
	(*head)->prev = cup;
	(*head) = cup;
}
