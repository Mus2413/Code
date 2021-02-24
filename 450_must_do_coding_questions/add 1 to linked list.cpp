Node* addOne(Node *head) 
{
    if(head==NULL)
    return NULL;
    
    Node* start=head,*t1=NULL,*t2=NULL;
    while(start!=NULL)
    {
        t2=start->next;
        start->next=t1;
        t1=start;
        start=t2;
    }
    int carry=1;
    start=t1;
    Node*prev;
    while(start!=NULL)
    {
        if(start->data<9)
        {
            start->data=start->data+carry;
            carry=0;
        }
        else
        {
            int x=start->data+carry;
            start->data=(x)%10;
            if(x>9)
            {
                carry=1;
            }
            else
            carry=0;
        }
        prev=start;
        start=start->next;
    }
    if(carry)
    {
        Node* temp=new Node(1);
        prev->next=temp;
        
    }
    start=t1;
    t1=NULL;
    t2=NULL;
    while(start!=NULL)
    {
        t2=start->next;
        start->next=t1;
        t1=start;
        start=t2;
    }
    return t1;
    
    
}