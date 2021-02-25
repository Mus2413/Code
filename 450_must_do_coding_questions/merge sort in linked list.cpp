Node* merge(Node* t1,Node*t2)
{
    if(t1==NULL)
    return t2;
    if(t2==NULL)
    return t1;
    if(t1->data <t2->data)
    {
        t1->next=merge(t1->next,t2);
        return t1;
    }
    else
    {
        t2->next=merge(t1,t2->next);
        return t2;
    }
}
Node* mergeSort(Node* head) {
    // your code here
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    return head;
    Node* fast=head,*slow=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    Node * temp=slow->next;
    slow->next=NULL;
    return merge(mergeSort(head),mergeSort(temp));
}
