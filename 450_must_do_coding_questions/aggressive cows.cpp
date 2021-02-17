#include <bits/stdc++.h>
using namespace std;
bool solve(long long int mid,long long int a[],long long int n,long long int m)
{
	long long int sum=0,t=1;
	for(int i=0;i<n;i++)
	{
		sum+=a[i];
		if(a[i]>mid)
		return false;
		else if(sum>mid)
		{
			sum=a[i];
			t++;
			if(t>m)
			return false;
		}
	}
	return true;
}
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,m;
		cin>>n>>m;
		long long int a[n],sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		long long int low=0,high=sum,mid,ans;
		while(low<=high)
		{
			mid=low+(high-low)/2;
			if(solve(mid,a,n,m))
			{
				ans=mid;
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		cout<<ans<<endl;
	}
	return 0;
} 