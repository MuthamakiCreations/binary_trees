#include "binary_trees.h"

/**
 * binary_tree_size - Used to measure the tree's size.
 * @tree: Pointer to the root of the tree to be measured.
 *
 * Return: The tree's size.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree)
	{
		size += 1;
		size += binary_tree_size(tree->left);
		size += binary_tree_size(tree->right);
	}
	return (size);
}
