#include "binary_trees.h"

/**
* binary_tree_node - The function to create a node.
* @parent: The parent node.
* @value: value to store in the new node.
* Return: pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	return (node);
}
