#include <stdio.h>
int main()
{
    int i,A[10],middle,a,num,first,last,s=0;
    scanf("%d",&a);
    printf("a=%d",a);
    printf("enter %d numbers in sorted manner\n",a);
    for(i=0;i<a;i++)
    scanf("%d",&A[i]);
    for(i=0;i<a;i++)
    printf("%d ",A[i]);
    while(s<2)
    {
    printf("\nenter a number to be searched\n");
    scanf("%d",&num);
    first=0;
    last=a-1;
    middle=(first+last)/2;
    while(first<=last)
    {
    if(num>A[middle])
    {
        first=first+1;
    }
    else if(num=A[middle])
    {
     printf("number found");
    break;
    }
    else if(num<A[middle])
    last=middle-1;
    middle=(first+last)/2;
    }
    s++;
    }
    if(first>last)
    printf("not found");
    return 0;
}
