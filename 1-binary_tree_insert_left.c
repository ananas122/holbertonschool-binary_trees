#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: A pointer to the node to insert the left-child in
 * @value: The value to store in the new node
 *
 * Return: A pointer to the created node, or NULL on
 * failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	/*initialiser les champs du nouveau nœud*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Vérifier si le nœud parent a déjà un enfant gauche*/
	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	/*Le nouveau nœud devient l'enfant gauche du nœud parent*/
	parent->left = new_node;
	return (new_node);
}
