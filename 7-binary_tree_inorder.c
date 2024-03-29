#include "binary_trees.h"

/**
 * binary_tree_inorder - outputs the values of tree using in-order
 * if tree or func is NULL, do nothing.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: A pointer to function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
