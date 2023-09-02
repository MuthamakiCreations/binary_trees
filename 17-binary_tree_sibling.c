#include "binary_trees.h"

/**
 * binary_tree_sibling - Used to look for the sibling of a tree's node.
 * @node:Pointer to the tree's node.
 *
 * Return: If node is NULL or there is no sibling.
 *         Else - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
