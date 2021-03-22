
int maxSubarraySum(int a[], int n){
    int ans=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        ans=max(ans,sum);
        if(sum<0)
        sum=0;
    }
    return ans;
    
}