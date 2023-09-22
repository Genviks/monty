#include "monty.h"

/**
 * _pcharstack - a function that prints the element at the top of the stack
 * @head: A pointer to the top of the stack
 * @counter: the line number of the bytecodes file
 * Return: void
 */
void _pcharstack(stack_t **head, unsigned int counter)
{
	int n;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", counter);
		error = 1;
		return;
	}

	n = (*head)->n;

	if (!(n >= 32 && n <= 126))
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", counter);
		error = 1;
		return;
	}

	putchar(n);
	putchar('\n');
}
