#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses through a binary tree using in-order method.
 * @tree: Pointer to the root of the tree's node to be traversed.
 * @func: Pointer for the functions to be called for each node.
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
