#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    long long int p[n],c[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>p[i]>>c[i];
	    }
	    bool flag=false;
	    if(p[0]>=c[0])
	    {
	        for(int i=1;i<n;i++)
	        {
	            if( (p[i]-p[i-1]) >= (c[i]-c[i-1]) && (c[i]-c[i-1]>=0) && c[i]<=p[i])
	            {
	                continue;
	            }
	            else
	            {
	                flag=true;
	                break;
	            }
	        }
	        if(!flag)
	        cout<<"YES"<<endl;
	        else
	        cout<<"NO"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}