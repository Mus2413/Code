class Solution
{
    public:
    int treeSum(Node* root)
    {
       if(root==NULL)
       {
          return 0;
       }
       else if(root->left==NULL&&root->right==NULL)
       {
            return root->data;
        }
        else
       {
          if(root->data==treeSum(root->left)+treeSum(root->right))
          {
            return 2*root->data;
           }
       }
    }
    bool isSumTree(Node* root)
    {
         // Your code here
         if(root->data==treeSum(root)/2)
           {
              return 1;
           }
            else
            {
              return 0;
            }
         
    }
};
