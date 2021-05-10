#include <bits/stdc++.h>

using namespace std;

int subsum(vector<int> a,int n)
{
    int s=0;
    int ma=1;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++)
    {
        s=s+a[i];
        if(s==0)
            ma=max(ma,i+1);
        else if(m[s])
            ma=max(ma,i-m[s]);
        else    
            m[s]=i;
    }
    return ma;
}

void sumZeroMatrix(int mat[][4],int r,int c)
{
    int ma=INT_MIN;
    for(int i=0;i<r;i++)
    {
        vector<int> ans(c,0);
        for(int j=i;j<r;j++)
        {
            for(int col=0;col<c;col++)
            {
                if(mat[j][col]==1)
                    ans[col]++;
                else
                    ans[col]--;
            }
            
        }
        int x=subsum(ans,c);
        cout<<x<<" "<<r-i<<endl;
        ma = max(ma,x*(r-i));
    }
    cout<<ma<<endl;
}

int main()
{
    int mat[4][4] = { {0, 0, 1, 1},
                      {0, 1, 1, 0},
                      {1, 1, 1, 0},
                      {1, 0, 0, 1} };    
    int row = 4, col = 4;
    sumZeroMatrix(mat, row, col);
    return 0;                      
                        
}