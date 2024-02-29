#include "binary_trees.h"

/**
 * binary_tree_delete - deletes a binary tree
 * @tree: The binary tree to be deleted
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	if (tree->right)
		binary_tree_delete(tree->right);
	if (tree->left)
		binary_tree_delete(tree->left);
	free(tree);
	tree = NULL;
}
