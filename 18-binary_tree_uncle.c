#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
 * binary_tree_uncle - Checks if a node is sibling.
 * @node: A pointer to node to check.
 * Return: pointer to the uncle node,
 * if @node is NULL, the parent is NULL or has no uncle, returns NULL.
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
