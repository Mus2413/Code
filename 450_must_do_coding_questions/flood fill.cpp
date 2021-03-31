class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};
        int n=image.size();
        int m=image[0].size();
        bool visited[n][m];
        memset(visited,false,sizeof(visited));
        queue<pair<int,int>>q;
        q.push({sr,sc});
        int color=image[sr][sc];
        visited[sr][sc]=true;
        while(!q.empty())
        {
            int x=q.front().first;
            int y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++)
            {
                int a=x+dx[i];
                int b=y+dy[i];
                if(a>=0 && a<n && b>=0 && b<m && visited[a][b]==false && image[a][b]==color)
                {
                    //cout<<a<<" "<<b<<endl;
                    image[a][b]=newColor;
                    visited[a][b]=true;
                    q.push({a,b});
                }
            }
        }
        image[sr][sc]=newColor;
        return image;
    }
};