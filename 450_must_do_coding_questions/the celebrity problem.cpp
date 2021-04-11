class Solution {
    public:
    bool knows(vector<vector<int> >& M,int a, int b)
   {
    return M[a][b];
   }
    int celebrity(vector<vector<int> >& M, int n) {
       int indegree[n]={0},outdegree[n]={0};
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int x = knows(M,i,j);
            outdegree[i]+=x;
            indegree[j]+=x;
        }
    }
    for(int i=0; i<n; i++)
    if(indegree[i] == n-1 && outdegree[i] == 0)
        return i;
    
    return -1;
    }
};
