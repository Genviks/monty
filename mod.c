#include "monty.h"

/**
 * _modstack - a fxn that computes the second top element of the stack.
 * @head: pointer to the the stack head.
 * @counter: the line number of the bytecode file.
 * @Return: not to return
 */
void _modstack(stack_t **head, unsigned int counter)
{
	int mod;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n," counter);
		error = 1;
		return;
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		error = 1;
		return;
	}

	mod = (*head)->next->n % (*head)->n;
	_popstack(head, counter);
	(*head)->n = mod;
}
