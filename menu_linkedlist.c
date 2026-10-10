#include<stdio.h>
#include<stdlib.h>
struct NODE
{
	int data;
	struct NODE *next;
};
typedef struct NODE node;
node *list=NULL,*last;
node * getnode()
{
	node * temp;
	temp=(node *)malloc(sizeof(node));
	printf("Enter the data");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
}
void create()
{
	int i,n;
	node *temp;
	printf("Enter no of nodes:");
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
			last->next=temp;
		}
		last=temp;
	}
		
}
void display()
{
	node *ptr;
	for(ptr=list;ptr!=NULL;ptr=ptr->next)
	{
		printf("%d\t",ptr->data);
	}
}
int  linear_search(n,key)
{
	node *ptr;
	for(ptr=list;ptr!=NULL;ptr=ptr->next)
	{
		if(key==ptr->data)
		{
			printf("Key element is found");
			break;
		}
	}
	if(ptr==NULL)
	{
		printf("element not found");
	}
}
void append()
{
	node*temp;
	printf("Node to append:");
	temp=getnode();
	last->next=temp;
	last=temp;
}
void insert_first()
{
	node*temp;
	printf("Node to append:");
	temp=getnode();
	temp->next=list;
	list=temp;
}
node *delete_first()
{
		node *ptr;
		ptr=list;
		list=ptr->next;
		free(ptr);
		printf("\n Node is Deleted.");
		return list;
}
node *delete_last()
{
		node *ptr, *prev;
		for(ptr=list,prev=list;ptr->next!=NULL;prev=ptr,ptr=ptr->next);
		free(ptr);
		prev->next=NULL;
		return list;
}
void main()
{
		int ch,key,n;
		while(1)
		{
				printf("\n 1.Create a Linked List:");
				printf("\n 2.Display a Linked List:");
				printf("\n 3.Search a number in Linked List:");
				printf("\n 4.Create a append node:");
				printf("\n 5.Create a node at first:");
				printf("\n 6.Delete first node:");
				printf("\n 7.Delete last node:");
				printf("\n 8.EXIT");
				printf("\nEnter a Choice:");
				scanf("%d",&ch);
				switch(ch)
				{
							case 1 : create();
											break;
							case 2 : display();
											break;
							case 3 : printf("enter key element:");
											scanf("%d",&key);
											linear_search(n,key);
											break;
							case 4 : append();
											display();
											break;
							case 5 : insert_first();
											display();
											break;
							case 6 : delete_first();
											display();
											break;
							case 7 : delete_last();
											display();
											break;
							case 8 : exit(0);
				}
		}
}
	
	
	
	
	
	
	
	
	