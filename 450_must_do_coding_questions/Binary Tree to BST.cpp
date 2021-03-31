int i;
    void inorder(Node* root,vector<int>&ans)
    {
        if(root!=NULL)
        {
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
    }
    void maketree(Node* root,vector<int>ans)
    {
        if(root!=NULL)
        {
            maketree(root->left,ans);
            root->data=ans[i];
            i++;
            maketree(root->right,ans);
        }
    }
    Node *binaryTreeToBST (Node *root)
    {
        
        if(root==NULL)
        return NULL;
         vector<int>ans;
         inorder(root,ans);
         sort(ans.begin(),ans.end());
         i=0;
         maketree(root,ans);
         return root;
    }