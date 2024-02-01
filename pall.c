#include "monty.c"
/**
 * f_pall -  prints all the values on the stack
 * @h: head
 * @counter: unsigned int
 * Return: void
 */

void f_pall(stack_t **h, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	if (i == NULL)
		return;

	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
