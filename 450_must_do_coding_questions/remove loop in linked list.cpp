int  checkloop(Node* head)
{
    if(head==NULL)
    return 0;
    
    Node* fast=head,*slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            slow=slow->next;
            int count=1;
            while(fast!=slow)
            {
                slow=slow->next;
                count++;
            }
            return count;
        }
        
    }
    return 0;
}
void removeLoop(Node* head)
{
    
    int size=checkloop(head);
    if(size>0)
    {
        Node* t1=head,*t2;
        int count=0;
        while(count<size)
        {
            t1=t1->next;
            count++;
        }
        t2=t1;
        t1=head;
        while(t1!=t2)
        {
            t1=t1->next;
            t2=t2->next;
        }
        while(t2->next!=t1)
        {
            t2=t2->next;
        }
        t2->next=NULL;
       
      
        return;
        
        
    }
    return ;
}
