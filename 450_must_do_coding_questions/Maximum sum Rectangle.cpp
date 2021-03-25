#include <bits/stdc++.h>
using namespace std;

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
  
    for (int i=0; i< size; i++ )
    {
        max_ending_here += a[i];
  
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
           
        }
  
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
        }
    }
      
    return max_so_far;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int mat[n][m];
	    for(int i=0;i<n;i++)
	    {
	        for(int j=0;j<m;j++)
	        {
	            cin>>mat[i][j];
	        }
	    }
	    int maxans=INT_MIN;
	    for(int i=0;i<n;i++)
	    {
	        int a[m];
	        memset(a,0,sizeof(a));
	        for(int j=i;j<n;j++)
	        {
	            for(int k=0;k<m;k++)
	            {
	                a[k]+=mat[j][k];
	            }
	        }
	        int ans=maxSubArraySum(a,m);
	        maxans=max(maxans,ans);
	    }
	    cout<< maxans<<endl;
	}
	return 0;
}