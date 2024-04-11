#include "binary_trees.h"

/**
* btic_helper - checks if a binary tree is complete
*
* @tree: "const binary_tree_t *" pointer to the root node of the tree to check
* @index: "size_t" node index to check
* @size: "size_t" number of nodes in the tree
* Return: "int" 1 if the tree is complete
*         0 if the tree is not complete
*         0 if tree is NULL
*/
int btic_helper(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);
	if (index >= size)
		return (0);

	return (btic_helper(tree->left, 2 * index + 1, size) &&
		btic_helper(tree->right, 2 * index + 2, size));
}

/**
* binary_tree_size - measures the size of a binary tree
*
* @tree: "const binary_tree_t *" tree to measure the size of
* Return: "size_t" size of the tree
*         0 if tree is NULL
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) +
		binary_tree_size(tree->right) + 1);
}

/**
* binary_tree_is_complete - checks if a binary tree is complete
*
* @tree: "const binary_tree_t *" pointer to the root node of the tree to check
* Return: "int" 1 if the tree is complete
*         0 if the tree is not complete
*         0 if tree is NULL
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = binary_tree_size(tree);

	return (btic_helper(tree, 0, size));
}