#include <bits/stdc++.h>
using namespace std;
bool solve( int mid, int a[], int n,int m)
{
	 int sum=0,t=1;
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

int findPages(int arr[], int n, int m) {
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    int l=0,h=sum,mid=0,ans=-1;
    while(l<=h)
    {
        mid=l+(h-l)/2;
        if(solve(mid,arr,n,m))
        {
            ans=mid;
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return ans;
}

