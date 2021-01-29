bool find3Numbers(int arr[], int n, int x)
{
    //Your Code Here
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++)
    {
        
        int j=i+1,k=n-1;
        while(j<k)
        {
            int sum= arr[i] +arr[j]+arr[k];
            if(sum==x)
            return true;
            else if(sum>x)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
        
    }
    return false;
}