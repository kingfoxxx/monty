#include "monty.h"

/**
 * addnode - add node to the head stacks in file
 * @head: head of the stacks
 * @n: new_value
 * Return: no return
*/

void addnode(stack_t **head, int n)
{

	stack_t *news_node, *aux;

	aux = *head;
	news_node = malloc(sizeof(stack_t));
	if (news_node == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = news_node;
	news_node->n = n;
	news_node->next = *head;
	news_node->prev = NULL;
	*head = news_node;
}
