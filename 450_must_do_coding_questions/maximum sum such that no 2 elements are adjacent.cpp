// Function to return maximum of sum without adjacent elements
ll FindMaxSum(ll arr[], ll n)
{
    if(n==1)
    return arr[0];
    else if(n==2)
    return max(arr[0],arr[1]);
    ll dp[n];
    dp[0]=arr[0];
    dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;i++)
    {
        dp[i]=max(dp[i-2]+arr[i],dp[i-1]);
    }
    return dp[n-1];
    
}
