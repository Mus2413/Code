bool search(Node* root,int data){
if(root==NULL)
return false;
else if(root->data==data)
return true;
else if(data<=root->data)
return search(root->left,data);
else
return search(root->right,data);
}
int countPairs(Node* root1, Node* root2, int x)
{
    // Code here
if(root1==NULL)
return 0;
else if(search(root2,x-root1->data))
return 1+countPairs(root1->left,root2,x)+countPairs( root1->right,root2, x);
else
return countPairs(root1->left,root2,x)+countPairs( root1->right,root2, x);
}