#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new code at the beginning
 * @head: head of node
 * @str: string to be stored
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);
	newnode->str = strdup(str);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
