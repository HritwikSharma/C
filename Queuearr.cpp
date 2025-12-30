#include<stdio.h>
int rear=-1;
int arr[10];
int max=10;
void enqueue(){
	if(rear==max-1){
		printf("\nQueue Full\n");
	}
	else{
		rear++;
		printf("Enter Element: ");
		scanf("%d",&arr[rear]);
	}
}
void dequeue(){
	if(rear==-1){
		printf("\nQueue Empty\n");
	}
	else{
		printf("Element Removed : %d\n",arr[0]);
		int i=0;
		for(i=0;i<rear;i++){
			arr[i]=arr[i+1];
		}
		rear--;
	}
}
void display(){
	if(rear==-1){
		printf("\nQueue Empty\n");
	}
	else{
		int i=0;
		printf("\n[ ");
		for(i=0;i<=rear;i++){
			printf("%d ",arr[i]);
		}
		printf("]\n");
	}
}
void peek(){
	printf("First Element: %d\n",arr[0]);
}
int main(){
	int a=-1;
	while(a!=0){
		printf("----------\n0- Exit\n1- Enqueue \n2- Dequeue \n3- Display\n----------\n");
		scanf("%d",&a);
		switch(a){
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			peek();
			break;
		default:
			printf("\nWrong Choice\n");
			break;
	}
	}
}
