#include "binary_trees.h"
/**
 * binary_tree_leaves - returns the leaves
 * @tree: tree to be cecked
 * Return: no. of leave nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t nums = 0;

	if (!tree)
	{
		return (0);
	}
	if (tree->left == NULL && tree->right == NULL)
	{
		nums++;
	}

	binary_tree_leaves(tree->left);
	binary_tree_leaves(tree->right);

	return (nums);
}
