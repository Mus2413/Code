class Solution{
public:
    int maximumPath(int n, vector<vector<int>> Matrix)
    {
        int dp[n][n];
        memset(dp,0,sizeof(dp));
       
        for(int i=0;i<n;i++)
        dp[i][0]=Matrix[i][0];
        for(int i=0;i<n;i++)
        dp[0][i]=Matrix[0][i];
        
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j>0 && j<n-1)
                {
                    dp[i][j]=max(dp[i-1][j],max(dp[i-1][j-1],dp[i-1][j+1]))+Matrix[i][j];
                }
                else if(j==0)
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j+1])+Matrix[i][j];
                }
                else
                {
                    dp[i][j]=max(dp[i-1][j],dp[i-1][j-1])+Matrix[i][j];
                }
              
            }
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            ans=max(ans,dp[n-1][i]);
        }
        return ans;
    }
};
