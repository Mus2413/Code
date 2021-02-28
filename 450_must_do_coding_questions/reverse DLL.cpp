Node* reverseDLL(Node * head)
{
    if(head==NULL)
    return NULL;
    Node* prev;
    while(head!=NULL)
    {
        swap(head->next,head->prev);
        prev=head;
        head=head->prev;
        
    }
    return prev;
}