#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_nodeint_at_index - Function that inserts a new node
* @head: Double pointer to the list
* @idx: The index of the list where new node will be added
* @n: The function's parameter
* Return: The new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *actual;

	actual = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = actual;
		*head = new_node;
		return (*head);
	}
	while (idx > 1)
	{
		actual = actual->next;
		idx--;
		if (!actual)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = actual->next;
	actual->next = new_node;
	return (new_node);

}
