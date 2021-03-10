class Solution
{
    public:
    int solve(Node* root,int *res)
    {
        if(root==NULL)
         return 0;
         int left=solve(root->left,res);
         int right=solve(root->right,res);
         int temp=left+right+1;
         int prev=max(left,right)+1;
         temp=max(prev,temp);
         *res=max(*res,temp);
         return prev;
    }
   
    int diameter(Node* root) {
    // Your code here
          int res=INT_MIN;
          int ans=solve(root,&res);
          return res;
         
    }

};