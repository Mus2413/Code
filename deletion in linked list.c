#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *next;
};
void traverse(struct node* head){
	struct node* current=head;
	int count=0;
	printf("\n traversing the list\n");
	while(current!=NULL)
    {
        count++;
		printf("%d ",current->data);
		current=current->next;
	}
	printf("\ntotal no of nodes : %d\n",count);
}
struct node* creatnode(int d){
	struct node* temp=malloc(sizeof(struct node));
	temp->data=d;
	temp->next=NULL;
	return temp;
}
int main(){
	printf("Insertion elements in linked list\n");
	printf("enter 0 to stop building the list, else enter any integer\n");
	int k,count=1,x;
	struct node* curr,*temp,*prev;
	scanf("%d",&k);
	struct node* head=creatnode(k);
	scanf("%d",&k);
	while(k){
	curr=creatnode(k);
	curr->next=head;
	head=curr;
	scanf("%d",&k);
	}
	traverse(head);
	printf("\ndeleting the first node.\n");
	temp=head;
	head=head->next;
	free(temp);
	traverse(head);
	printf("\nfirst node deleted.\n");
	printf("\ndeleting the last node.\n");
	temp=head->next;
	prev=head;
	while(temp->next!=NULL){
		temp=temp->next;
		prev=prev->next;
	}
	prev->next=NULL;
	free(temp);
	traverse(head);
	printf("\last node deleted.\n");
	printf("\n enter the position of the node you want to delete\n");
	scanf("%d",&x);
	temp=head->next;
	prev=head;
	while(count!=x-1){
		temp=temp->next;
		prev=prev->next;
		count++;
	}
	prev->next=temp->next;
	free(temp);
	traverse(head);
	return 0;
}

