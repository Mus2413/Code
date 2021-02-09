#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int maxfreq=0;
	    unordered_map<char,int>mp;
	    for(int i=0;i<s.length();i++)
	    {
	        mp[s[i]]++;
	        maxfreq=max(maxfreq,mp[s[i]]);
	    }
	    int rem=s.length()-maxfreq;
	    if(rem<maxfreq)
	    {
	        cout<<"0"<<endl;
	    }
	    else
	    {
	        cout<<"1"<<endl;
	    }
	}
	return 0;
}