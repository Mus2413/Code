/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    if(head==NULL)
    return true;
    int count=0;
    Node* start=head;
    while(start!=NULL)
    {
        count++;
        start=start->next;
    }
    Node* slow=head, * fast=head;
    while(fast->next!=NULL && fast->next->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    if(count%2==0)
    {
        Node*temp=slow->next;
        slow->next=NULL;
        Node* t1=NULL,*t2=NULL;
        start=head;
        while(start!=NULL)
        {
            t2=start->next;
            start->next=t1;
            t1=start;
            start=t2;
        }
        while(t1!=NULL && temp!=NULL)
        {
            if(t1->data!=temp->data)
            return false;
            
            t1=t1->next;
            temp=temp->next;
        }
        return true;
    }
    else
    {
        Node* temp=slow->next;
        slow->next=NULL;
        Node* t1=NULL,*t2=NULL;
        start=head;
        while(start!=NULL)
        {
            t2=start->next;
            start->next=t1;
            t1=start;
            start=t2;
        }
        t1=t1->next;
        while(t1!=NULL && temp!=NULL)
        {
            if(t1->data!=temp->data)
            return false;
            
            t1=t1->next;
            temp=temp->next;
        }
        return true;
        
    }
}

