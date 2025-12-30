#include<stdio.h>
int arr[100];
int top=-1;
void push(){
	if(top==99){
		printf("\nOverflow");
	}
	else{
		top++;
		int a;
		printf("\nEnter Element:");
		scanf("\n%d",&a);
		arr[top]=a;
	}
}
void pop(){
	if(top==-1){
		printf("\nUnderflow");
	}
	else{
		int a=arr[top];
		top--;
		printf("\nElement Deleted: %d",a);
	}
}
void dis(){
	int i;
	printf("\n[");
	for(i=0;i<=top;i++){
		printf("%d | ",arr[i]);
	}
	printf("]\n");
}

int main(){
	int c=5;
	while(c!=0){
		printf("\nEnter \n1-PUSH \n2-POP \n3-DISPLAY \n0-EXIT\n-----------\n:");
		scanf("%d",&c);
		switch(c){
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				dis();
				break;
			default:
				printf("Wrong Choice");
				break;
		}
	}
}
