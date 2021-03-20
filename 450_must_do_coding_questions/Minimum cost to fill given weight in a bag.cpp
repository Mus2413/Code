
class Solution{
		

	public:
	#define INF INT_MAX
	int minimumCost(int cost[], int n, int W) 
	{ 
   
    vector<int>  wt;
 
    
    
    for (int i=0; i<n; i++)
    {
        
            wt.push_back(i+1);
        
    }
 

    long long int min_cost[n+1][W+1];
 
  
 
    for (int i=0; i<=n; i++)
    {
        for (int j=0; j<=W; j++)
        {
            
            if(i==0)
              min_cost[i][j]=INF;
            else if(j==0)
            {
                min_cost[i][j]=0;
            }
            else if (wt[i-1] <= j && cost[i-1]!=-1)
                min_cost[i][j] = min(min_cost[i-1][j], min_cost[i][j-wt[i-1]] + cost[i-1]);
            else
                 min_cost[i][j] = min_cost[i-1][j];
        }
    }

    return (min_cost[n][W]==INF)? -1: min_cost[n][W];
        
	} 
};

