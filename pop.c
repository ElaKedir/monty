#include "monty.h"

/**
 * f_pop - A function that prints the top
 * @head: the stack head
 * @counter: line number
 * Return: nothing
*/

void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *p;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	p = *head;
	*head = p->next;
	free(p);
}

