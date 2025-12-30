#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void sdel(){
	if(head==NULL){
		printf("Underflow\n");
	}
	else{
		struct node* ptr1,ptr2;
			int l,c;
			printf("\nEnter location: ");
			scanf("%d",&l);
			ptr1=head;
			for(c=1;c<l;c++){
				if(ptr1->next==NULL){
					printf("\nInvalid Location");
					break;
				}
				ptr2=ptr1;
				ptr1=ptr1->next;
			}
			ptr2=ptr1->next;
			ptr1->next=ptr1->next->next;
			free(ptr2);
		}
}
void sinsert(){
	if(head==NULL){
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
		printf("Underflow\n");
		printf("Enter data: ");
		int item;
		scanf("%d",&item);
		ptr->data=item;
		ptr->next=NULL;
		head=ptr;
	}
	else{
		struct node* ptr1;
		struct node* ptr=(struct node*)malloc(sizeof(struct node));
			int item,l,count=0,c;
			printf("Enter data: ");
			scanf("%d",&item);
			printf("\nEnter location: ");
			scanf("%d",&l);
			ptr->data=item;
			ptr1=head;
			for(c=1;c<l;c++){
				if(ptr1->next==NULL){
					printf("\nInvalid Location");
					break;
				}
				ptr1=ptr1->next;
			}
			ptr->next=ptr1->next;
			ptr1->next=ptr;
		}
}
void print(){
	struct node *ptr;
	ptr=head;
	printf("\nData-");
	while(ptr->next!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);
}
int main(){
	int c=-1;
	while(c!=0){
		printf("\n1- Specific Insert\n2- Begin Insert\n3- Last Insert\n2- Print\n\n");
		scanf("%d",&c);
		switch(c){
			case 1:
				sinsert();
				break;
			case 2:
				print();
				break;
			case 3:
				sdel();
				break;
		}
	}
}
