#include<stdio.h>
int ans=0;
void tower_of_hanoi(int n,int a,int b,int c,int t[3][3])
{
    if(n>=1)
    {
        tower_of_hanoi(n-1,a,c,b,t);
        ans = ans + t[a][c];
        tower_of_hanoi(n-1,b,a,c,t);
    }
}
int main()
{
    int t[3][3],n,i,j;
    //printf("Enter array\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&t[i][j]);
   // printf("Enter number of disc\n");
    scanf("%d",&n);
    int a=0,b=2,c=1;
    //printf("Minimum cost\n");
    tower_of_hanoi(n,a,b,c,t);
    printf("\n%d",ans);
}
