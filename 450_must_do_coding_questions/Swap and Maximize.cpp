long long int maxSum(int a[], int n)
{
    sort(a,a+n);
    int i=0;
    int j=n-1;
    long long int sum=0;
    int count=0;
    while(i<j)
    {
        sum+=abs(a[i]-a[j]);
        if(count%2==0)
        i++;
        else
        j--;
        
        count++;
    }
    sum+=+abs(a[j]-a[0]);
    return sum;
}