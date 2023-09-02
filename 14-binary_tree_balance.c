#include "binary_trees.h"

/**
 * binary_tree_balance - Used to calculate the tree's balance factor.
 * @tree: Pointer to that tree.
 *
 * Return: The balance factor and 0 if NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Calculates the height of tree.
 * @tree: Pointer to the root of the tree to calculate teh height from.
 *
 * Return: The height of the tree and 0 if NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
