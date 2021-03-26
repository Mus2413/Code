bool solve(vector<int>adj[],vector<bool>&visited,vector<int>&parent,int src)
{
    queue<int>q;
    q.push(src);
    visited[src]=true;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto x:adj[u])
        {
            if(visited[x]==false)
            {
                q.push(x);
                visited[x]=true;
                parent[x]=u;
            }
            else if(parent[u]!=x)
            {
                return true;
            }
        }
    }
    return false;
}
	bool isCycle(int V, vector<int>adj[]){
	    vector<bool>visited(V);
	    vector<int>parent(V);
	    for(int i=0;i<V;i++)
	    {
	        visited[i]=false;
	        parent[i]=-1;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(!visited[i])
	        {
	            if(solve(adj,visited,parent,i))
	            return true;
	        }
	    }
	    return false;
	}