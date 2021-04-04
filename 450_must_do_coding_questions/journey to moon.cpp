#define MAX 100000
int c;
void dfs(vector<vector<int>> adj,vector<bool>&visited,int u)
{
    visited[u]=true;
    c++;
    for(auto i: adj[u])
    {
        if(!visited[i])
         {
            dfs(adj,visited,i);
        }
    }
    return ;
    
}
int journeyToMoon(int n, vector<vector<int>> astronaut) 
{
    vector<vector<int>> adj(n);
    for(int i=0;i<astronaut.size();i++)
    {
        adj[astronaut[i][0]].push_back(astronaut[i][1]);
        adj[astronaut[i][1]].push_back(astronaut[i][0]);
    }
        
    vector<bool> visited(n);
    for(int i=0;i<n;i++)
    visited[i]=false;
    int eachComponent[MAX],numComponents=0;
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
        {
            c=0;
            dfs(adj,visited,i);
            eachComponent[numComponents]=c;
            numComponents++;
        }
    }
    
   //cout<<numComponents<<endl;
    long long int sameWays = 0;
    
    for(int i=0;i<numComponents;i++)
    {    
        //cout<<eachComponent[i]<<endl;
        for(int j=i+1;j<numComponents;j++)
        {
            sameWays+=eachComponent[i]*eachComponent[j];
        }
    }
    
    return ( sameWays);
}

