#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: A binary tree node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_left, *aux;

	if (parent == NULL)
		return (NULL);

	new_left = malloc(sizeof(binary_tree_t));
	if (new_left == NULL)
		return (NULL);

	new_left->n = value;
	aux = parent->left;
	parent->left = new_left;
	new_left->left = aux;
	new_left->right = NULL;
	new_left->parent = parent;

	if (aux != NULL)
	{
		aux->parent = new_left;
	}
	return (new_left);
}
