#include "binary_trees.h"

/**
 * binary_tree_sibling - checks if a node is a sibling.
 * @node: pointer to node to check.
 * Return: pointer to the sibling node,
 * if @node is NULL, the parent is NULL or has no sibling, returns NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if ((node->parent->left) == node)
		return (node->parent->right);
	return (node->parent->left);
}
