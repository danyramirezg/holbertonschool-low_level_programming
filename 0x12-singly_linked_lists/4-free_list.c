#include <stdlib.h>
#include <stddef.h>
#include "lists.h"
/**
* free_list - Function that frees a list.
* @head: The list's beginning
*
* Return: Void
*/
void free_list(list_t *head)
{
	if (head == NULL)
		return;
	free_list(head->next);
	free(head->str);
	free(head);
}
