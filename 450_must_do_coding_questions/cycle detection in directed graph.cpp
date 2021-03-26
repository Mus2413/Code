bool isCyclic(int V, vector<int> adj[]) {
    vector<int> in_degree(V, 0);
    for (int u = 0; u < V; u++) {
        for (auto v : adj[u])
            in_degree[v]++;
    }
    queue<int> q;
    for (int i = 0; i < V; i++)
        if (in_degree[i] == 0)
            q.push(i);
 
    int cnt = 0;
  
    while (!q.empty()) {
 
        int u = q.front();
        q.pop();
        
        
        for (auto x:adj[u])
 
            
            if (--in_degree[x] == 0)
                q.push(x);
 
        cnt++;
    }
    if(cnt!=V)
    return true;
    else
    return false;
	}