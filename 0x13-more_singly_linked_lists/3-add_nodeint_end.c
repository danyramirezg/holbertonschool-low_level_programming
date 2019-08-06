#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* new_node - Function that creates new node
* @num: The function´s parameter
* Return: New pointer
*/

listint_t *new_node(const int num)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);

	add_node->n = num;
	add_node->next = NULL;
	return (add_node);
}

/**
* add_nodeint_end - Function that adds a new node
* @head: Pointer to the list
* @n: The function´s parameter
* Return: The pointer
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node_end, *actual = *head;

if (head == NULL)
	return (NULL);
node_end = new_node(n);

if (node_end == NULL)
	return (NULL);
if (*head == NULL)
	{
	*head = node_end;
	return (*head);
	}
while (actual->next != NULL)
	actual = actual->next;
actual->next = node_end;
return (*head);
}
