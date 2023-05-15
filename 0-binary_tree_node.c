#include "binary_trees.h"
/**
 * binary_tree_node - Function that creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 * Return: pointer to the new node, OR NULL on failure
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;
	/* Allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	/* Set the value and parent */
	new_node->n = value;
	new_node->parent = parent;
	/* Initialize left and right children to NULL */
	new_node->left = NULL;
	new_node->right = NULL;

	/* Return a pointer to the new node */
	return (new_node);
}
