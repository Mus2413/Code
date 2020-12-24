#include<stdio.h>
int mergesort(int A[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+h)/2;
        mergesort(A,l,mid);
        mergesort(A,mid+1,h);
        merge(A,l,mid,h);
    }
}
int merge(int A[],int l,int mid,int h )
{
    int n1=mid-l+1;
    int n2=h-mid;
    int L[n1],R[n2],i,j,k;
    for(i=0;i<n1;i++)
    {
        L[i]=A[i+l];
    }
    for(i=0;i<n2;i++)
    {
        R[i]=A[mid+1+i];
    }
    i=0;
    j=0;
    k=l;
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            k++;
            i++;
        }
        else
        {
            A[k]=R[j];
            j++;
            k++;
        }
    }
    if(i>=n1)
    {
        while(j<n2)
        {
            A[k]=R[j];
            k++;
            j++;
        }
    }
    if(j>=n2)
    {
        while(i<n1)
        {
            A[k]=L[i];
            i++;
            k++;
        }
    }

}
int main()
{
    int n,i;
    printf("Enter size of array\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter %d elements in array\n",n);
    for(i=0;i<n;i++)
        scanf("%d",&A[i]);
    printf("Before sorting\n");
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
    printf("\n\nAfter sorting\n");
    mergesort(A,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",A[i]);
}
