class Solution {
public:
   int isSafe(vector<vector<char>> grid,vector<vector<int>>& visited,int row,int col,int rows,int cols)
    {
        return ((row >= 0) && (row < rows) && (col >= 0) && (col < cols) && (grid[row][col]=='1' && !visited[row][col])); 
    }
    void dfs(vector<vector<char>> grid,vector<vector<int>> &visited,int row,int col,int rows,int cols)
    {
        static int rowNbr[] = { -1, -1, -1, 0, 0, 1, 1, 1 }; 
        static int colNbr[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 
        
        visited[row][col] = true; 
        
        for(int k=0;k<8;k++)
        {
            int x=row+rowNbr[k];
            int y=col+colNbr[k];
            if(isSafe(grid,visited,x,y,rows,cols))
                dfs(grid,visited,x,y,rows,cols);
        }
    }
    int numIslands(vector<vector<char>>& grid) 
    {
        int rows=grid.size();
        int cols=grid[0].size();
        
        vector<vector<int>> visited( rows , vector<int> (cols, 0)); 
        
        int count=0;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(!visited[i][j] && grid[i][j]=='1')
                {
                    dfs(grid,visited,i,j,rows,cols);
                    count++;
                }
            }
        }
        return count;
    }
     
    
        
    
};