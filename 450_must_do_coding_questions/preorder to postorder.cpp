Node* solve(int pre[],int st,int end)
{
    if(st>end)
    return NULL;
    int x=pre[st];
    Node* temp=(Node*)malloc(sizeof(Node));
    temp->data=x;
    if(st==end)
    return temp;
    int index=0;
    for(int i=st+1;i<=end;i++)
    {
        if(pre[i]>x)
        {
            index=i;
            break;
        }
    }
    temp->left=solve(pre,st+1,index-1);
    temp->right=solve(pre,index,end);
    return temp;
}
Node* constructTree(int pre[], int size) {
    //code here
    return solve(pre,0,size-1);
}
