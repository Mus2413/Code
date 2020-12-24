#include<stdio.h>
#include<stdlib.h>
int heapify(int A[],int n,int i)
{
    int num;
    int largest=i;
    int l=2*i+1;
    int r=2*i+2;
    if(l<n && A[l]>A[largest])
        largest=l;
    if(r<n && A[r]>A[largest])
        largest=r;
    if(largest != i)
    {
        num=A[largest];
        A[largest]=A[i];
        A[i]=num;

    heapify(A,n,largest);
    }
}
int delete_node(int A[],int n)
{
    int last;
    last=A[n-1];
    A[0]=A[last];
    n=n-1;
    heapify(A,n,0);
}

int main()
{
    int A[5]={10,5,3,2,4};
    int n=5,i;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
    delete_node(A,n);
    printf("Root node deleted\n");
    n=n-1;
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }

}
