#include<stdio.h>
#define MAX 5
//create the queue
struct queue
{
     int Q[MAX];
     int front,rear;
};
typedef struct queue QUEUE;

//Initialiaing the queue
void initqueue(QUEUE *q)
{
    
     q->front=-1;
     q->rear=-1;
}

//checking for an empty queue

int isempty(QUEUE *q)
{
	if(q->front==q->rear)
		return 1;
	else
		return 0;
}

//checking for a full queue
 
int isfull(QUEUE *q)
{
    	if(q->rear==MAX-1)
		return 1;
	else
		return 0;
}
//adding an element to the queue

void addQ(int val, QUEUE *q)
{
       
	if(q->front==-1)
	 q->front=0;

	q->Q[++q->rear]=val;
}
int deleteQ(QUEUE *q)
	{
		int val;
		//++q->front;
		val=q->Q[q->front++];
		return val;
	//	‘or’
//		return(q->Q[++q->front]);
	}
	
int peek(QUEUE *q)
	{
		int val;
		val=q->Q[q->front];
		return val;
	
	}
	


	
	//display the elements of queue
	void display(QUEUE *q)
	{
		int i;
		for(i=q->front;i<=q->rear;i++)
			printf("%d",q->Q[i]);
	}
int main()
	{
		int ch,val;
		QUEUE q;
		initqueue(&q);
		while(1)
		{
			printf("\n 1 : Add queue");
			printf("\n 2 : Delete queue");
			printf("\n 3 : Display queue");
			printf("\n 4 : Peek\n");
			printf("\n 5 : Exit\n");
	
			printf("\n Enter your choice");
			scanf("%d", &ch);
			switch(ch)
			{
				case 1 :
					 if(isfull(&q))
					   printf("\n Queue is full");
					else
					{
					   printf("\n Enter value");
					   scanf("%d",&val);
					   addQ(val,&q);
					}
				 	break;
				case 2 :
					if(isempty(&q))
					   printf("\n Queue is empty");
					else
					   printf("\n Deleted elements = %d",deleteQ(&q));
					break;
				case 3 :
					if(isempty(&q))
					   printf("\n Queue is empty");
					else
					  display(&q);
					break;

				case 4 : if(isempty(&q))
					   printf("\n Queue is empty");
					else
					   printf("\n Peeked element = %d",peek(&q));
					break;
				case 5 :exit(0);
			}
		}
	}
			