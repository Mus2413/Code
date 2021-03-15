#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    int n,u,r,d,l;
	    cin>>n>>u>>r>>d>>l;
	    bool falg=false;
	    for(int i=0;i<16;i++)
	    {
	        int w=u,x=r,y=d,z=l;
	        if(i&1)
	        {
	            w--;
	            z--;
	        }
	        if(i&2)
	        {
	            z--;
	            y--;
	        }
	        if(i&4)
	        {
	            y--;
	            x--;
	        }
	        if(i&8)
	        {
	            x--;
	            w--;
	        }
	        int a=min(w,min(x,min(y,z)));
	        int b=max(w,max(x,max(y,z)));
	        if(a>=0 && b<=n-2)
	        {
	            cout<<"YES"<<endl;
	            falg=true;
	            break;
	        }
	    }
	    if(!falg)
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}