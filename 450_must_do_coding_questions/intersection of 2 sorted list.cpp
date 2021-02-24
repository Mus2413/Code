Node* findIntersection(Node* head1, Node* head2)
{
    Node * start1=head1,*start2=head2,*start=NULL,*temp=NULL;
    while(start1!=NULL && start2!=NULL)
    {
        if(start1->data==start2->data)
        {
            if(start==NULL)
            {
                start=start1;
                temp=start;

            }
            else
            {
                temp->next=start1;
                temp=start1;
               
                
            }
            start1=start1->next;
            start2=start2->next;
            temp->next=NULL;
        }
        else if(start1->data<start2->data)
        {
            start1=start1->next;
        }
        else
        {
            start2=start2->next;
        }
    }
    return start;
}