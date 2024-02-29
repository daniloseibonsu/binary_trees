#include "binary_trees.h"

/**
 * binary_tree_postorder - It outputs the values of tree using post-order.
 * if tree or func is NULL, do nothing.
 * @tree: pointer to the root node of the tree to traverse.
 * @func: A pointer to function.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
