Node * removeDuplicates( Node *root) 
{
    if(root==NULL)
    return NULL;
    unordered_map<int,int >mp;
    Node* start=root,*prev;
    while(start!=NULL)
    {
        
            if(mp.find(start->data)!=mp.end())
            {
                prev->next=start->next;
            }
            else
            {
                mp[start->data]++;
                prev=start;
            }
        
        start=start->next;
        
    }
    return root;
}
