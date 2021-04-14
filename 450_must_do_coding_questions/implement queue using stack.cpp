stack<int>s1,s2;
void StackQueue :: push(int x)
{
    s1.push(x);
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code    
    int n=s1.size();
    if(n==0)
    return -1;
    while(n>1)
    {
        s2.push(s1.top());
        s1.pop();
        n--;
    }
    int x=s1.top();
    s1.pop();
    while(!s2.empty())
    {
        s1.push(s2.top());
        s2.pop();
    }
    return x;
}
