#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head/first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
