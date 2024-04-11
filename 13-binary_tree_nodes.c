#include "binary_trees.h"
/**
 * binary_tree_nodes - find  no. of nodes
 * @tree: pointer to tree to check
 * Return: returns no. of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left || tree->right)
	{
		nodes++;
	}
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);

	return (nodes);
}
