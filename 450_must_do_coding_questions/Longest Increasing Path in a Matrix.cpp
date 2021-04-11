class Solution {
private:
    vector<vector<int>> dp;
    vector<vector<int>> M;
    int R,C;
    bool isValid(int i,int j){
        if(i<0 or i>=R or j<0 or j>=C) return false;
        return true;
    }
    int x[4]{0,0,1,-1};
    int y[4]{1,-1,0,0};
    int dfs(int i,int j)
    {
        if(dp[i][j]!=-1) return dp[i][j];
        int maxPath=0;
        for(int k=0;k<4;k++)
        {
            int ni=i+x[k];
            int nj=j+y[k];
            if(isValid(ni,nj) and M[ni][nj]>M[i][j]) maxPath=max(maxPath,dfs(ni,nj));
        }
        return dp[i][j]=1+maxPath;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& m) {
        R=m.size();
        C=m[0].size();
        M=m;
        dp.resize(R,vector<int>(C,-1));
        int ans=0;
        for(int i=0;i<R;i++)
        {
            for(int j=0;j<C;j++)
            {
                ans=max(ans,dfs(i,j));
            }
        }
        return ans;
    }
};
