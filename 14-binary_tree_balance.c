#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance factor
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Always 0.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (!tree)
		return (0);

	/*calcule height_left avc la fonct recursive binary_tree_balance sur le tree->left et +1 pr inclure le nœud courant*/
	if (tree->left != NULL)
	{
		height_left = binary_tree_balance(tree->left) + 1;
	}
	if (tree->right != NULL)
	{
		height_right = binary_tree_balance(tree->right) + 1;
	}
	return (height_left - height_right);
}


/**
 *binary_tree_height - function calculate the height of the tree
 *@tree: pointeur to tree
 *Return: return counter left and right
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL)
	{
		return (0);
	}
/** +1 to get the height of the tree recursivly **/
	left_height = binary_tree_height(tree->left) + 1;
	right_height = binary_tree_height(tree->right) + 1;

	return ((left_height > right_height) ? left_height : right_height);
}
