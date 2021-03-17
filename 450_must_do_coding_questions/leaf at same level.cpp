int maxi(Node* root)
{
if(!root) return 0;

return max(maxi(root->left),maxi(root->right))+1;
}

int mini(Node* root)
{
if(!root) return INT_MAX;

if(!root->left and !root->right) return 1;

return min(mini(root->left),mini(root->right))+1;
}
bool check(Node *root)
{
     return maxi(root)==mini(root);
}