#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint2 - Function that frees a list
* @head: Pointer to the list
* Return: Void
*/
void free_listint2(listint_t **head)
{
listint_t *buffer;

if (head == NULL)
	return;

while ((*head)->next != NULL)
{
	buffer = (*head)->next;
	free(*head);
	*head = buffer;
}
free((*head)->next);
free(*head);
*head = NULL;
}
