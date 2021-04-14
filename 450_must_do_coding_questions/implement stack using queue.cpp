ueue<int>q1,q2;
void QueueStack :: push(int x)
{
        q1.push(x);
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
    int n=q1.size();
    if(n==0)
    return -1;
    while(n>1)
    {
        q2.push(q1.front());
        q1.pop();
        n--;
    }
    int x=q1.front();
    q1.pop();
    swap(q1,q2);
    return x;
}
