#include "binary_trees.h"

/**
 *binary_tree_is_root - function check if the node is a root
 *@node: pointeur node
 *Return: return 0 if false or 1 is true
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);
	if (node->parent == NULL)
	return (1);

	else
	return (0);
}

