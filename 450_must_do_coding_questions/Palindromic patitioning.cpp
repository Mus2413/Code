class Solution{
public:
    int dp[502][502];
    bool ispalindrome(string s,int i,int j)
    {
        while(i<=j)
        {
            if(s[i]!=s[j])
            return false;
            
            i++;
            j--;
        }
        return true;
    }
    int solve(string s,int i,int j)
    {
        if(i>=j)
        {
         dp[i][j]=0;
         return 0;
        }
         if(dp[i][j]!=-1)
        return dp[i][j];
        if(ispalindrome(s,i,j))
        {
           dp[i][j]= 0;
           return 0;
        }
       
        int ans=INT_MAX;
        for(int k=i;k<j;k++)
        {
            int temp=solve(s,i,k)+solve(s,k+1,j)+1;
            ans=min(ans,temp);
            
        }
        dp[i][j]=ans;
        return dp[i][j];
        
    }
    int palindromicPartition(string str)
    {
        memset(dp,-1,sizeof(dp));
        int n=str.length();
        return solve(str,0,n-1);
       
    }
};