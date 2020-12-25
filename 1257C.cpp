#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long int n;
		cin>>n;
		long long int a[n];
		for(int i=0;i<n;i++)
			cin>>a[i];
		unordered_map<int,int>mp;
		long long int i=0,j=0,minans=INT_MAX;
		while(j<n)
		{
			mp[a[j]]++;
			if(mp[a[j]]==2)
			{
				minans=min(minans,j-i+1);
				while(mp[a[j]]==2)
				{
					minans=min(minans,j-i+1);
					mp[a[i]]--;
					i++;
				}
			}
			j++;
		}
		if(minans==INT_MAX)
			cout<<"-1"<<endl;
		else
			cout<<minans<<endl;
	}
}