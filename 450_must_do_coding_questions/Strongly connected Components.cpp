void dfsutil(vector<bool>&visited,vector<int>adj[],int u,int V)
    {
        visited[u]=true;
        for(auto x : adj[u])
        {
            if(!visited[x])
            {
               
                dfsutil(visited,adj,x,V);
            }
        }
        return ;
    }
    void dfs(vector<bool>&visited,vector<int>adj[],int u,int V,stack<int>&s)
    {
        visited[u]=true;
        for(auto x : adj[u])
        {
            if(!visited[x])
            {
               
                dfs(visited,adj,x,V,s);
            }
        }
        s.push(u);
        return ;
    }
    int kosaraju(int V, vector<int> adj[]) {
        stack<int>s;
        vector<bool>visited(V,false);
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                
                dfs(visited,adj,i,V,s);
            }
        }
        vector<int>g[V];
        for(int i=0;i<V;i++)
        {
            for(auto j:adj[i])
            {
                g[j].push_back(i);
            }
        }
        /*for(int i=0;i<V;i++)
        {
            cout<<i<<" - ";
            for(auto j:g[i])
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }*/
        
        for(int i=0;i<V;i++)
        visited[i]=false;
        int count=0;
        while(!s.empty())
        {
            int x=s.top();
            //cout<<x<<endl;
            s.pop();
             if(!visited[x])
            {
                //cout<<v[i]<<endl;
                count++;
                dfsutil(visited,g,x,V);
            }
            
        }
       
        
        
        return count;
        
    }