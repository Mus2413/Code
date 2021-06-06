class Solution{
public:
    vector<vector<int>>ans;
    bool issafe(int grid[][11],int n,int i,int j)
    {
        for(int x=i-1;x>=0;x--)
        if(grid[x][j])
        return false;
        
        int x=i-1;
        int y=j-1;
        while(x>=0 && y>=0)
        {
            if(grid[x][y])
            return false;
            
            x--;
            y--;
        }
        
        x=i-1;
        y=j+1;
        while(x>=0 && y<n)
        {
            if(grid[x][y])
            return false;
            
            x--;
            y++;
        }
        return true;
    }
    bool solve(int grid[][11],int n,vector<int>&temp , int i)
    {
        if(i==n)
        {
            ans.push_back(temp);
            return false;
        }
        for(int j=0;j<n;j++)
        {
            grid[i][j]=1;
            if(issafe(grid,n,i,j))
            {
                temp.push_back(j+1);
                bool res=solve(grid,n,temp,i+1);
                temp.pop_back();
                if(res)
                return true;
                
                
            }
            grid[i][j]=0;
        }
        return false;
    }
    vector<vector<int>> nQueen(int n) {
        // code here
        vector<int>temp;
        int grid[n][11];
        memset(grid,0,sizeof(grid));
        bool t=solve(grid,n,temp,0);
        
        return ans;
    }
};