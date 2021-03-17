int productSubSeqCount(vector<int> &arr, int k) 
{ 
	int n = arr.size(); 
	int dp[k + 1][n + 1]; 
	memset(dp, 0, sizeof(dp)); 

	for (int i = 1; i <= k; i++) { 
		for (int j = 1; j <= n; j++) { 
		if(arr[j-1]<=i && arr[j-1]>0)
		{
		    dp[i][j]=dp[i/arr[j-1]][j-1]+1 + dp[i][j-1];
		}
		else
		{
		    dp[i][j]=dp[i][j-1];
		}
		} 
		
	} 
	return dp[k][n]; 
} 
 
