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
        return ;
    }
    bool isBST(Node* root) 
    {
        vector<int>ans;
        inorder(root,ans);
        for(int i=0;i<ans.size()-1;i++)
        {
            if(ans[i]>=ans[i+1])
            return false;
        }
        return true;
    }
};