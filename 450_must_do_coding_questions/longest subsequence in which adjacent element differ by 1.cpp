class Solution{
public:
    int longestSubsequence(int N, int a[])
    {
        // code here
        int dp[N];
        //memset(dp,1,sizeof(dp));
        int ans=1;
        for(int i=0;i<N;i++)
        {
            dp[i]=1;
            for(int j=0;j<i;j++)
            {
                if(abs(a[i]-a[j])==1 && dp[i]<dp[j]+1)
                {
                    dp[i]=dp[j]+1;
                   // cout<<dp[i]<<endl;
                    ans=max(ans,dp[i]);
                }
            }
        }
        return ans;
    }
};