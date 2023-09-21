#include "monty.h"

/**
 * _divstacktop - fxn that divides the 2nd top element of the stack
 * @head: a pointer at the head of the stack
 * @counter: the line number of the bytecode file
 * @Return: not to return
*/
void _divstacktop(stack_t **head, unsigned int counter)
{
	int divide = 0;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr,"L%u: can't div, stack too short\n", counter);
		error = 1;
		return;
	}

	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", counter);
		error = 1;
		return;
	}

	divide = ((*head)->next->n) / ((*head)->n);

	popstacktop(head, counter);

	(*head)->n = result;
}
