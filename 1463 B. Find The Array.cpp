#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long long int x[n],sum=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>x[i];
	        sum+=x[i];
	    }
	    long long int count[2];
	    count[0]=0;
	    count[1]=0;
	    for(int i=0;i<n;i++)
	    {
	        count[i%2]+=x[i]-1;
	    }
	    for(int j=0;j<2;j++)
	    {
	        if(2*count[j]>sum)
	        continue;
	        for(int i=0;i<n;i++)
	        {
	            if(i%2==j)
	            {
	                x[i]=1;
	            }
	        }
	        break;
	        
	    }
	    for(int i=0;i<n;i++)
	    cout<<x[i]<<" ";
	    cout<<endl;
	}
	return 0;
}