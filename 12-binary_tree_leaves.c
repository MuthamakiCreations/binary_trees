#include "binary_trees.h"

/**
 * binary_tree_leaves - Adds up the number of leaves in the tree.
 * @tree: Pointer to the root of the tree's node.
 *
 * Return: Sum of the binary tree's leaves.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		leaves += (!tree->left && !tree->right) ? 1 : 0;
		leaves += binary_tree_leaves(tree->left);
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves);
}
