class Solution
{
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
    int kthLargest(Node *root, int K)
    {
        vector<int> ans;
        inorder(root,ans);
        int n=ans.size();
        return ans[n-K];
    }
};