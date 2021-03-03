class Solution
{
    public:
    Node* segregate(Node *head) {
        
        int count0=0,count1=0,count2=0;
        Node* start=head;
        while(start!=NULL)
        {
            if(start->data==0)
            count0++;
            else if(start->data==1)
            count1++;
            else
            count2++;
            
            start=start->next;
        }
        start=head;
        while(count0!=0)
        {
            start->data=0;
            start=start->next;
            count0--;
        }
        while(count1!=0)
        {
            start->data=1;
            start=start->next;
            count1--;
        }
        while(count2!=0)
        {
            start->data=2;
            start=start->next;
            count2--;
        }
        return head;
        
    }
};

