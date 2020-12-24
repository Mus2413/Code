#include<stdio.h>
void insert(int A[],int num,int pos)
{
    int m,item;
    A[pos]=num;
    m=pos;
    item=A[pos];
    while(m>0 && A[(m-1)/2]<A[m])
    {
        A[m]=A[(m-1)/2];
        m=(m-1)/2;
        A[m]=item;
    }

}
void heapify(int A[],int j,int a)
{
   int number;
    int largest=a;
    int l=2*a+1;
    int r=2*a+2;
    if(l<=j && A[l]>A[largest])
        largest=l;
    if(r<=j && A[r]>A[largest])
        largest=r;
    if(largest!=a)
    {
        number=A[a];
        A[a]=A[largest];
        A[largest]=number;
        heapify(A,j,largest);
    }
}
int main()
{
    int A[10]={0};
    insert(A,80,0);
    insert(A,11,1);
    insert(A,25,2);
    insert(A,79,3);
    insert(A,8,4);
    insert(A,32,5);
    insert(A,41,6);
    int i;
    for(i=0;i<7;i++)
        printf("%d ",A[i]);
    i=6;
   while(i>0)
   {
       int num;
       num=A[i];
       A[i]=A[0];
       A[0]=num;
       i=i-1;
       heapify(A,i,0);

   }
   printf("\n");
   for(i=0;i<7;i++)
        printf("%d ",A[i]);
}
