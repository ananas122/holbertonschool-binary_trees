#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the created node, OR NULL on failure OR if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/*verifie si le prt existe*/
	if (!parent)
		return (NULL);

	/*creation d un nvo noeud avc la value*/
	new_node = binary_tree_node(parent, value);

	/*si alloc memoire echec return null*/
	if (!new_node)
		return (NULL);

	/*si prt a deja un enfant droit, le deplacer à droite*/
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
		}

	parent->right = new_node;


	return (new_node);

}
