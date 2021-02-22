struct node *reverse (struct node *head, int k)
{ 
    if(head==NULL)
    return head;
    int count=0;
    struct node* t1=NULL,*t2=NULL,*start=head;
    while(start!=NULL && count <k)
    {
        t2=start->next;
        start->next=t1;
        t1=start;
        start=t2;
        count++;
    }
    if(t2!=NULL)
    {
        head->next=reverse(t2,k);
    }
    return t1;
}
