#include "lists.h"

/**
 * pop_list - deletes the head node of a listint_t linked list
 * @head: pointer to first linked list element
 *
 * Return: data inside the element that was deleted, or 0 if the list is empty
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;

	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
