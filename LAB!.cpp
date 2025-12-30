#include<stdio.h>
int main(){
	int arr[]={4,5,8,9,6,4,2};
	int i,k,n;
	int a,b;
	int size = sizeof(myArray) / sizeof(myArray[0]);
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
	printf("Insert at specific position: ");
	scanf("%d",&n);
	printf("Insertion Data: ");
	scanf("%d",&k);
	if(n<=size){
		n=n-1;
		for(i=n;i<size;i++){
			
		}
	}
	printf("Delete at specific position: ");
	scanf("%d",&k);
}
