#include<stdio.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
struct tree  * temp,*start=NULL,*node;
struct tree * createnode()
{
    struct tree * n;
    n=(struct tree *)malloc(sizeof(struct tree));
    return(n);
}
void insert_node()
{
    int i=0;
    while(i<7)
    {
    temp=createnode();
    printf("Enter data\n");
    scanf("%d",&temp->data);
    temp->left=NULL;
    temp->right=NULL;
    if(start==NULL)
    {
        start=temp;
        node=start;
    }
    else
    {
        if(node->left==NULL)
            node->left=temp;
        else
            node->right=temp;
    }
    i++;
    }
}
void inorder(struct tree * start1)
{
    if(start1)
    {
        inorder(start1->left);
        printf("%d ",start1->data);
        inorder(start1->right);
    }
}
int main()
{
    insert_node();
    inorder(start);
}
