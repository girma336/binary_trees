#include "binary_trees.h"

/**
 * binary_tree_balance - count how many level do you have
 * @tree: a pointer to the root node
 * Return: size of parent
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int size = 0;

	if (tree)
	{
		size += (tree->left) ? 1 : 0;

		if (tree->left == NULL)
			size += (tree->right) ? -1 : 0;
		else
			size -= (tree->right) ? -1 : 0;

		binary_tree_balance(tree->left);
		binary_tree_balance(tree->right);
	}

	return (size);
}
