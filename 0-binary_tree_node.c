#include "binary_trees.h"
/**
 * @binary_tree_node - creates a new node 
 * 
 * @parent - pointer to the parent node of the node to create 
 * @value - value in the new node
 * @binary_tree_t* - returns node to the function 
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    
    
    if (value == '\0')
        return NULL;

    binary_tree_t *new_node = malloc(szeof(binary_tree_t));
    if(new_node == NULL)
        return (NULL);
    
        new_node->parent = parent;
        new_node->n = value;
        new_node->left = new_node->right = NULL;

        return (new_node);
   
}