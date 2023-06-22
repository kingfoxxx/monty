#include "monty.h"

/**
 * f_queue - top prined
 * @head: head of stack
 * @counter: line_number
 * Return: no return
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - add node at the stack tail
 * @n: new value
 * @head: the stack head
 * Return: no return
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *xus;

	xus = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (xus)
	{
		while (xus->next)
			xus = xus->next;
	}
	if (!xus)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		xus->next = new_node;
		new_node->prev = aux;
	}
}
