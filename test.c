#include <stdio.h>
#include <stdlib.h>

/**
 * struct bin_tree - binary tree struct
 * 
 * @data: value of node data
 * @left: pointer to the left node
 * @right: pointer to right node
*/
struct bin_tree {
    int data;
    struct bin_tree *left;
    struct bin_tree *right;
};

typedef struct bin_tree bin_tree_t;
bin_tree_t *create_bin_tree();
void main()
{
    bin_tree_t *root;
    root = create_bin_tree();
};
/**
 * create_bin_tree - creates a binary tree 
 * 
*/
bin_tree_t *create_bin_tree() {
    bin_tree_t *new_node;
    int num;

    new_node = (bin_tree_t *)malloc(sizeof(bin_tree_t));
    if (!new_node)
    {
        return NULL;
    }
    
    printf("Input the data to be stored");
    scanf("%d", &num);
    if (num == -1)
    {
        return (0);
    }
    
    new_node->data = num;
    printf("Input the left node data");
    new_node->left = create_bin_tree();
    printf("Input the right node data");
    new_node->right = create_bin_tree();

    return (new_node);
}