class Solution {
public:
    int dp[101][1001][2];
    int ans=0;
    int solve(vector<int>& prices,int i,int k,bool canbuy)
    {
        if(i==prices.size())
        {
            return 0;
        }
        if(dp[k][i][canbuy]!=-1)
            return dp[k][i][canbuy];
        if(k<0)
            return 0;
        if(k==0)
        {
            if(canbuy)
                return 0;
        }
        if(canbuy)
        {
            
                dp[k][i][canbuy]=max(-prices[i]+solve(prices,i+1,k-1,false) ,solve(prices,i+1,k,true));
           
        }
        else
        {
            
                dp[k][i][canbuy]=max(prices[i]+solve(prices,i+1,k,true) ,solve(prices,i+1,k,false));
          
        }
        return dp[k][i][canbuy];
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        int ans=solve(prices,0,k,true);
        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        const int n = prices.size();
        if (n <= 1) return 0;
        int maxP = 0, minP = prices[0];
        for (auto i = 1; i < n; ++i) {
            minP = min(minP, prices[i]);
            maxP = max(maxP, prices[i] - minP);
        }
        return maxP;
    }
};
