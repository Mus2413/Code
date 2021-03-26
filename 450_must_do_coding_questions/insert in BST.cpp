Node* insert(Node* root, int key)
{
    if(root==NULL)
    {
        Node* temp=new Node(key);
        root=temp;
        return root;
    }
    else if(root->data==key)
    {
        return root;
    }
    else if(root->data>key)
    {
        root->left=insert(root->left,key);
        return root;
    }
    else
    {
        root->right=insert(root->right,key);
        return root;
    }
}
