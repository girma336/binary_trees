#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of tree
 * @tree: A pointer to thr node
 * Return: size of depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
	{
		return (1 + binary_tree_depth(tree->parent));
	}

	return (0);
}
