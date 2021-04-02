	int isNegativeWeightCycle(int V, vector<vector<int>>graph){
	    // Code here
	    int E=graph.size();
	    int dis[V];
    for (int i = 0; i < V; i++)
        dis[i] = INT_MAX;
    dis[0] = 0;
    for (int i = 0; i < V - 1; i++) {
 
        for (int j = 0; j < E; j++) {
            if (dis[graph[j][0]] != INT_MAX && dis[graph[j][0]] + graph[j][2] <
                               dis[graph[j][1]])
                dis[graph[j][1]] =
                  dis[graph[j][0]] + graph[j][2];
        }
    }
    for (int i = 0; i < E; i++) {
        int x = graph[i][0];
        int y = graph[i][1];
        int weight = graph[i][2];
        if (dis[x] != INT_MAX &&
                   dis[x] + weight < dis[y])
            return true;
    }
    return false;
	}