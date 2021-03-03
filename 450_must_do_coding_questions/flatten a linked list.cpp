struct Node{
	int data;
	struct Node * next;
	struct Node * bottom;
	
	Node(int x){
	    data = x;
	    next = NULL;
	    bottom = NULL;
	}
	
};
*/

/*  Function which returns the  root of 
    the flattened linked list. */
Node* mergesort(Node* t1,Node*t2)
{
    if(t1==NULL)
    return t2;
    if(t2==NULL)
    return t1;
    if(t1->data<t2->data)
    {
         t1->bottom=mergesort(t1->bottom,t2);
         return t1;
    }
    else
    {
         t2->bottom=mergesort(t1,t2->bottom);
         return t2;
    }
}
 Node* merge(Node* root)
 {
     if(root==NULL)
     return NULL;
     if(root->bottom==NULL)
     return root;
     Node* fast=root,*slow=root;
     while(fast->bottom!=NULL && fast->bottom->bottom!=NULL)
     {
         fast=fast->bottom->bottom;
         slow=slow->bottom;
     }
     Node*temp=slow->bottom;
     slow->bottom=NULL;
     return mergesort(merge(root),merge(temp));
 }
Node *flatten(Node *root)
{
    if(root==NULL)
    return NULL;
    Node* start=root;
   
    while(start!=NULL)
    {
        Node* temp=start->next;
        if(start->bottom!=NULL)
        {
           
            Node* prev=start;
            Node* t=start,*t1;
            while(prev!=NULL)
            {
                t->next=prev->bottom;
                if(t->next!=NULL)
                t=t->next;
                t1=prev->bottom;
                prev->bottom=NULL;
                prev=t1;
            }
            t->next=temp;
            start=t;
        }
        
        start=start->next;
       
    }
   start=root;
   Node* dummy=NULL;
   while(start!=NULL)
   {
       start->bottom=start->next;
       dummy=start->next;
       start->next=NULL;
       start=dummy;
   }
   
   return merge( root);
   
}

