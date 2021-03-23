class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.size();
        bool dp[n+1][n+1];
        memset(dp,false,sizeof(dp));
        string result="";
        result+=s[0];
        for(int i=0;i<=n;i++)
            dp[i][i]=true;
        for(int i=n-1;i>=0;i--)
            for(int j=i+1;j<n;j++)
            {
                if(s[i]==s[j])
                {
                    if(dp[i+1][j-1] || j-i==1)
                    {
                        dp[i][j]=true;
                        if(result.size()<j-i+1)
                        {
                            result=s.substr(i,j-i+1);
                        }
                    }
                }
            }
        return result;
    }
};