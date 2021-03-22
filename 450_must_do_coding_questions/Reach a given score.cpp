long long int count(long long int n)
{
	long long int dp[4][n+1];
	memset(dp, 0, sizeof(dp));
	for(int i=0;i<4;i++)
	dp[i][0]=1;
	// If 0 sum is required number of ways is 1.
	int a[]={3,5,10};
	// Your code here
	for(int i=1;i<4;i++)
	{
	    for(int j=1;j<=n;j++)
	    {
	        if(a[i-1]<=j)
	        {
	            dp[i][j]=dp[i][j-a[i-1]] + dp[i-1][j];
	        }
	        else
	        {
	            dp[i][j]=dp[i-1][j];
	        }
	    }
	}
	return dp[3][n];
}
