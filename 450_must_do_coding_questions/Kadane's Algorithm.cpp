int maxSubarraySum(int a[], int n){
    
    // Your code here
    int maxele=INT_MIN;
    int maxsofar=0;
    for(int i=0;i<n;i++)
    {
        maxsofar+=a[i];
        if(maxsofar>maxele)
        maxele=maxsofar;
        if(maxsofar<0)
        maxsofar=0;
    }
    return maxele;
    
}