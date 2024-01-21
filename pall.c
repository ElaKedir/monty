#include "monty.h"

/**
 * f_pall - A function that prints the stack
 * @head: the stack head
 * @counter: no used
 * Return: nothing
*/

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}

