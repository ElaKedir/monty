#include "monty.h"

/**
 * f_add - adds the top two elements of the stack
 * @head: the stack head
 * @counter: the line_number
 * Return: nothing
*/

void f_add(stack_t **head, unsigned int counter)
{
	stack_t *p;
	int len = 0, aux;

	p = *head;
	while (p)
	{
		p = p->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	aux = p->n + p->next->n;
	p->next->n = aux;
	*head = p->next;
	free(p);
}

