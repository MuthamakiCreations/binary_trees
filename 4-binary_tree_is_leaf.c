#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Used to see if the node of the tree is a leaf.
 * @node: Pointer of the node to be checked.
 *
 * Return: 1 if the node of the binary tree if a leaf.
 *         0 is something else.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
