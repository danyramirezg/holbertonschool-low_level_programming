#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - Function that reverses a linked list
* @head: Double pointer to the list
*
* Return: Cero.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *buffer, *actual;
	listint_t *prev = NULL;

	actual = *head;
	while (actual != NULL)
	{
		buffer = actual->next;
		actual->next = prev;
		prev = actual;
		actual = buffer;
	}
	*head = prev;
	return (*head);
}
