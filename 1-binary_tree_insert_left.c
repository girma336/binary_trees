#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_tree_insert_left - Insert new node in left side
 * @parent: Patent node
 * @value: Value of new node
 * Return: New left side node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *current;

	if (parent == NULL)
		return (NULL);

	current = binary_tree_node(parent, value);
	if (current == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		current->left = parent->left;
		parent->left->parent = current;
	}
	parent->left = current;

	return (current);
}
