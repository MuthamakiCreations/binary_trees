#include "binary_trees.h"

/**
 * binary_tree_insert_left - A leftchild is inserted in the
 *                           binary tree.
 * @parent: New pointer to the left-child.
 * @value: New node's value.
 *
 * Return: Error if parent is NULL. 
 *         Else - a pointer to the new node.
 *
 * Description: New node becomes parent if left-child exists,
 *              the old left-child becomes the new left-child.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
