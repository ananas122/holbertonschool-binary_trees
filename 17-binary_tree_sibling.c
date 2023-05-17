#include "binary_trees.h"

/**
 *binary_tree_sibling - function sibling brother of a node.
 *@node: pointeur to a node.
 *Return: the brother left or right. 
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *sibling;

	if (!node->parent || !node)
		return (NULL);


	sibling = node->parent;

	if (sibling->left == node)
	{
		return (sibling->right);
	}	
	else
	{
		return (sibling->left);
	}
}
