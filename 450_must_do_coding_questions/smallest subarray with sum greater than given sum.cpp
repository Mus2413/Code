int sb(int a[], int n, int x)
{
    int i=0,j=0,sum=0,ans=INT_MAX;
    while(i<n)
    {
        sum+=a[i];
        if(sum>x)
        {
            while(sum>x)
            {
                ans=min(ans,i-j+1);
                sum=sum-a[j];
                j++;
            }
        }
        i++;
    }
    return ans;
}