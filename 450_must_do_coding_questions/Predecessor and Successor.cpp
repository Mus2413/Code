#include<bits/stdc++.h>
void inorder(Node* root,vector<Node*>&ans)
{
    if(root!=NULL)
    {
        inorder(root->left,ans);
        ans.push_back(root);
        inorder(root->right,ans);
    }
}
void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{
    vector<Node*>ans;
    inorder(root,ans);
   
    for(int i=0;i<ans.size();i++)
    {
        if(ans[i]->key==key)
        {
            if(i==0)
            {
               
                suc=ans[i+1];
            }
            else if(i==ans.size()-1)
            {
                
                pre=ans[i-1];
            }
            else
            {
                suc=ans[i+1];
                pre=ans[i-1];
            }
            break;
        }
        else if(ans[i]->key<key)
        {
            pre=ans[i];
        }
        else
        {
            suc=ans[i];
            break;
        }
        
    }
    return ;

}