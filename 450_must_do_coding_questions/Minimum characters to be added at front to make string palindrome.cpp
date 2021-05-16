
int Solution::solve(string s) {
     int n=s.length();
    bool dp[n+1][n+1];
    memset(dp,false,sizeof(dp));
    int len=1,start=0,end=0;
    for(int i=0;i<=n;i++)
    {
        dp[i][i]=true;
    }
    int k=2;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        {
            dp[i][i+1]=true;
            if(len<k && i==0)
            {
                len=k;
                start=i;
            }
        }
    }
    for(int k=3;k<=n;k++)
    {
        for(int i=0;i<n-k+1;i++)
        {
            int j=i+k-1;
            if(dp[i+1][j-1] && s[i]==s[j])
            {
                dp[i][j]=true;
                if(len<k && i==0)
                {
                    len=k;
                    start=i;
                }
            }
        }
    }
  
    if(start==0)
    {
        return s.size()-len;
    }
    else
    return s.size()-1;
    
}
