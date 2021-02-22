struct Node* reverseList(struct Node *head)
{
    if(head==NULL)
    return NULL;
    struct Node* t1=NULL,*t2=NULL,*start=head;
    while(start!=NULL)
    {
        t2=start->next;
        start->next=t1;
        t1=start;
        start=t2;
    }
    return t1;
}
