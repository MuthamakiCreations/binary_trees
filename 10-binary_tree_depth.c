#include "binary_trees.h"

/**
 * binary_tree_depth - Used to measures the tree's depth.
 * @tree Pointer to the orrt of the tree.
 *
 * Return: Must return 0 (If tree is NULL), otherwise return tree's depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
