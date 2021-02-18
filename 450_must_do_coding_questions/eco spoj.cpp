#include <bits/stdc++.h>
using namespace std;
long long int solve(long long int a[],long long int n,long long int mid)
{
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]>mid)
		{
			sum+=a[i]-mid;
		}
	}
	return sum;
}
int main() {
	long long int n,k;
	cin>>n>>k;
	long long int a[n];
	long long int end=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		end=max(end,a[i]);
	}
	long long int start=0,mid,ans=0;
	while(start<=end)
	{
		mid=start+(end-start)/2;
		long long int x=solve(a,n,mid);
		if(x==k)
		{
			ans=mid;
			break;
		}
		else if(x>k)
		{
			ans=mid;
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	cout<<ans<<endl;
	return 0;
} 