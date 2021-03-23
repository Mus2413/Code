class Solution{
public:
    bool solve(int a[],int n,int sum)
    {
        bool dp[n+1][sum+1];
        memset(dp,false,sizeof(dp));
        dp[0][0]=true;
        for(int i=1;i<=n;i++)
        dp[i][0]=true;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=sum;j++)
            {
                if(a[i-1]<=j)
                {
                    dp[i][j]=dp[i-1][j-a[i-1]] || dp[i-1][j];
                }
                else
                {
                    dp[i][j]=dp[i-1][j];
                }
            }
        }
        return dp[n][sum];
    }
    int equalPartition(int N, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<N;i++)
        {
            sum+=arr[i];
        }
        if(sum%2!=0)
        return 0;
        else
        {
            return solve(arr,N,sum/2);
        }
    }
};