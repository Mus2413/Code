#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,m,sum=0;
	    cin>>n;
	    m=n;
	    
	    while(m!=0)
	    {
	        sum+=m%10;
	        m=m/10;
	    }
	    bool flag=true;
	    while(flag)
	    {
	        
	       if(__gcd(sum,n)>1)
	       {
	        flag=false;
	        cout<<n<<endl;
	        break;
	       }
	    
	        //cout<<sum<<endl;
	        n++;
	        m=n;
	        sum=0;
	        while(m!=0)
	        {
	        sum+=m%10;
	        m=m/10;
	        }
	   
	    }
	    
	    
	    
	}
	return 0;
}