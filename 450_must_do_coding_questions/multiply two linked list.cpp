long long  multiplyTwoLists (Node* l1, Node* l2)
{
    long long x=0,y=0,N=1000000007;
    Node* start1=l1,*start2=l2;
    while(start1!=NULL)
    {
        x=((x%N)*10)%N+start1->data;
        start1=start1->next;
    }
    while(start2!=NULL)
    {
        y=((y%N)*10)%N+start2->data;
        start2=start2->next;
    }
    return ((x%N)*(y%N))%1000000007;
}