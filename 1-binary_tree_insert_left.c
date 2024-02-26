#include "binary_trees.h"

/**
 * binary_tree_Insert_left -  insert a node to the left side of the  parent
 * @parent: inserting new node to the left
 * @value: the value to stor the new node
 * Return: if not NULL return the new node
 * Description: if parent already has the left child , the new node
 *	takes it place and old left child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
