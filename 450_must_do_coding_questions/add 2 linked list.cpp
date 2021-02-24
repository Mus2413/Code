struct Node* addTwoLists(struct Node* first, struct Node* second)
{
     Node* start1=first,*t1=NULL,*t2=NULL;
     while(start1!=NULL)
     {
         t2=start1->next;
         start1->next=t1;
         t1=start1;
         start1=t2;
     }
     start1=t1;
     t1=NULL;
     t2=NULL;
     Node* start2=second;
     while(start2!=NULL)
     {
         t2=start2->next;
         start2->next=t1;
         t1=start2;
         start2=t2;
     }
     start2=t1;
     Node*start=NULL,*temp=NULL;
     int carry=0;
     while(start1!=NULL && start2!=NULL)
     {
         int x=start1->data+start2->data+carry;
         if(x>9)
         {
             start1->data=x%10;
             carry=1;
         }
         else
         {
             start1->data=x;
             carry=0;
         }
         
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
     }
     while(start1!=NULL)
     {
         int x=start1->data+carry;
         if(x>9)
         {
             start1->data=x%10;
             carry=1;
         }
         else
         {
             start1->data=x;
             carry=0;
         }
         
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
     }
     while(start2!=NULL)
     {
         int x=start2->data+carry;
         if(x>9)
         {
             start2->data=x%10;
             carry=1;
         }
         else
         {
             start2->data=x;
             carry=0;
         }
         
         if(start==NULL)
         {
             start=start2;
             temp=start;
         }
         else
         {
             temp->next=start2;
             temp=start2;
         }
         start2=start2->next;
     }
     if(carry)
     {
         Node *n=new Node(1);
         temp->next=n;
         temp=n;
     }
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
