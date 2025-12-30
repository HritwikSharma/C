#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head=NULL;

void createlist(){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	struct node* temp;
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
		while(ptr->next!=head){
			printf("%d ",ptr->data);
			ptr=ptr->next;
		}
		printf("%d",ptr->data);
	}
}

void insert_first(){
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL){
		printf("\nUnable to allocate memory");
		return;
	}
	int data;
	printf("\nEnter data to insert at first: ");
	scanf("%d",&data);
	ptr->data=data;
	if(head==NULL){
		ptr->next=ptr;
		head=ptr;
	}
	else{
		struct node* temp=head;
		while(temp->next!=head){
			temp=temp->next;
		}
		ptr->next=head;
		temp->next=ptr;
		head=ptr;
	}
}

void insert_pos(){
	int pos,i,data;
	printf("\nEnter position: ");
	scanf("%d",&pos);
	printf("\nEnter data: ");
	scanf("%d",&data);
	if(pos==1){
		insert_first();
		return;
	}
	struct node* ptr=(struct node*)malloc(sizeof(struct node));
	if(ptr==NULL){
		printf("\nUnable to allocate memory");
		return;
	}
	ptr->data=data;
	struct node* temp=head;
	for(i=1;i<pos-1;i++){
		if(temp->next==head){
			printf("\nPosition out of range");
			free(ptr);
			return;
		}
		temp=temp->next;
	}
	ptr->next=temp->next;
	temp->next=ptr;
}

void delete_first(){
	if(head==NULL){
		printf("\nList is empty");
		return;
	}
	if(head->next==head){
		free(head);
		head=NULL;
	}
	else{
		struct node* temp=head;
		struct node* last=head;
		while(last->next!=head){
			last=last->next;
		}
		head=head->next;
		last->next=head;
		free(temp);
	}
}

void delete_pos(){
	int pos,i;
	printf("\nEnter position to delete: ");
	scanf("%d",&pos);
	if(head==NULL){
		printf("\nList is empty");
		return;
	}
	if(pos==1){
		delete_first();
		return;
	}
	struct node* temp=head;
	struct node* prev=NULL;
	for(i=1;i<pos;i++){
		prev=temp;
		temp=temp->next;
		if(temp==head){
			printf("\nPosition out of range");
			return;
		}
	}
	prev->next=temp->next;
	free(temp);
}

int main(){
	int c=-1;
	while(c!=0){
		printf("\n--------------------------------");
		printf("\n1- Print\n2- Create List\n3- Insert First\n4- Insert Position");
		printf("\n5- Delete First\n6- Delete Position\n0- Exit");
		printf("\n--------------------------------\n:");
		scanf("%d",&c);
		switch(c){
			case 1:
				print();
				break;
			case 2:
				createlist();
				break;
			case 3:
				insert_first();
				break;
			case 4:
				insert_pos();
				break;
			case 5:
				delete_first();
				break;
			case 6:
				delete_pos();
				break;
			case 0:
				break;
			default:
				printf("\nWrong Choice\n");
				break;
		}
	}
	return 0;
}

