#include<stdio.h>
int fib(int a,int b,int n) {
    if(n==0){
    	return 0;
	}
    printf("%d ", a);
    return fib(b,a+b,n-1);
}
int main() {
    int n;
    printf("n: ");
    scanf("%d",&n);
    fib(0,1,n);
}

