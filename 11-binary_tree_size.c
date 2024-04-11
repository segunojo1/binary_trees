#include "binary_trees.h"
/**
 * binary_tree_size - returns the size of the tree
 * @tree: the pointer to the tree
 *
 * Return: retur the size
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t height = 0;

	if (!tree)
	{
		return (0);
	}
	height += binary_tree_size(tree->left);
	height += binary_tree_size(tree->right);

	return (height + 1);

}
