#include<stdio.h>
void swap(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int lomuto(int arr[],int low,int high){
	int pivot=arr[high];
	int i=(low-1);
	for(int j=low;j<=high-1;j++){
		if(arr[j]<=pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[high]);
	return (i+1);
}
void quicksort(int arr[],int low,int high){
	if(low<high){
		int pivot=lomuto(arr,low,high);
		quicksort(arr,low,pivot-1);
		quicksort(arr,pivot+1,high);
	}
}
void printarr(int arr[],int len){
	for(int i=0;i<len;i++){
		printf("%d ,",arr[i]);
	}
	printf("\n");
}
int main(){
	int arr[]={5,8,9,7,5,6,2,3,1,5,8,8,9};
	int len=sizeof(arr)/sizeof(arr[0]);
	quicksort(arr,0,len-1);
	printarr(arr,len);
}

