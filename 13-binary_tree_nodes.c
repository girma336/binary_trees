#include "binary_trees.h"

/**
 * binary_tree_nodes - count how many level do you have
 * @tree: a pointer to the root node
 * Return: size of parent
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += (tree->left || tree->right) ? 1 : 0;

		size += binary_tree_nodes(tree->left);
		size += binary_tree_nodes(tree->right);
	}

	return (size);
}
