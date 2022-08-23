#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * binary_tree_insert_right - order the right side of the tree
 * @parent: Parent node
 * @value: Value of new node
 * Return: new order value
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	current = binary_tree_node(parent, value);

	if (current == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		current->right = parent->right;
		parent->right->parent = current;
	}
	parent->right = current;

	return (current);
}
