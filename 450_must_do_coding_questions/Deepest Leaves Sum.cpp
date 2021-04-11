class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty())
        {
             sum=0;
            int n=q.size();
            while(n--)
            {
                TreeNode* temp=q.front();
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
                sum+=temp->val;
            }
        }
        return sum;
    }
};