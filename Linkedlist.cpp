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
		printf("\nOverFlow");
	}
	else
	{
		printf("\nEnter a value");
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=head;
		head=ptr;
		printf("\nThe node is inserted\n");
	}
}
void last_insert()
{
	struct node *ptr,*temp;
	int item;
	ptr=(struct node *)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverFlow\n");
	}
	else
	{
		printf("\nEnter the value of the item");
		scanf("%d",&item);
		ptr->data=item;
		if(head==NULL)
		{
			ptr->next=NULL;
			head=ptr;
			printf("\nThe node is inserted\n");
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
		printf("\nNode is inserted\n");
	}
}
void random_insert()
{
	struct node *ptr,*temp;
	int item,i,n;
	ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL)
	{
		printf("\nOverFlow\n");
	}
	else
	{
		printf("\nEnter the value");
		scanf("%d",&item);
		printf("\nEnter the position where you want to insert the element");
		scanf("%d",&n);
		ptr->data=item;
		temp=head;
		for(i=0;i<n;i++)
		{
			temp=temp->next;
			if(temp->next==NULL)
			{
				printf("\nThe location is not valid\n");
				return;
			}
		}
		ptr->next=temp->next;
		temp->next=ptr;
		printf("\nThe node is inserted\n");
	}
}
void begin_delete()
{
	struct node *ptr;
	if(head==NULL)
	{
		printf("\nThe list is empty\n");
	}
	else
	{
		ptr=head;
		head=head->next;
		printf("%d",ptr->data);
		free(ptr);
		printf("\nThe node is deleted\n");
	}
}
void last_delete()
{
	struct node *ptr1,*ptr2;
	if(head==NULL)
	{
		printf("\nnode is empty\n");
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
	printf("\nEnter the location");
	scanf("%d",&loc);
	ptr1=head;
	for(i=1;i<=loc;i++)
	{
		ptr2=ptr1;
		ptr1=ptr1->next;
		if(ptr1==NULL)
		{
			printf("\nlocation cannot be found\n");
			return;
		}
	}
	ptr2->next=ptr1->next;
	printf("%d",ptr1->data);
	free(ptr1);
	printf("\nThe node is deleted at position %d\n",loc);
}
void linear_search()
{
	int a,count=0;
	struct node *ptr;
	ptr=head;
	printf("\nEnter the item");
	scanf("%d",&a);
	if(head==NULL)
	{
		printf("\nThe list is empty\n");
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
			printf("\nThe element found at position %d",count);
		}
		else
		{
			printf("\nElement not found\n");
		}
	}
}
void dis(){
	struct node *ptr1=head;
	printf("%d",ptr1->data);
	while(ptr1->next!=NULL){
		printf("%d",ptr1->data);
		ptr1=ptr1->next;
	}
}
int main()
{
    struct node *head=NULL;
    struct node *ptr1=NULL;

	int choice,z=0;
	while(1)
	{
		printf("\n1 for insertion at first \n2 for insertion at last \n3 for insertion at a position\n");
		printf("4 for deletion at first \n5 for deletion at last \n6 for deletion at a position\n");
		printf("7 for linear search \n8 for exit\n9 for display");
		printf("\nEnter your choice: ");
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
			case 9:
				{
				dis();
				break;
				}
			default:
				{
				printf("\nEnter a valid input\n");
				}
		}
	}
}
