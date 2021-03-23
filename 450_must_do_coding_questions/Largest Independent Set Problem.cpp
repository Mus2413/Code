int LISS(node *root)  
{  
    if (root == NULL)  
    return 0;  
    int size_excl = LISS(root->left) +  
                    LISS(root->right);  
 
    int size_incl = 1;  
    if (root->left)  
        size_incl += LISS(root->left->left) + 
                     LISS(root->left->right);  
    if (root->right)  
        size_incl += LISS(root->right->left) +  
                     LISS(root->right->right);  
  

    return max(size_incl, size_excl);  
} 