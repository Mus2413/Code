int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    int size1=0,size2=0;
    Node* start1=head1,*start2=head2;
    while(start1!=NULL)
    {
        size1++;
        start1=start1->next;
    }
    while(start2!=NULL)
    {
        size2++;
        start2=start2->next;
    }
    start1=head1;
    start2=head2;
    if(size1<size2)
    {
        swap(start1,start2);
        swap(size1,size2);
    }
    int n=size1-size2;
    int i=1;
    while(i<=n)
    {
        i++;
        start1=start1->next;
    }
    while(start1!=start2)
    {
        start1=start1->next;
        start2=start2->next;
    }
    return start1->data;
}

