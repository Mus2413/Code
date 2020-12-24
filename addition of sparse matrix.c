#include <stdio.h>
struct sparsh
{
    int row;
    int col;
    int values;
};
int main()
{
    int r,c,i,j,A[10][10],N[10][10],k=0,l=0;
    struct sparsh B[20],C[20],D[20];
    printf("enter no of rows and column u want to add\n");
    scanf("%d%d",&r,&c);
    printf("enter values in matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&A[i][j]);
            if(A[i][j]!=0)
            {
                B[k].row=i;
                B[k].col=j;
                B[k].values=A[i][j];
                k++;
            }
        }
    }
    printf("\nrows\tcolumns\tvalues");
    for(i=0;i<k;i++)
    printf("\n%d\t%d\t%d",B[i].row,B[i].col,B[i].values);
    printf("\nenter values in 2nd matrix\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&N[i][j]);
            if(N[i][j]!=0)
            {
                C[l].row=i;
                C[l].col=j;
                C[l].values=N[i][j];
                l++;
            }
        }
    }
    printf("\nrows\tcolumns\tvalues");
    for(i=0;i<l;i++)
    printf("\n%d\t%d\t%d",C[i].row,C[i].col,C[i].values);
    i=0;
    j=0;
    int p=0;
    while(i<k && j<l)
    {
        if(B[i].row==C[j].row)
        {
            D[p].row=C[j].row;
            if(B[i].col==C[j].col)
            {
                D[p].col=C[j].col;
                D[p].values=C[j].values+B[i].values;
                p++;
                j++;
                i++;
            }
            else if(B[i].col>C[j].col)
                {
                    D[p].col=C[j].col;
                    D[p].values=C[j].values;
                    p++;
                    j++;
                }
            else
                {
                    D[p].col=B[i].col;
                    D[p].values=B[i].values;
                    p++;
                    i++;
                }
        }
            else if(B[i].row<C[j].row)
                {
                    D[p].row=B[i].row;
                    D[p].col=B[i].col;
                    D[p].values=B[i].values;
                    p++;
                    i++;
                }
            else
                {
                    D[p].row=C[j].row;
                    D[p].col=C[j].col;
                    D[p].values=C[j].values;
                    p++;
                    j++;
                }
    }
    if(i>=k)
    {
        for(;j<l;j++)
        {
            D[p].row=C[j].row;
            D[p].col=C[j].col;
            D[p].values=C[j].values;
            p++;
        }
    }
    if(j>=l)
    {
        for(;i<k;i++)
        {
            D[p].row=B[i].row;
            D[p].col=B[i].col;
            D[p].values=B[i].values;
            p++;
        }
    }
    printf("\nrows\tcolumns\tvalues");
    for(i=0;i<p;i++)
    printf("\n%d\t%d\t%d",D[i].row,D[i].col,D[i].values);
    return 0;

}

