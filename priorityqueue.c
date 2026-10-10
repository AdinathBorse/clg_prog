#include<stdio.h>
#include<stdlib.h>
# define MAX 10
#include<stdio.h>
int Q[20];
int front,Rear;
void init()
{
	front=Rear=-1;
}

int isempty()
{
	if(Rear==-1)
	return 1;
	else
	return 0;
}
int isfull()
{
	if(Rear==MAX-1)
	return 1;
	else
	return 0;
}
void Add(int data)
{
	 int i;
	if(isfull()==1)
	printf("Queue is Full ");

    for(i=Rear;i>front;i--)
	{ 
	if(data<Q[i])
	Q[i+1]=Q[i];
	else
	break;
	}
	Q[i+1]=data;
	Rear++;
}


int Delete()
{
	int data;
	if(isempty()==1)
	printf("Queue is empty ");
	else
	{
	front++;
	data=Q[front];
	}	
	return data;
}
void display()
{
	int i;
	for(i=front+1;i<=Rear;i++)
	{ 
	printf("%d ",Q[i]);
	}
}


main()
{
	int data,ch;
	init();
	do
	{
	printf("\n\n1.Enqueue(Add) \n2.Dequeue(Delete) \n3.Display \n4.EXit");
	printf("\nEnter choice ");
	scanf("%d",&ch);
	switch(ch)
	{ 
	case 1:printf("\nEnter element ");
	       scanf("%d",&data);
		Add(data);
		break;
	case 2:if(isempty()==1)
		printf("\nQueue is empty ");
		else
		printf("deleted elemet =%d ",Delete());
		break;
	case 3:display();
		break;
	case 4:exit(0);

	}
}
while(ch!=4);
}