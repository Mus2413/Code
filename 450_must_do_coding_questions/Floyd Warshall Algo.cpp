#define INF 99999 
	void shortest_distance(vector<vector<int>>&dist){
	    // Code here
	    int V=dist.size();
	    int i,j,k;
	    for(int i=0;i<V;i++)
	    {
	        for(int j=0;j<V;j++)
	        {
	            if(dist[i][j]==-1)
	            dist[i][j]=INF;
	        }
	    }
	   for (k = 0; k < V; k++) 
       { 
        for (i = 0; i < V; i++) 
        {
            for (j = 0; j < V; j++) 
            { 
                if (dist[i][k] + dist[k][j] < dist[i][j]) 
                    dist[i][j] = dist[i][k] + dist[k][j]; 
            } 
        } 
    } 
    for(int i=0;i<V;i++)
	    {
	        for(int j=0;j<V;j++)
	        {
	            if(dist[i][j]==INF)
	            dist[i][j]=-1;
	        }
	    }
    return;
	    
	}