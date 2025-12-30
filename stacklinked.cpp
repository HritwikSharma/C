#include<stdio.h>
#include<stdlib.h>
struct node
{
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
		ptr->data=item;
		ptr->next=head;
		head=ptr;
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
		printf("1 for insertion at first \n 2 for insertion at last \n 3 for insertion at a position");
		printf("4 for deletion at first \n 5 for deletion at last \n 6 for deletion at a position");
		printf("7 for linear search \n 8 for exit");
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
