int countPS(string str)
{
   int n=str.length();
   int dp[2][n];
   memset(dp,0,sizeof(dp));
   for(int i=n-1;i>=0;i--)
   {
       for(int j=i;j<n;j++)
       {
           if(i==j)
           dp[i%2][j]=1;
           else if(str[i]==str[j])
           {
               dp[i%2][j]=dp[1-i%2][j]+dp[i%2][j-1]+1;
           }
           else
           {
               dp[i%2][j]=dp[1-i%2][j]+dp[i%2][j-1]-dp[1-i%2][j-1];
           }
       }
   }
   return dp[0][n-1];
}