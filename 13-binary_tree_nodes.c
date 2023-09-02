#include "binary_trees.h"

/**
 * binary_tree_nodes - Adds up the number of nodes with a min of 1 child.
 * @tree: Pointer to the root of the tree to count the nodes from.
 *
 * Return: The sum of nodes in the tree and 0 is if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		nodes += (tree->left || tree->right) ? 1 : 0;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
