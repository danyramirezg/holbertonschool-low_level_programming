#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_listint - Returns the sum of all the data (n) of the list
* @head: Pointer to the list
* Return: The sum.
*/
int sum_listint(listint_t *head)
{
	int sum;

	for (sum = 0; head; sum = sum + head->n, head = head->next)
	{
	}
	return (sum);

}
