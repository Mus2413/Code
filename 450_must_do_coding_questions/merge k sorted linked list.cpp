Node* merge(Node* t1,Node*t2)
{
    if(t1==NULL)
    {
        return t2;
    }
    else if(t2==NULL)
    {
        return t1;
    }
    else if(t1->data<t2->data)
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
Node * mergeKLists(Node *arr[], int K)
{
       if(K==1)
       {
           return arr[0];
       }
       else if(K==2)
       {
           return merge(arr[0],arr[1]);
       }
       priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
       for(int i=0;i<K;i++)
       {
           int size=0;
           Node* start=arr[i];
           while(start!=NULL)
           {
               start=start->next;
               size++;
           }
           pq.push({size,i});
       }
       while(pq.size()>1)
       {
            int x=pq.top().second;
            int n=pq.top().first;
            pq.pop();
            int m=pq.top().first;
            int y=pq.top().second;
            pq.pop();
            Node* start1=arr[x];
            Node* start2=arr[y];
            Node* temp= merge(start1,start2);
            arr[x]=temp;
            pq.push({n+m,x});
       }
      int x=pq.top().second;
      int n=pq.top().first;
      pq.pop(); 
      return arr[x];
}

