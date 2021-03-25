class Solution{
public:
   // int dp[202][202][2];
   unordered_map<string,int>mp;
    int solve(string s,int i,int j, int k)
    {
        if(i>j)
        return 0;
        if(i==j)
        {
            if(k==1)
            {
                return s[i]=='T';
            }
            else
            {
                return s[i]=='F';
            }
        }
        //if(dp[i][j][k]!=-1)
        //return dp[i][j][k];
        string temp="";
        temp+=to_string(i);
        temp.push_back('_');
        temp+=to_string(j);
        temp.push_back('_');
         temp+=to_string(k);
         if(mp.find(temp)!=mp.end())
         return mp[temp];
        int ans=0;
        for(int x=i+1;x<j;x+=2)
        {
            int lt=solve(s,i,x-1,1);
            int lf=solve(s,i,x-1,0);
            int rt=solve(s,x+1,j,1);
            int rf=solve(s,x+1,j,0);
            if(s[x]=='&')
            {
                if(k==1)
                {
                    ans+=lt*rt;
                }
                else
                {
                    ans+=lt*rf + lf*rf + lf*rt;
                }
            }
            else if(s[x]=='|')
            {
                
                if(k==0)
                {
                    ans+=lf*rf;
                }
                else
                {
                    ans+=lt*rf + lt*rt + lf*rt;
                }
            }
            else if(s[x]=='^')
            {
                
                if(k==1)
                {
                    ans+=lf*rt + lt*rf;
                }
                else
                {
                    ans+= lt*rt + lf*rf;
                }
            }
            
        }
        mp[temp]=ans%1003;
        return ans%1003;
    }
    int countWays(int N, string S){
        //memset(dp,-1,sizeof(dp));
        
        return solve(S,0,N-1,1);
    }
};