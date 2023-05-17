#include "binary_trees.h"

/**
 *binary_tree_sibling - function sibling brother of a node.
 *@node: pointeur to a node.
 *Return: the brother left or right. 
*/


binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (NULL);
	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
