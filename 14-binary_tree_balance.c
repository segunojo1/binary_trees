#include "binary_trees.h"

/**
* binary_tree_heightl -  measures the height of a binary tree
*
* @tree: a pointer to the root node of the tree to traverse
* Return: "size_t" Height of the tree
*/
int binary_tree_heightl(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = binary_tree_heightl(tree->left) + 1;
	right = binary_tree_heightl(tree->right) + 1;

	if (left > right)
		return (left);
	else
		return (right);
}

/**
* binary_tree_balance -  measures the balance factor of a binary tree
*
* @tree: a pointer to the root node of the tree to traverse
* Return: "size_t" The balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		return (binary_tree_heightl(tree->left) - binary_tree_heightl(tree->right));
	}
}

