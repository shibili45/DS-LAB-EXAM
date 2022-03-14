#include<stdio.h>
	#define N 5
	int queue[N];
	int front=-1,rear=-1;
	void insert();
	int delete();
	void display();
	int item;
	int main()
	{
	int choice,val,opt;
	do
	{
	printf("MENU\n");
	printf("\n1.insert\n2.delete\n3.display\n4.exit\n");
	printf("enter your choice");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:insert();
		break;
	case 2:val=delete();
		if(val!=-1)
		printf("\n The number deleted is %d",val);
		break;
	case 3:display();
		break;
	default:printf("invalid choice");
	}
	printf("do you want to continue?(1/0)");
	scanf("%d",&opt);
	}while(opt==1);
	return 0;
	}
	
	void display()
	{
	int i;
	printf("\n");
	if(front==-1||front>rear)
	printf("\n queue is empty");
	else
	{
	for(i=front;i<=rear;i++)
	printf("\t%d",queue[i]);
	}
	}
	
	
	
	
	void insert()
	{
	printf("enter the element to be inserted");
	scanf("%d",&item);
	if(front==0 && rear==N-1)
	{
	printf("overflow");
	}
	if(front=-1 && rear==-1)
	{
	front=rear=0;
	queue[rear]=item;
	}
	else if(rear==N-1 && front!=0)
	{
	rear=0;
	queue[rear]=item;
	}
	else
	{
	rear=rear+1;
	queue[rear]=item;
	}
	
	}
	
	
int delete()
	{
	int val;
	if(front==-1||front>rear)
	{
	printf("\n underflow");
	return(-1);
	}
	else
	{
	val=queue[front];
	front++;
	if(front>rear)
	front=rear=-1;
	return(val);
	}
	}
