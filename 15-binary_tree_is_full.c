#include "binary_trees.h"

/**
 * binary_tree_is_full -  binary tree is full
 *@tree:  pointer to the root node of the tree to check
 * Return: integer.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/*si le nœud tree est une feuille*/
	if (!tree->left && !tree->right)
		return (1);
	/*si le noeud tree a deux fils droit et gauche*/
	else if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));

	return (0);
}

