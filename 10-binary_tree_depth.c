#include "binary_trees.h"

/**
 *binary_tree_depth - function depth the tree
 *@tree: pointeur to tree
 *Return: return the depth
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}