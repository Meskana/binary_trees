#include "binary_treets.h"

/**
 * binary_tree_sibling - finds the siblinhg of a
 * node in the binary tree
 * @node: A pointer to the node to find the sibling
 * Return: if the node is NULL there is no sibling - NULL
 * otherwise - a pointer to the sibling.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
