int prest;
int findx(int in[],int st,int n,int x)
{
    
    for(int i=st;i<=n;i++)
    {
        if(in[i]==x)
        return i;
    }
    
}
Node* treeconstruct(int in[],int pre[],int inst,int inend,int n)
{
    if(prest>=n)
    {
        return NULL;
    }
    int x=pre[prest];
    prest++;
    int index=findx(in,inst,inend,x);
    Node* temp=new Node(x);
    if(inst<index)
    temp->left=treeconstruct(in ,pre,inst,index-1,n);
    if(index<inend)
    temp->right=treeconstruct(in ,pre,index+1,inend,n);
    return temp;
    
}
Node* buildTree(int in[],int pre[], int n)
{
    prest=0;
    Node* root=treeconstruct(in ,pre,0,n-1,n);
    return root;
}