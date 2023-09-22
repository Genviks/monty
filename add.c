#include "monty.h"

/**
 * _addstack - a function that adds the top two of the stack.
 * @head: A pointer to the top of the stack
 * @counter: the line number of the bytecodes file
 * Return: void
 */
void _addstack(stack_t **head, unsigned int counter)
{
	int sum;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", counter);
		error = 1;
		return;
	}

	sum = (*head)->n + (*head)->next->n;
	_popstack(head, counter);
	(*head)->n = sum;
}
