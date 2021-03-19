#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int a[n];
	    int visited[n];
	    memset(visited,0,sizeof(visited));
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        
	    }
	    long long int mn=INT_MAX;
	    for(int i=n-1;i>=0;i--)
	    {
	        mn=min(mn,i-a[i]);
	        if(mn<i)
	        {
	            visited[i]=1;
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        cout<<visited[i]<<" ";
	    }
	    cout<<endl;
	    
	    
	}
	return 0;
}