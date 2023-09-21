#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: singly linked list
 * Return: number of nodes printed.
 */

size_t print_list(const list_t *h);
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (nodes);
}
