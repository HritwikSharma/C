#include<stdio.h>
int fact(int n){
	int s=0;
	if(n==1){
		return 1;
	}
	return n*fact(n-1);
}
int main(){
	int n;
	printf("Enter the range: ");
	scanf("%d",&n);
	printf("%d",fact(n));
}
