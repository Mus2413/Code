class Solution{
    public:
    /* Function to get minimum number of trials needed in worst 
      case with n eggs and k floors */
      int dp[201][201];
    int solve(int n,int k)
    {
        if(k==0 || k==1)
        return k;
        if(n==1)
        return k;
        if(dp[n][k]!=-1)
        return dp[n][k];
        int ans=INT_MAX;
        for(int i=1;i<=k;i++)
        {
            int x,y;
            if(dp[n-1][i-1]!=-1)
            {
                x=dp[n-1][i-1];
            }
            else
            {
                x=solve(n-1,i-1);
            }
            if(dp[n][k-i]!=-1)
            {
                y=dp[n][k-i];
            }
            else
            {
                y=solve(n,k-i);
            }
            int temp=max(x,y);
            ans=min(ans,temp);
        }
        return dp[n][k]=ans+1;
    }
    int eggDrop(int n, int k) 
    {
        
        memset(dp,-1,sizeof(dp));
        for(int i=0;i<=n;i++)
        {
            dp[i][0]=0;
            dp[i][1]=1;
        }
        for(int i=0;i<=k;i++)
          dp[1][i]=i;
          
        return solve(n,k);
    }
};
