*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};*/

// root: head node
Node *removeDuplicates(Node *root)
{
    if(root==NULL)
    return NULL;
    Node* prev=NULL,*start=root;
    while(start!=NULL)
    {
        
            if(prev!=NULL && start->data==prev->data )
            {
                prev->next=start->next;
            }
            else
            {
                prev=start;
            }
            
        
        
        start=start->next;
        
    }
    return root;
}