#include"lists.h"

/**
 * print_listint: Function that prints all the elements of a listint_t list.
 * @h: A pointer to a linked list of type listint_t that is to be printed.
 *
 * return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

