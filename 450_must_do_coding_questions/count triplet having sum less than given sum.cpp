class Solution{
	
	
	public:
	long long countTriplets(long long arr[], int n, long long sum)
	{
	    sort(arr,arr+n);
	    long long count=0,i,j,k;
	    for(i=0;i<n-2;i++)
	    {
	        j=i+1;
	        k=n-1;
	        while(j<k)
	        {
	            long long s=arr[i]+arr[j]+arr[k];
	            if(s<sum)
	            {
	                count+=(k-j);
	                j++;
	            }
	            else
	            {
	                k--;;
	            }
	        }
	    }
	    return count;
	}
		 

};