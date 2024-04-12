#include "binary_trees.h"

/**
* btib_helper - checks if a binary tree is a valid Binary Search Tree
*
* @tree: "const binary_tree_t *" pointer to the root node of the tree to check
* @min: "int" Lower bound of checked nored
* @max: "int" Upper bound of checked nodes
* Return: "int" 1 if tree is a valid BST
*         0 otherwise
*/
int btib_helper(const binary_tree_t *tree, int min, int max)
{
	if (!tree)
		return (1);

	if (tree->n < min || tree->n > max)
		return (0);

	return (btib_helper(tree->left, min, tree->n - 1) &&
		btib_helper(tree->right, tree->n + 1, max));
}

/**
* binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
*
* @tree: "const binary_tree_t *" pointer to the root node of the tree to check
* Return: "int" 1 if tree is a valid BST
*         0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (btib_helper(tree, INT_MIN, INT_MAX));
}