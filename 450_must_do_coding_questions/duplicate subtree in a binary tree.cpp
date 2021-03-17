string preorder(Node* root, unordered_map<string,int>& mp)
{
    string s;
    if(root==NULL)
    {
        s.push_back('$');
        return s;
    }
    s.push_back(root->data);
   
    s+=preorder(root->left,mp);
    s+=preorder(root->right,mp);
    mp[s]++;
    return s;
}
bool dupSub(Node *root)
{
     //your code here
     unordered_map<string,int>mp;
     string ans=preorder(root,mp);
     for(auto x:mp)
     {
         if(x.second>1 && x.first.length()>3)
         return true;
     }
     return false;
}