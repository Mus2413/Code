#include<bits/stdc++.h>
using namespace std;
long long int bs(long long int a[],long long int n,long long int x)
{
	long long int start=0,end=n-1,ans=-1;
	while(start<=end)
	{
		long long int mid=start+(end-start)/2;
		if(a[mid]<=x)
		{
			ans=max(ans,mid);
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
	}
	return ans;
}
int main()
{
	long long int n;
	cin>>n;
	long long int a[n],i,sum[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n);
	sum[0]=a[0];
	for(int i=1;i<n;i++)
	{
		sum[i]=sum[i-1]+a[i];
	}
	long long int q;
	cin>>q;
	while(q--)
	{
		long long int pow;
		cin>>pow;
		
		if(pow<a[0])
		{
			cout<<"0 0"<<endl;
		}
		else  if(pow>=a[n-1])
		{
			cout<<n<<" "<<sum[n-1]<<endl;
		}
		else
		{
			long long int ind=bs(a,n,pow);
			cout<<ind+1<<" "<<sum[ind]<<endl;
		}
	}

}