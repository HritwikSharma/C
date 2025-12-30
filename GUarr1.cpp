#include<stdio.h>
int rear=0;
int arr[100];
void ins()
{
	int a;
	printf("Enter Element\n");
	scanf("%d",&a);
	arr[rear]=a;
	rear=rear+1;
	printf("Element Added\n");
}
void insf()
{
	int f;
	printf("Enter the element\n");
	scanf("%d",&f);
	for(int i=rear-1;i>-1;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[0]=f;
	rear=rear+1;
}
void insm()
{
	int f;
	int m;
	printf("Enter the element\n");
	scanf("%d",&f);
	printf("Enter the position\n");
	scanf("%d",&m);
	for(int i=m;i>0;i--)
	{
		arr[i+1]=arr[i];
	}
	arr[m]=f;
	rear=rear+1;
}
void del()
{
	rear=rear-1;
	printf("Element Deleted\n");
}
void avg()
{
	int s=0;
	for(int i=0;i<rear;i++)
	{
		s=s+arr[i];
	}
	s=s/rear;
	printf("The average is\n %d",s);
}
void dis()
{
	for(int i=0;i<rear;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int c;
	do{
		printf("Enter 1 for insertion \n2 for deletion \n3 for average \n4 for display \n0 to exit \n");
		scanf("%d",&c);
		switch(c)
		{
			case 1:
				int d;
				printf("Enter 1 for last insertion\n2 for first insertion\n3 for point insertion\n");
				scanf("%d",d);
				if(d==1)
				{
					ins();
				}
				else if(d==2)
				{
					insf();
				}
				else if(d==3)
				{
					insm();
				}
				else
				{
					printf("Wrong choice\n");
				}
				break;
			case 2:
				del();
				break;
			case 3:
				avg();
				break;
			case 4:
				dis();
				break;
			case 0:
				break;
			default:
				printf("Wrong choice");
				break;
		}
	}while(c!=0);
	
}
