#include<stdio.h>
int main(){
	int arr[2][3]={{1,2,3},{4,5,6}};
	int arr2[3][2];
	int i,j;
	int m=1,n=2;
	for(i=0;i<3;i++){
		n=2;
		for(j=0;j<2;j++){
			arr2[i][j]=arr[m][n];
			n--;
		}
		m--;
	}
	for(i=0;i<3;i++){
		for(j=0;j<2;j++){
			printf("%d",arr2[i][j]);
		}
	}
}
