#include "monty.h"
/**
 * _rotrstack - a function that rotates the stack, changing the last element
 * 	to the top and the top element to become second top.
 * @head: pointer to the elements at the stack head.
 * @counter: line number of the bytecode file
 * return: nothing
 */
void _rotrstack(stack_t **head, unsigned int counter)
{
	int n;
	stack_t *current, *new;

	if (*head == NULL || (*head)->next == NULL)
		return;

	if ((*head)->next->next == NULL)
	{
		_swap(head, counter);
		return;
	}

	current = *head;

	while (current->next)
		current = current->next;

	n = current->n;
	current->prev->next = NULL;
	free(current);

	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	new->n = n;
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
