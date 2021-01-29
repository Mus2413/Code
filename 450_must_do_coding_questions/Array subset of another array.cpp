#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    unordered_map<int,int>mp;
	    for(int i=0;i<n;i++)
	    {
	        int num;
	        cin>>num;
	        mp[num]++;
	    }
	    bool ans=false;
	    for(int i=0;i<m;i++)
	    {
	        int num;
	        cin>>num;
	        if(mp.find(num)==mp.end())
	          ans=true;
	    }
	    if(ans)
	    cout<<"No"<<endl;
	    else
	    cout<<"Yes"<<endl;
	}
	return 0;
}