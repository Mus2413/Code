#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int expo;
    int data;
    struct node * next;
};
struct node * start1=NULL,*start2=NULL,*start3=NULL,*ptr1,*ptr2,*ptr3,*temp,*t;
struct node * getnode()
{
    struct node * n;
    n=(struct node*)malloc(sizeof(struct node));
    return(n);
}
void createnode1()
{
    int i=0,num;
    printf("enter no of elements in list 1\n");
    scanf("%d",&num);
    while(i<num)
    {
        temp=getnode();
        printf("enter exponent , coefficient\n");
        scanf("%d%d",&temp->expo,&temp->data);
        temp->next=NULL;
        if(start1==NULL)
            start1=temp;
        else
            {
                for(t=start1;t->next!=NULL;t=t->next);
                t->next=temp;
            }
        i++;
    }

}
void createnode2()
{
    int i=0,num;
    printf("\nenter no of elements in list 2 \n");
    scanf("%d",&num);
    while(i<num)
    {
        temp=getnode();
        printf("enter exponent , coefficient\n");
        scanf("%d%d",&temp->expo,&temp->data);
        temp->next=NULL;
        if(start2==NULL)
            start2=temp;
        else
            {
                for(t=start2;t->next!=NULL;t=t->next);
                t->next=temp;
            }
        i++;
    }

}
void addition()
{
    ptr1=start1;
    ptr2=start2;
    while(ptr1!=NULL && ptr2!=NULL)
    {
        if(ptr1->expo > ptr2->expo)
        {
            temp =getnode();
            temp->expo = ptr1->expo;
            temp->data = ptr1->data;
            temp->next=NULL;
            ptr1=ptr1->next;
            if(start3==NULL)
                {
                    start3=temp;
                }
            else
            {
                for(t=start3;t->next!=NULL;t=t->next);
                t->next=temp;
            }
        }
        else if(ptr1->expo < ptr2->expo)
        {
            temp =getnode();
            temp->expo = ptr2->expo;
            temp->data = ptr2->data;
            temp->next=NULL;
            ptr2=ptr2->next;
            if(start3==NULL)
                start3=temp;
            else
            {
                for(t=start3;t->next!=NULL;t=t->next);
                t->next=temp;
            }
        }
        else
        {
            temp =getnode();
            temp->expo = ptr1->expo;
            temp->data = ptr1->data + ptr2->data;
            temp->next=NULL;
            ptr1=ptr1->next;
            ptr2=ptr2->next;
            if(start3==NULL)
                start3=temp;
            else
            {
                for(t=start3;t->next!=NULL;t=t->next);
                t->next=temp;
            }
        }
    }
    if(ptr1 == NULL && ptr2 != NULL)
    {
        while(ptr2!=NULL)
        {
            temp=getnode();
            temp->expo=ptr2->expo;
            temp->data= ptr2->data;
            temp->next=NULL;
            for(t=start3;t->next!=NULL;t=t->next);
            t->next=temp;
            ptr2=ptr2->next;
        }
    }
    if(ptr2 == NULL && ptr1 != NULL)
    {
        while(ptr1!=NULL)
        {
            temp=getnode();
            temp->expo=ptr1->expo;
            temp->data= ptr1->data;
            temp->next=NULL;
            for(t=start3;t->next!=NULL;t=t->next);
                t->next=temp;
            ptr1=ptr1->next;
        }
    }
}
int main()
{
    createnode1();
    ptr1=start1;
    ptr2= start2;
    while(ptr1!=NULL)
    {
        printf("%dx^%d + ",ptr1->data, ptr1->expo);
        ptr1=ptr1->next;
    }
    createnode2();
    while(ptr2!=NULL)
    {
        printf("%dx^%d + ",ptr2->data,ptr2->expo);
        ptr2=ptr2->next;
    }
    addition();

    printf("\nresult list\n");
    while(start3!=NULL)
    {
        printf("%dx^%d + ",start3->data,start3->expo);
        start3=start3->next;
    }
}
