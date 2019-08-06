#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* pop_listint - Function that deletes the head node
* @head: Pointer to the list
* Return: The integer data.
*/
int pop_listint(listint_t **head)
{
listint_t *buffer = *head;
int data = 0;

if (*head == NULL)
	return (0);
data = buffer->n;
*head = buffer->next;
free(buffer);
return (data);
}
