#include "monty.h"
/**
 * _pstrstack - a function that prints strings from the stack head
 * @head: pointer to the elements at the stack head.
 * @counter: line number of the bytecode file
 * return: nothing
 */
void _pstrstack(stack_t **head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;

	if (current == NULL)
	{
		putchar('\n');
		return;
	}

	while (current != NULL)
	{
		int n = current->n;

		if (n == 0 || n < 32 || n > 126)
			break;

		putchar(n);
		current = current->next;
	}

	putchar('\n');
}
