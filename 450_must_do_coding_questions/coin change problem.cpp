long long dp[m+1][n+1];
       int i,j;
       for(i=0;i<=m;i++)
       {
           dp[i][0]=1;
       }
       for(j=1;j<=n;j++)
       {
           dp[0][j]=0;
       }
       for(i=1;i<=m;i++)
       {
           for(j=1;j<=n;j++)
           {
               if(s[i-1]<=j)
               {
                   dp[i][j]= dp[i][j-s[i-1]] + dp[i-1][j];
               }
               else
               {
                   dp[i][j]=dp[i-1][j];
               }
           }
       }
       return dp[m][n];
    }