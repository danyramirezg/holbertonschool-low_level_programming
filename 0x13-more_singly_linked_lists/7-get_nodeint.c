#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_nodeint_at_index - Function that adds a new node
* @head: Pointer to the list
* @index: The function´s parameter
* Return: The pointer
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;
	while (i < index)
{
	if (head->next == NULL)
		return (NULL);
	head = head->next;
	i++;
}
return (head);
}
