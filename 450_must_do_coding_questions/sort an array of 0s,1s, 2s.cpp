void sort012(int a[], int n)
{
    // coode here 
    int low=0,high=n-1,i=0;
    while(i<=high)
    {
        if(a[i]==0)
        {swap(a[low],a[i]);
        low++;
        i++;
        }
        else if(a[i]==2)
        {
            swap(a[i],a[high]);
            high--;
            i++;
        }
        else
        {
            i++;
        }
    }
    return;
}