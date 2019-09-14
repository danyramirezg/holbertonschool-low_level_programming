#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at index of a double linked list
 * @head: double pointer to points to the double linked list
 * @index: node that should be deleted. Index starts at 0
 * Return: 1 if successful or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p, *p1;
	unsigned int result = 0;

	p = *head;

	if (*head == NULL || head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = p->next;
		if (p->next != NULL)
			p->next->prev = NULL;
		free(p);
		return (1);
	}

	while (result < (index - 1))
	{
		if (p == NULL)
			return (-1);
		p = p->next;
		result++;
	}
	p1 = p->next->next;
	if (p->next->next != NULL)
		p->next->next->prev = p;
	free(p->next);
	p->next = p1;
	return (1);
}
