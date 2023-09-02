#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses using post-order method.
 * @tree: Pointer to the root of the tree's node to be traversed.
 * @func: Pointer to the the functions called for each node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
