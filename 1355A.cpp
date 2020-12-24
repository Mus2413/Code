#include <bits/stdc++.h>
using namespace std;
long long int getminmax(long long int x)
{
    int minele=INT_MAX,maxele=INT_MIN;
    while(x!=0)
    {
        int r=x%10;
        minele=min(minele,r);
        maxele=max(maxele,r);
        x=x/10;
    }
    return minele*maxele;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int a,k;
	    cin>>a>>k;
	    while(k>1)
	    {
	        long long int mul=getminmax(a);
	        if(mul==0)
	        {
	            break;
	        }
	        a=a+mul;
	        k--;
	    }
	    cout<<a<<endl;
	}
	return 0;
}