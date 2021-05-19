#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll n;
	cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	ll m;
	cin>>m;
	ll b[m];
	for(int i=0;i<m;i++)
	cin>>b[i];
	ll i=0,j=0;
	ll path1=0,path2=0,sum=0;
	while(i<n && j<m)
	{
		if(a[i]<b[j])
		{
			path1+=a[i];
			i++;
		}
		else if(a[i]>b[j])
		{
			path2+=b[j];
			j++;
		}
		else
		{
		    //cout<<path1+a[i]<<" ";
		    //cout<<path2 + a[i]<<" , ";
			sum+=max(path1,path2)+a[i];
			i++;
			j++;
			path1=0;
			path2=0;
		}
	}

	while(i<n)
	{
		path1+=a[i];
		i++;
	}
	while(j<m)
	{
		path2+=b[j];
		j++;
	}
		sum+=max(path1,path2);
	cout<<sum<<endl;
	
	return 0;
}