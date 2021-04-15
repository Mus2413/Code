queue<int> modifyQueue(queue<int> q, int k)
{
    stack<int>s;
    while(k--)
    {
        s.push(q.front());
        q.pop();
    }
    queue<int>q1;
    while(!s.empty())
    {
        q1.push(s.top());
        s.pop();
    }
    while(!q.empty())
    {
        q1.push(q.front());
        q.pop();
    }
    return q1;
    
}