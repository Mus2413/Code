class Solution {
	public:
		int LongestRepeatingSubsequence(string str){
		    string b=str;
		   
		    int n=b.length();
		    int dp[n+1][n+1];
		    memset(dp,0,sizeof(dp));
		    int maxans=0;
		    for(int i=1;i<=n;i++)
		    {
		        for(int j=1;j<=n;j++)
		        {
		            if(str[i-1]==b[j-1] && i!=j)
		            {
		                dp[i][j]=dp[i-1][j-1]+1;
		                maxans=max(maxans,dp[i][j]);
		            }
		            else
		            {
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		            }
		        }
		    }
		    return maxans;
		}

};