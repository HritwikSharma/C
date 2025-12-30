#include<stdio.h>
int arr[100]={1,2,3};
int l1=3;
void BI(){
	int i;
	int a,a1,b;
	printf("Enter Element:\n");
	scanf("%d",&b);
	int l=sizeof(arr)/sizeof(arr[0]);
	a=arr[0];
	arr[0]=b;
	l1++;
	for(i=1;i<l;i++){
		a1=arr[i];
		arr[i]=a;
		a=a1;
	}
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
void LI(){
	int b,i;
	printf("Enter Element:\n");
	scanf("%d",&b);
	arr[l1]=b;
	l1++;
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
void II(){
	int i;
	int a,a1,b,k;
	printf("Enter Element:\n");
	scanf("%d",&b);
	printf("Enter Position:\n");
	scanf("%d",&k);
	int l=sizeof(arr)/sizeof(arr[0]);
	a=arr[k-1];
	arr[k-1]=b;
	l1++;
	for(i=k;i<l;i++){
		a1=arr[i];
		arr[i]=a;
		a=a1;
	}
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
void BD(){
	int i;
	int a,a1,b;
	int l=sizeof(arr)/sizeof(arr[0]);
	arr[0]=arr[1];
	l1--;
	for(i=1;i<l;i++){
		arr[i]=arr[i+1];
	}
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
void LD(){
	l1--;
	int i;
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
void ID(){
	int i;
	int a,a1,b,k;
	printf("Enter Position:\n");
	scanf("%d",&k);
	int l=sizeof(arr)/sizeof(arr[0]);
	arr[k-1]=arr[k];
	l1--;
	for(i=k;i<l;i++){
		arr[i]=arr[i+1];
	}
	printf("[");
	for(i=0;i<l1;i++){
		printf(" %d ",arr[i]);
	}
	printf("]");
}
int main(){
	int c=1;
	while(c!=0){
		printf("\nEnter Choice 1-BI 2-LI 3-II 4-BD 5-LD 6-ID:\n");
		scanf("%d",&c);
		switch(c){
			case 1:
				BI();
				break;
			case 2:
				LI();
				break;
			case 3:
				II();
				break;
			case 4:
				BD();
				break;
			case 5:
				LD();
				break;
			case 6:
				ID();
				break;
			default:
				printf("\nWrong Choice");
				break;
		}
	}
	
}
