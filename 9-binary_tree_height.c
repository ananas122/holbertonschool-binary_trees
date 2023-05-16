#include "binary_trees.h"

/**
 *binary_tree_height - function calculate the height of the tree
 *@tree: pointeur to tree
 *Return: return counter left and right
*/

size_t binary_tree_height(const binary_tree_t *tree)
{

	size_t leftCount = 0, rightCount = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leftCount = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rightCount = 1 + binary_tree_height(tree->right);
	if (leftCount > rightCount)
		return (leftCount);
	return (rightCount);
}
