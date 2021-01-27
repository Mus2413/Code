class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    // code here
	    long long int maxp=1,minp=1,res=1;
	    for(int i=0;i<n;i++)
	    {
	        long long int x=arr[i];
	        if(x<0)
	        swap(maxp,minp);
	        
	        maxp=max(maxp*x,x);
	        minp=min(minp*x,x);
	        res=max(res,maxp);
	    }
	    return res;
	}
};