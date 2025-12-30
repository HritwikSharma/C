#include<stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	
	int i,l=0;
	
	int arr2[5];
	
	for(i=4;i>=0;i--){
		arr2[l]=arr[i];
		l++;
	}
	
	for(i=0;i<5;i++){
		printf("%d,",arr[i]);
	}
	printf("\n");
	printf("\n");
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d,",arr2[i]);
	}
}
