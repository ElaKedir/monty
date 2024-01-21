#include "monty.h"

/**
 * addnode - adds node to the head stack.
 * @head: the head of the stack
 * @n: new value
 * Return: nothing
*/

void addnode(stack_t **head, int n)
{
	stack_t *new_nod, *aux;

	aux = *head;
	new_nod = malloc(sizeof(stack_t));
	if (new_nod == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
		aux->prev = new_nod;
	new_nod->n = n;
	new_nod->next = *head;
	new_nod->prev = NULL;
	*head = new_nod;
}

