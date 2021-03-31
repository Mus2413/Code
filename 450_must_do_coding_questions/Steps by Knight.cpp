int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    int dx[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
        int dy[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
        bool visited[N+1][N+1];
        memset(visited,false,sizeof(visited));
        queue<pair<pair<int,int>,int>>q;
        q.push({{KnightPos[0],KnightPos[1]},0});
        visited[KnightPos[0]][KnightPos[1]]=true;
        while(!q.empty());
        {
            int x=q.front().first.first;
            int y=q.front().first.second;
            int dis=q.front().second;
            q.pop();
            if(x==TargetPos[0] && y==TargetPos[1])
            return dis;
            for(int i=0;i<8;i++)
            {
                int a=x+dx[i];
                int b=y+dy[i];
                if( a>0 && a<=N && b>0 && b<=N && visited[a][b]==false )
                {
                    q.push({{a,b},dis+1});
                    visited[a][b]=true;
                }
            }
        }
        return -1;
	}