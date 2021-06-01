int Maximize(int a[],int n)
    {
        // Complete the function
        sort(a,a+n);
        long long int sum=0;
        for(int i=0;i<n;i++)
        sum=(sum%1000000007 + (1ll*a[i]*(i))%1000000007)%1000000007;
        
        return (sum%1000000007);
    }