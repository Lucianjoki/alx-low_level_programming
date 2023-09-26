#include "lists.h"

/**
 * sum_listint - retun sum of all data(n) of a listint_t list
 * @head: first node
 *
 * Return: resulting sum,if the list is empty return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
