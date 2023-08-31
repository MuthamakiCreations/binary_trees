#include "binary_trees.h"

/**
 * binary_tree_height - Used to measure the tree's height.
 * @tree: Pointer to the roor of the binary tree.
 *
 * Return: Must return 0, otherwise, return height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
