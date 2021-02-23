Node * lastelementtofirst( Node *root) 
{
    if(root==NULL)
    return NULL;
    if(root->next==NULL)
    return NULL;
    Node* start=root,*prev;
    while(start->next!=NULL)
    {
        prev=start;
        start=start->next;
    }
    prev->next=NULL;
    start->next=root;
    root=start;
    return root;
}
