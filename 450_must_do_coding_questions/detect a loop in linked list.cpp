bool detectLoop(Node* head)
{
    if(head==NULL)
    return false;
    struct Node * fast=head,*slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast)
        return true;
        
    }
    return false;
}
