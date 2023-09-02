#include "binary_trees.h"

/**
 * binary_tree_node - Used to create a node for the binary tree.
 * @parent: Pointer of the parent to be created.
 * @value: New node's value.
 *
 * Return: NULL if error or else point to new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
