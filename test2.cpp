#include<stdio.h>
#include<stdlib.h> //#
typedef struct node
{
	int data;
	struct node *next;
}ep;
ep *head;
//struct node *ptr1;
ep *ptr1=(struct node*)malloc(sizeof(struct node));
scanf("%d",&data);
ptr->next=NULL;
head=ptr;
head->next=ptr;
void begin_insert()
{
	struct node *ptr;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\n OverFlow");
	}
	else
	{
		printf("\n Enter a value");
		scanf("%d,&item");
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("\n The node is inserted");
	}
}
void last_insert()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\n OverFlow");
	}
	else
	{
		printf("\n Enter the value of the item");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			printf("\n The node is inserted");
		}
		else
		{
			temp=head;
		}
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=ptr;
		ptr->next=NULL;
		printf("\n Node is inserted");
	}
}
void random_insert()
{
	struct node *ptr,*temp;
	int item,i,n;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\n OverFlow");
	}
	else
	{
		printf("\n Enter the value");
		scanf("%d",&item);
		printf("\n Enter the position where you want to insert the element");
		scanf("%d",&n);
		ptr->data=item;
		temp=head;
		for(i=0;i<n;i++)
		{
			temp=temp->next;
			if(temp->next==NULL)
			{
				printf("\n The location is not valid");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\n The node is inserted");
	}
}
void begin_delete()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("\n The list is empty");
	}
	else
	{
		ptr=head;
		head=head->next;
		printf("%d",ptr->data);
		free(ptr);
		printf("\n The node is deleted");
	}
}
void last_delete()
{
	struct node *ptr1,*ptr2;
	if(head==NULL)
	{
		printf("\n node is empty");
	}
	else if(head->next!=NULL)
	{
		free(head);
	}
	else
	{
		ptr2=head;
		while(ptr!=NULL)
		{
			ptr1=ptr2;
			ptr2=ptr2->next;
		}
		free(ptr2);
		ptr1-next=NULL;
	}
}
void random_delete()
{
	struct node *ptr1,*ptr2;
	int loc,i;
	printf("\n Enter the location");
	scanf("%d",&loc);
	ptr=head;
	for(i=1;i<=loc,i++)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		if(ptr1==NULL)
		{
			printf("\n location cannot be found");
			return;
		}
	}
	ptr2->next=ptr1->next;
	printf("%d",ptr->data);
	free(ptr1);
	printf("\n The node is deleted at position %d",loc);
}
void linear_search()
{
	int a,count=0;
	struct node *ptr;
	ptr=head;
	printf("\n Enter the item");
	scanf("%d",&a);
	if(head==NULL)
	{
		printf("\n The list is empty");
	}
	else
	{
		while(ptr->data!=a)
		{
			count++;
			ptr=ptr->next;
		}
		if(ptr->data==a)
		{
			printf("\n The element found at position %d",count);
		}
		else
		{
			printf("\n Element not found")
		}
	}
}
int main()
{
	int choice,i=0;
	while(i<1)
	{
		printf("Enter your choice \n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				begin_insert();
				break;
			case 2:
				last_insert();
				break;
			case 3:
				random_insert();
				break;
			case 4:
				begin_delete();
				break;
			case 5:
				last_delete();
				break;
			case 6:
				random_delete();
				break;
			case 7:
				linear_search();
				break;
			case 8:
				exit();
				break;
			default:
				printf("Enter a valid input");
		}
	}
}
