int findx(int a[],int size)
{
    int ind=0,count=1;
    for(int i=1;i<size;i++)
    {
        if(a[ind]==a[i])
        count++;
        else
        count--;
        if(count==0)
        {
            ind=i;
            count=1;
        }
    }
    return a[ind];
}
int majorityElement(int a[], int size)
{
    int x=findx(a,size);
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==x)
        count++;
    }
    if(count>size/2)
    return x;
    else
    return -1;
}