#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* listint_len - Function that returns the numbers of elemets of a list
* @h: Receive the list to print
* Return: The number of nodes
*/

size_t listint_len(const listint_t *h)
{
size_t i;

for (i = 0; h; i++)
	h = h->next;
return (i);
}
