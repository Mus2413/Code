class Solution{   
public:
    
    
    int median(vector<vector<int>> &A, int M, int N){
        
int k = ( M*N + 1 )/2 ;

int a = INT_MAX ;
int b = INT_MIN ;

for( int i = 0 ; i < M ; i++ )
{
a = min( a , A[i][0] ) ;
b = max( b , A[i][N-1] ) ;
}

while( a < b )
{
int m = ( a + b )/2 ;

int cnt = 0 ;

for( int i = 0 ; i < M ; i++ )
cnt = cnt + ( upper_bound( A[i].begin() , A[i].end() , m ) - A[i].begin() ) ;

if( cnt < k )a = m + 1 ;
else b = m ;
}

return a ;
    }
};