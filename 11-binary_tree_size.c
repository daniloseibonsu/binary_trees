#include "binary_trees.h"

/**
 * binary_tree_size - returns the tree_size of a tree
 * @tree: A pointer to tree
 * Return: size of the tree, if @tree is NULL, returns 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree)
		return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
	return (0);
}
