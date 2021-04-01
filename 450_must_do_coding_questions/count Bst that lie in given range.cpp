int countnode;
void inorder(Node* root,int l1,int l2)
{
     if(root!=NULL )
     {
         inorder(root->left,l1,l2);
         if(root->data>=l1 && root->data<=l2)
           countnode++;
           
         inorder(root->right,l1,l2);
     }
}
int getCount(Node *root, int l1, int l2)
{
  // your code goes here  
   countnode=0;
  inorder(root,l1,l2);
  return countnode;
   
}
