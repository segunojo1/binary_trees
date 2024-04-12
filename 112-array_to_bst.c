
#include "binary_trees.h"

/**
* array_to_bst - builds a Binary Search Tree from an array
*
* @array: "int *" pointer to the first element of the array to be converted
* @size: "size_t" the number of elements in the array
* Return: "bst *" A pointer to the root node of the created BST
*         NULL on failure
*/
bst_t *array_to_bst(int *array, size_t size)
{
	unsigned int i;
	bst_t *root = NULL;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
