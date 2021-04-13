class Solution
{
    void smallerright(long long a[],int n,vector<long long >&nsr)
    {
        stack<long long >s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                nsr.push_back(n+1);
            }
            else if(a[s.top()]<a[i])
            {
                nsr.push_back(s.top());
            }
            else
            {
                while(!s.empty() && a[s.top()]>a[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    nsr.push_back(n+1);
                }
                else
                {
                    nsr.push_back(s.top());
                }
            }
            s.push(i);
            
        }
        reverse(nsr.begin(),nsr.end());
        return ;
    }
    void smallerleft(long long a[],int n,vector<long long >&nsl)
    {
        stack<long long >s;
        for(int i=0;i<n;i++)
        {
            if(s.empty())
            {
                nsl.push_back(-1);
            }
            else if(a[s.top()]<a[i])
            {
                nsl.push_back(s.top());
            }
            else
            {
                while(!s.empty() && a[s.top()]>a[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                    nsl.push_back(-1);
                }
                else
                {
                    nsl.push_back(s.top());
                }
            }
            s.push(i);
            
        }
         return ;
    }
    public:
    long long getMaxArea(long long arr[], int n){
    vector<long long > nsr,nsl,w(n);
    smallerright(arr,n,nsr);
    smallerleft(arr,n,nsl);
    for(int i=0;i<n;i++)
    {
        w[i]=nsr[i]-nsl[i]-1;
    }
    long long maxans=0;
    for(int i=0;i<n;i++)
    {
        maxans=max(maxans,w[i]*arr[i]);
    }
    return maxans;
    
}
};
