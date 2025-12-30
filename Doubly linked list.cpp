#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *prev;
	int data;
	struct node *next;
};
struct node *head=NULL;
struct node *ptr1=NULL;
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
		scanf("%d",&item);
		if(head==NULL)
		{
			ptr->data=item;
			ptr->prev=NULL;
			ptr->next=head;
			ptr->prev=ptr;
			head=ptr;
		}
		else
		{
			ptr->data=item;
			ptr->prev=NULL;
			ptr->next=head;
			ptr->prev=ptr;
			head=ptr;
		}
		printf("\n The node is inserted");
	}
}
void last_insert()
{
	struct node *ptr,*ptr1;
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
			ptr->prev=NULL;
			head=ptr;
			printf("\n The node is inserted");
		}
		else
		{
			ptr1=head;
		}
		while(ptr1->next!=NULL)
		{
			ptr1=ptr1->next;
		}
		ptr->next=NULL;
		ptr1->next=ptr;
		ptr->prev=ptr1;
		printf("\n Node is inserted");
	}
}
void random_insert()
{
	struct node *ptr,*temp,*ptr1;
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
		if(head==NULL)
		{
			ptr->next=NULL;
			ptr->prev=NULL;
			ptr->data=item;
			head=ptr;
		}
		else
		{
			for(i=0;i<n;i++)
			{
				temp=temp->next;
			}
			if(temp==NULL)
			{
				printf("\n The location is not valid");
				return;
			}
			ptr->prev=temp;
			ptr->next=temp->next;
			temp->next=ptr;
			ptr->next=ptr;
			ptr1=ptr->next;
			ptr1->prev=ptr->prev;
		}
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
		head->prev=NULL;
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
		while(ptr1!=NULL)
		{
			ptr1=ptr2;
			ptr2=ptr2->next;
		}
		free(ptr2);
		ptr1->next=NULL;
	}
}
void random_delete()
{
	struct node *ptr1,*ptr2;
	int loc,i;
	printf("\n Enter the location");
	scanf("%d",&loc);
	ptr1=head;
	for(i=1;i<=loc;i++)
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
	ptr1->next->prev=ptr2;
	printf("%d",ptr1->data);
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
			printf("\n Element not found");
		}
	}
}
int main()
{
    struct node *head=NULL;
    struct node *ptr1=NULL;

	int choice,z=0;
	while(1)
	{
		printf("\n1 for insertion at first \n2 for insertion at last \n3 for insertion at a position");
		printf("4 for deletion at first \n5 for deletion at last \n6 for deletion at a position");
		printf("7for linear search \n8 for exit");
		printf("Enter your choice \n ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					begin_insert();
					break;
				}
			case 2:
				{
					last_insert();
					break;
				}
			case 3:
				{
					random_insert();
					break;
				}
			case 4:
				{
					begin_delete();
					break;
				}
			case 5:
				{
					last_delete();
					break;
				}
			case 6:
				{
					random_delete();
					break;
				}
			case 7:
				{
					linear_search();
					break;
				}
			case 8:
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
