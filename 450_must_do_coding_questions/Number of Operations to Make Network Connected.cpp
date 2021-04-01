class Solution {
public:
    void bfs( vector<vector<int>>& graph,vector<bool> &visited,int i)
    {
        queue<int>q;
        q.push(i);
        visited[i]=true;
        while(!q.empty())
        {
            int x=q.front();
            q.pop();
            for(auto i:graph[x])
            {
                if(visited[i]==false)
                {
                    q.push(i);
                    visited[i]=true;
                }
            }
        }
        return ;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)
            return -1;
        vector<vector<int>>graph(n);
        for(int i=0;i<connections.size();i++)
        {
            int x=connections[i][0];
            int y=connections[i][1];
            graph[x].push_back(y);
            graph[y].push_back(x);
            
        }
       vector<bool>visited(n);
        for(int i=0;i<n;i++)
            visited[i]=false;
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                bfs(graph,visited,i);
                count++;
            }
        }
        return count-1;
    }
};