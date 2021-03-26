class Solution {
public:
    
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL)
            return root;
        else if(root->val==key)
        {
            if(root->left==NULL && root->right==NULL)
            {
                delete root;
                return NULL;
            }
            else if( root->left != NULL && root->right==NULL)
            {
                TreeNode* temp=root->left;
               
                return temp;
            }
            else if(root->left == NULL && root->right!=NULL)
            {
                TreeNode* temp=root->right;
               
                return temp;
            }
            else
            {
                TreeNode *temp=root->right;
                while(temp->left){
                    temp=temp->left;
                }
                root->val=temp->val;
               
                root->right=deleteNode(root->right,root->val);
            }
        }
        else if(key<root->val)
        {
            root->left=deleteNode(root->left,key);
            return root;
        }
        else
        {
            root->right=deleteNode(root->right,key);
            return root;
        }
        return root;
    }
};