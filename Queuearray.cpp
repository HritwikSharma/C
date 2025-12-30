#include<stdio.h>
int max;
int front=rear=-1;
int queue[max];
void insert()
{
	int item;
	printf("Enter the element\n");
	scanf("%d",&item);
	if(rear==max-1)
	{
		printf("overflow\n");
		return;
	}
	else
	{
		if(front==-1 && rear==-1)
		{
			rear=0;
			front=0;
		}
		else
		{
			rear=rear+1;
		}
		queue[rear]=item;
		printf("Insertion done");
	}
}
void del()
{
	int x;
	if(front==-1||front>rear)
	{
		printf("underflow\n");
		return;
	}
	else
	{
		x=queue[front];
		if(rear==front)
		{
			rear=-1;
			front=-1;
		}
		else
		{
			front=front+1;
			printf("%d the element is deleted",x);
		}
	}
}
void display()
{
	int i=front;
	if(front==-1 && rear==-1)
	{
		printf("empty\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d\n",queue[i]);
		}
	}
}
int main()
{
	int choice,z=0;
	while(1)
	{
		printf("1 for insertion \n 2 for deletion \n 3 for display \n 4 for exit");
		printf("Enter your choice \n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					insert();
					break;
				}
			case 2:
				{
					del();
					break;
				}
			case 3:
				{
					display();
					break;
				}
			case 4:
				{
					exit(0);
					break;
				}
			default:
				{
					printf("\nEnter a valid input");
				}
		}
	}
}
