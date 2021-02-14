#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    unordered_map<int,int> mp;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        mp[a[i]]++;
	    }
	    bool flag=false;
	    for(int i=0;i<n;i++)
	    {
	        int x=a[i]+m;
	        int y=a[i]-m;
	        if(mp.find(x)!=mp.end() || mp.find(y)!=mp.end())
	        {
	            cout<<"1"<<endl;
	            flag=true;
	            break;
	        }
	    }
	    if(flag==false)
	    cout<<"-1"<<endl;
	}
	return 0;
}