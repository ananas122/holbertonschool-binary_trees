#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: If node has no uncle, return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

    /*Vérifier si le nœud est NULL*/
	if (node == NULL)
	{
		return (NULL);
	}


	/*si le nœud n'a pas de parent ou que le parent n'a pas de parent*/
	if (node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}

	/*Vérifier si le node est le FG ou D */
	if (node->parent->parent->left == node->parent)
	{
		/* Return FD du parent qui a un parent*/
		return (node->parent->parent->right);
	}
	else
	{
		/* Return FG du grand parent*/
		return (node->parent->parent->left);
	}
}

