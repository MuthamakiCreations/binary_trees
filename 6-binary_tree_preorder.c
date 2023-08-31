#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverse through a binary tree using pre-order method.
 * @tree: Pointer to the root of the tree's node to be traveresed.
 * @func: Pointer to a function that will be called for each node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
