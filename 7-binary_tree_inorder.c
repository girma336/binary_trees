#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * binary_tree_inorder - order the list of tree
 * @tree: list of node
 * @func: A pointer function to call for each node value
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
