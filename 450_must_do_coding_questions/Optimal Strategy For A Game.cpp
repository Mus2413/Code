int dp[101][101];
long long max_a(int arr[],int i,int j){
if(i>j)
return 0;
if(dp[i][j]!=-1)
return dp[i][j];
return dp[i][j]=max(arr[i]+min(max_a(arr,i+1,j-1),max_a(arr,i+2,j)),arr[j]+min(max_a(arr,i+1,j-1),max_a(arr,i,j-2)));
}


long long maximumAmount(int arr[], int n)
{
memset(dp,-1,sizeof(dp));
return max_a(arr,0,n-1);
}