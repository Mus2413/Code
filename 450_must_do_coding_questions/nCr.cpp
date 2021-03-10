class Solution{
public:
    int nCr(int n, int k){
    
    if(k>n)
    return 0;
    if(k==0 || k==n)
    return 1;
       int C[n + 1][k + 1];
       int i, j;
       for (i = 0; i <= n; i++) {
        for (j = 0; j <= min(i, k); j++) {
            if (j == 0 || j == i)
                C[i][j] = 1;
            else
                C[i][j] = (C[i - 1][j - 1]%1000000007 + C[i - 1][j]%1000000007)%1000000007;
        }
    }
 
    return C[n][k];
    }
};