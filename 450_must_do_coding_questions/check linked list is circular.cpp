* Link list Node 
struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
}; 
*/

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
    if(head==NULL)
    return true;
    Node* start=head;
    while(start->next!=head)
    {
        if(start->next==NULL)
        break;
        start=start->next;
    }
    if(start->next==head)
    return true;
    else
    return false;
}
