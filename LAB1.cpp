#include<stdio.h>
int main(){
	int arr[]={4,5,8,9,6,4,2};
	int i,k,n;
	int a,b;
	int size = sizeof(arr) / sizeof(arr[0]);
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Insert at specific position: ");
	scanf("%d",&n);
	printf("Insertion Data: ");
	scanf("%d",&k);
	if(n<=size){
		a=arr[n-1];
		arr[n-1]=k;
		for(i=n;i<size+1;i++){
			b=arr[i];
			arr[i]=a;
			a=b;
		}
		size++;
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("Delete at specific position: ");
	scanf("%d",&n);
	if(n <= size){
		for(i = n - 1; i < size - 1; i++){
			arr[i] = arr[i + 1];
		}
		size--;
	}
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
}
