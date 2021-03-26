void solve(vector<int> adj[],vector<bool>&visited,vector<int>&ans,int src)
    {
        visited[src]=true;
        queue<int>q;
        q.push(src);
        while(!q.empty())
        {
            int u=q.front();
            q.pop();
            ans.push_back(u);
            for(auto x:adj[u])
            {
                if(visited[x]==false)
                {
                    q.push(x);
                    visited[x]=true;
                }
            }
        }
        return ;
    }
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    vector<int>ans;
	    vector<bool>visited(V);
	    for(int i=0;i<V;i++)
	    visited[i]=false;
	    
	            solve(adj,visited,ans,0);
	        
	    return ans;
	}