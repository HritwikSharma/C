#include<stdio.h>
int main(){
	int i,j;
	int row,col;
	int a[100][100];
	int b[100][100];
	printf("Enter length row & column of array 1 \n");
	row=scanf("%d",&row);
	col=scanf("%d",&col);
	printf("%d",row);
	printf("%d",col);
//	printf("Enter length of row & column of array 2 \n");
//	int row2=scanf("%d",&row2);
//	int col2=scanf("%d",&col2);
//	printf("Enter elements of arr1 \n");
	for(i=0;i<row;i++)
	{
//		printf("Enter Elements of %d row \n",i);
		for(j=0;j<col;j++)
		{	
			scanf("%d",&a[i][j]);
		}
	}
}
//	printf("Enter elements of arr2 \n");
//	for(i=0;i<row2;i++){
////		printf("Enter Elements of %d row \n",i);
//		for(j=0;j<col2;j++){
//			scanf("%d",&b[i][j]);
//		}
//	}
//	if(col1==col2 && row1==row2){
//		for(i=0;i<row1;i++){
//			for(j=0;j<col1;j++){
//				printf("%d",a[i][j]+b[i][j]);
//			}
//			printf("\n");
//		}
//	}
//	else{
//		printf("Arrays of unequal length");
//	}
//}
