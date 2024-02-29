#include "binary_trees.h"

/**
 * binary_tree_depth - gets the depth of a node from the root
 * @tree: A pointer to node
 * Return: depth of the node, if @tree is NULL, returns 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree || !tree->parent)
		return (0);
	return (binary_tree_depth(tree->parent) + 1);
}
