#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_listint - Function that frees a list
* @head: Pointer to the list
* Return: Nothing
*/
void free_listint(listint_t *head)
{
listint_t *buffer;

if (head == NULL)
	return;
while (head->next != NULL)
{
buffer = head->next;
free(head);
head = buffer;
}
free(head->next);
free(head);
}
