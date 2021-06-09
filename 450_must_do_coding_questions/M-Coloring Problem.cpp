bool valid(bool graph[101][101] , int V,int src,int c,vector<int>&color)
{
    for(int i=0;i<V;i++)
    {
        if(graph[i][src]==1 && color[i]==c)
        return false;
    }
    return true;
}
bool colorassign(bool graph[101][101], int m, int V , int src,vector<int>&color)
{
    if(src==V)
    return true;
    
    for(int j=1;j<=m;j++)
    {
        if(valid(graph,V,src,j,color))
        {
            color[src]=j;
            if(colorassign(graph, m , V, src+1,color))
            {
                return true;
            }
            color[src]=0;
        }
    }
    
    return false;
}
bool graphColoring(bool graph[101][101], int m, int V)
{
    // your code here
    vector<int>color(V,0);
    return colorassign(graph, m , V, 0,color);
}
