#include<stdio.h>
int main(){
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int len=sizeof(arr)/sizeof(arr[0]);
	int key,j;
	for(int i=1;i<len;i++){
		key=arr[i];
		j=i-1;
		while(key<arr[j] && j>=0){
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	for(int i=0;i<len;i++){
		printf("%d",arr[i]);
	}
}
