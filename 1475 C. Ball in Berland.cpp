#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
	    int x[n],y[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>x[i];
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>y[i];
	        
	    }
	    int countx[a+1],county[b+1];
	    memset(countx,0,sizeof(countx));
	    memset(county,0,sizeof(county));
	    for(int i=0;i<n;i++)
	    {
	        countx[x[i]]++;
	        county[y[i]]++;
	    }
	    long long int count=0;
	    for(int i=0;i<n;i++)
	    {
	        count+=n-countx[x[i]]-county[y[i]]+1;
	    }
	    cout<<count/2<<endl;
	    
	    
	    
	}
	return 0;
}