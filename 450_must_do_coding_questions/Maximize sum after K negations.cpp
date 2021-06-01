class Solution{
    public:
    long long int maximizeSum(long long int a[], int n, int k)
    {
        // Your code goes here
        priority_queue<long long int ,vector<long long int>, greater<long long int>>pq;
        long long int sum=0;
        for(int i=0;i<n;i++)
        pq.push(a[i]);
        
        while(k>0)
        {
            long long int x=pq.top();
            pq.pop();
            pq.push(x*-1);
            k--;
        }
        
        while(!pq.empty())
        {
            sum+=pq.top();
            pq.pop();
        }
        return sum;
    }
};