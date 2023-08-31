#include "binary_trees.h"

/**
 * binary_tree_insert_left - A right-child is inserted in the
 *                           binary tree.
 * @parent: New pointer to the right-child.
 * @value: New node's value.
 *
 * Return: Error if parent is NULL. 
 *         Else - a pointer to the new node.
 *
 * Description: New node becomes parent if left-child exists,
 *              the old left-child becomes the new right-child.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;

	return (new);
}
