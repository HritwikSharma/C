#include<stdio.h>
int top,n,stack[100],x,i,choice;
void push(void);
void pop(void);
void display(void);
void push()
	{
		if(top>=n-1)
		{
			printf("Stack Overflow \n");
		}
		else
		{
			printf("Enter the element to be pushed\n");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
void pop()
{
	if(top<=-1)
	{
		printf("The Stack is Empty\n");
	}
	else
	{
		printf("The element deleted is %d \n",stack[top]);
		top--;
	}
}

void display()
{
	if(top>=0)
	{
		printf("\n The element of the stack \n");
		for(i=top;i>=0;i--)
		{
			printf("%d",stack[i]);
		}
		printf("\n Enter your choice \n");
	}
	else
	{
		printf("The stack is empty \n");
	}
}
void peek(){
	printf("%d",stack[top]);
}
void count(){
	int size = sizeof(stack) / sizeof(stack[0]);
	printf("%d",size);
}
int main()
{
	top=-1;
	printf("\nEnter the maximum number of the stack \n");
	scanf("%d",&n);
	printf("\nEnter your choice of operation in the stack \n");
	printf("\n 1.PUSH \n 2.POP \n 3.DISPLAY \n 4.EXIT \n 5.PEEK\n 6.COUNT\n");
	do
	{
		printf("\nEnter your choice \n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				printf("\nThis is the exit print \n");
				break;
			case 5:
				peek();
				break;
			case 6:
				count();
				break;
			default:
				printf("\nPlease enter a valid choice 1/2/3/4/5/6 \n");
		}
	}
	while(choice!=4);
	return 0;
}
