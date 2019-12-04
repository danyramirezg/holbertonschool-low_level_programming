#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value to store in the new node
 * Return: A binary tree node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));

	new->n = value;
	temp = parent->right;
	parent->right = new;
	new->right = temp;
	new->left = NULL;
	new->parent = parent;
	if (temp != NULL)
	{
		temp->parent = NULL;
	}
	return (new);

}
