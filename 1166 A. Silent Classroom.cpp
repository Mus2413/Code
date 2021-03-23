#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	string s[n];
	map<char,int>mp;
	for(int i=0;i<n;i++)
	{
	    cin>>s[i];
	    mp[s[i][0]]++;
	}
	long long int ans=0;
	for(auto x:mp)
	{
	    if(x.second%2!=0 )
	    {
	        int y=x.second/2+1;
	        if(y>1)
	        ans+=(y)*(y-1)/2;
	        y--;
	        if(y>1)
	        ans+=(y)*(y-1)/2;
	        
	    }
	    else 
	    {
	        int y=x.second/2;
	        if(y>1)
	        ans+=(y)*(y-1);
	    }
	}
	cout<<ans<<endl;
	return 0;
}