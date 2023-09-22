#include "monty.h"

/**
 * _pallstack - function that prints all elements in the stack.
 * @head: pointer to the stack head of the linked list
 * @counter: line number of the bytecode file
 * @Return: not to return
 */
void _pallstack(stack_t *head, unsigned int counter)
{
	stack_t *current = *head;

	(void)counter;
		
		while (current != NULL)
		{
			printf("%u\n", current->n);
			current = current->next;
		}
}
