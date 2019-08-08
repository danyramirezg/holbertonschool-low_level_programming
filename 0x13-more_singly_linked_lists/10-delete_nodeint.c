#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_nodeint_at_index - Function that deletes the node at index
* @head: Pointer to the list
* @index: The index of the node that should be deleted
* Return: Pointer to head of list
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *actual, *after;

	if (!*head || !head)
		return (-1);
	actual = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	for (i = 0; i < (index - 1); i++)
	{
		actual = actual->next;
		if (actual == NULL)
			return (-1);
	}
	after = actual->next;
	actual->next = after->next;
	free(after);
	return (1);
}
