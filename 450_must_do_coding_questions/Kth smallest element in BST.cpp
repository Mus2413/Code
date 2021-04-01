class Solution{
  public:
    
    void inorder(Node* root,vector<int>&ans)
    {
        if(root!=NULL)
        {
            inorder(root->left,ans);
            ans.push_back(root->data);
            inorder(root->right,ans);
        }
    }
    int KthSmallestElement(Node *root, int K)
    {
        //add code here.
        vector<int> ans;
        inorder(root,ans);
        int n=ans.size();
        if(K>n)
        return -1;
        
        return ans[K-1];
    }
};