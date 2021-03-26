void solve(vector<int>adj[],vector<int>&ans,vector<bool>&visited,int src)
{
   
    visited[src]=true;
    ans.push_back(src);
    for(auto x:adj[src])
    {
        if(!visited[x])
        {
            solve(adj,ans,visited,x);
        }
    }
    return ;
}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    vector<int> ans;
	    vector<bool> visited(V);
	    for(int i=0;i<V;i++)
	    {
	        visited[i]=false;
	    }
	    for(int i=0;i<V;i++)
	    {
	        if(visited[i]==false)
	        {
	          
	            solve(adj,ans,visited,i);
	        }
	    }
	    return ans;
	}