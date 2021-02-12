#include <bits/stdc++.h>
using namespace std;
int firstocurrence(int a[],int n,int m)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==m)
        {
            ans=mid;
            end=mid-1;
        }
        else if(a[mid]>m)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}
int lastocuurence(int a[],int n,int m)
{
    int start=0,end=n-1,ans=-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        if(a[mid]==m)
        {
            ans=mid;
            start=mid+1;
        }
        else if(a[mid]>m)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return ans;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    int a[n];
	    for(int i=0;i<n;i++)
	       cin>>a[i];
	    int x=firstocurrence(a,n,m);
	    if(x==-1)
	    {
	        cout<<"-1"<<endl;
	    }
	    else
	    {
	        int y=lastocuurence(a,n,m);
	        cout<<x<<" "<<y<<endl;
	    }
	    
	}
	return 0;
}