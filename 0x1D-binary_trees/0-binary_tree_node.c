#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node
 * @parent: Pointer to the structure
 * @value: Integer
 * Return: A binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	if (parent == NULL || parent->n == value)
		return parent;

	if (parent->n < value)
		return binary_tree_node(parent->right, value);

	return binary_tree_node(root->left, value);
}
