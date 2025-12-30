#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
struct node* head=NULL;
void createlist(){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node*temp;
	if(ptr==NULL){
		printf("\nUnable to allocate memory");
		exit(0);
	}
	int n,i;
	int data;
	printf("\nEnter number of nodes: ");
	scanf("%d",&n);
	printf("\nEnter data for 1 node: ");
	scanf("%d",&data);
	head=ptr;
	ptr->data=data;
	ptr->next=head;
	temp=head;
	for(i=2;i<=n;i++){
		ptr=(struct node*)malloc(sizeof(struct node));
		if(ptr==NULL){
			printf("\nUnable to allocate memory");
			exit(0);
		}
		printf("\nEnter data for %d node: ",i);
		scanf("%d",&data);
		temp->next=ptr;
		ptr->data=data;
		ptr->next=head;
		temp=ptr;
		
	}
}
void print(){
	if(head==NULL){
		printf("\nEmpty List\n");
	}
	else{
		struct node *ptr;
		ptr=head;
		printf("\nData - ");
		while(ptr->next!=head)
		{
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		printf("%d",ptr->data);
	}
}
int main(){
	int c=-1;
	while(c!=0){
		printf("\n--------------------------------\n1- Print\n2- Create List\n--------------------------------\n:");
		scanf("%d",&c);
		switch(c){
			case 1:
				print();
				break;
			case 2:
				createlist();
				break;
			default:
				printf("\nWrong Choice\n");
				break;
		}
	}
}
