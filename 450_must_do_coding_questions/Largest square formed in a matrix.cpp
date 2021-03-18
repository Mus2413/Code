 class Solution{
public:
    int maxSquare(int R, int C, vector<vector<int>> M){
        int i,j;  
    int S[R][C];  
    int max_of_s, max_i, max_j;  
    for(i = 0; i < R; i++)  
        S[i][0] = M[i][0]; 
    for(j = 0; j < C; j++)  
        S[0][j] = M[0][j];  
   
    for(i = 1; i < R; i++)  
    {  
        for(j = 1; j < C; j++)  
        {  
            if(M[i][j] == 1)  
                S[i][j] = min(S[i][j-1],min( S[i-1][j],   S[i-1][j-1])) + 1;  
            else
                S[i][j] = 0;  
        }  
    }  
      
    max_of_s = S[0][0]; max_i = 0; max_j = 0;  
    for(i = 0; i < R; i++)  
    {  
        for(j = 0; j < C; j++)  
        {  
            if(max_of_s < S[i][j])  
            {  
                max_of_s = S[i][j];  
                max_i = i;  
                max_j = j;  
            }  
        }              
    }  
  return max_of_s;
  
  
    }
};