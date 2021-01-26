#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	bool isneg=true;
	for(int i=0;i<n;i++)
	{
	    if(isneg)
	    {
	        if(a[i]>0)
	        {
	            bool found=false;
	            int j;
	            for(j=i+1;j<n;j++)
	            {
	                if(a[j]<0)
	                {
	                    found=true;
	                    break;
	                }
	            }
	            if(found)
	            {
	                for(int k=j;k>i;k--)
	                {
	                    swap(a[k],a[k-1]);
	                }
	            }
	        }
	    }
	    else
	    {
	        if(a[i]<0)
	        {
	            bool found=false;
	            int j;
	            for( j=i+1;j<n;j++)
	            {
	                if(a[j]>0)
	                {
	                    found=true;
	                    break;
	                }
	            }
	            if(found)
	            {
	                for(int k=j;k>i;k--)
	                {
	                    swap(a[k],a[k-1]);
	                }
	            }
	        }
	    }
	    isneg=!isneg;
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<" ";
	return 0;
}