#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * _strlen - Function that gets length of the s
  * @s: The function's parameter (string)
  * Return: Length of the string
  */

int _strlen(const char *s)
{
	int i;

	for (i = 0; s[i]; i++)
	{
	}
	return (i);
}


/**
* *add_node - Function that adds a new node
* @head: Place in the list
* @str: String to add
* Return: The number of nodes
*/
list_t *add_node(list_t **head, const char *str)
{

	int a, len;
	char *c;
	list_t *new_list;

	if (str == NULL || head == NULL)
		return (NULL);
	len = _strlen(str);
	new_list = *head;
	c = malloc((len + 1) * sizeof(char));
	if (c == NULL)
		return (NULL);
	for (a = 0; str[a]; a++)
		c[a] = str[a];
	new_list = malloc(sizeof(list_t));
	if (new_list == NULL)
	{
	free(c);
	return (NULL);
	}

	new_list->str = c;
	new_list->len = len;
	new_list->next = *head;
	*head = new_list;

return (new_list);
}
