void dfs(vector<int> adj[],vector<bool>&visited,stack<int>&s,int x)
	{
	    visited[x]=true;
	    for(auto i:adj[x])
	    {
	        if(!visited[i])
	        {
	            dfs(adj,visited,s,i);
	        }
	    }
	    
	    s.push(x);
	}
	vector<int> topoSort(int V, vector<int> adj[]) {
	    stack<int>s;
	    vector<bool>visited(V);
	    for(int i=0;i<V;i++)
	    visited[i]=false;
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            dfs(adj,visited,s,i);
	        }
	    }
	    vector<int>ans(V);
	   
	    while(!s.empty())
	    {
	        ans.push_back(s.top());
	        s.pop();
	        
	    }
	    return ans;
	}