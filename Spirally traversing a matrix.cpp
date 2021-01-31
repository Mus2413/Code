class Solution
{   
public:     
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> ans;
        int i=0,j=r-1,x=0,y=c-1;
        int dir=0;
        while(i<=j && x<=y )
        {
            if(dir==0){
            for(int a=x;a<=y;a++)
            {
                ans.push_back(matrix[i][a]);
            }
            i++;
            }
            else if(dir==1){
            for(int a=i;a<=j;a++)
            {
                ans.push_back(matrix[a][y]);
            }
            y--;
            }
            else if(dir==2){
                for(int a=y;a>=x;a--)
                {
                    ans.push_back(matrix[j][a]);
                }
                j--;
            }
            else if(dir==3){
                for(int a=j;a>=i;a--)
                {
                    ans.push_back(matrix[a][x]);
                }
                x++;
            }
            dir=(dir+1)%4;
            
        }
        return ans;
    }
};