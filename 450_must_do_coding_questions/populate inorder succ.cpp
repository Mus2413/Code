void inorder(node* &root,node* &p)
{
if(root!=NULL){
inorder(root->right,p);
root->next = p;
p = root;
inorder(root->left,p);
}
}
void populateNext(struct node* p)
{


node* p1=NULL;
inorder(p,p1);

}
