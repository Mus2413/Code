void solve(Node* root,bool & b,int l,int r)
{
    if(!b || !root)
    return ;
    if(l==r || r==1)
    b=0;
    solve(root->left,b,l,root->data-1);
    solve(root->right,b,root->data+1,r);
}
bool isDeadEnd(Node *root)
{
    bool b=1;
    solve(root,b,INT_MIN,INT_MAX);
    return !b;
}