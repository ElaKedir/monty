#include "monty.h"

/**
 * f_pstr - A function that prints the string
 * starting at the top of the stack followed by a new
 * @head: the stack head
 * @counter: line number
 * Return: nothing
*/

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *head;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}

