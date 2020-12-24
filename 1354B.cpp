#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    long long int n=s.length();
	    if(n<3)
	    cout<<"0"<<endl;
	    else
	    {
	        long long int j=0,i=0,count=0,minans=INT_MAX;
	        unordered_map<char,long long int> mp;
	        while(j<n)
	        {
	            mp[s[j]]++;
	            if(mp[s[j]]==1)
	            {
	                count++;
	            }
	            if(count==3)
	            {
	                minans=min(minans,j-i+1);
	                //cout<<j-i+1<<endl;
	                while(count==3 && i<=j)
	                {
	                    //cout<<"i = "<<i;
	                    mp[s[i]]--;
	                    if(mp[s[i]]==0)
	                    {
	                        count--;
	                        //cout<<" "<<j-i+1<<endl;
	                        minans=min(minans,j-i+1);
	                    }
	                    
	                    i++;
	                }
	            }
	            j++;
	        }
	        if(minans==INT_MAX)
	        cout<<"0"<<endl;
	        else
	        cout<<minans<<endl;
	    }
	}
	return 0;
}