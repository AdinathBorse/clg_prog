#include<stdio.h>
#include<stdlib.h>
struct NODE 
{
	int data;
	struct NODE *next;
};
typedef struct NODE node;
node *list = NULL, *last;
node * getnode()
{
 node *temp;
 temp=(node*)malloc(sizeof(node));
 printf("\n enter the data");
 scanf("%d",&temp->data);
 temp -> next=NULL;
 return temp;
 }
 void create()
 {
 	int i,n;
 	node *temp;
 	printf("enter the no of nodes");
 	scanf("%d",&n);
 	for(i=0;i<n;i++)
 	{
 		temp=getnode();
 		if(list==NULL)
 		{
 			list=temp;
 		}	
 		else
 		{
 			last -> next = temp;
 		}
 		last=temp;
 	}
 }
 void display()
 {
 	node *ptr;
 	for(ptr=list;ptr!=NULL;ptr=ptr->next)
 	printf("\t %d \n",ptr->data);
 }
 int main()
 {
 	create();
 	display();
 }