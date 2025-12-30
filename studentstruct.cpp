#include <stdio.h>
#include <stdlib.h>
struct student{int roll;char name;int marks;}; 
int main(){
	int n; 
	int avg;
	int sum=0;
	printf("Enter the number of entries :");
	scanf("%d",&n);
	printf("\n\n");
	struct student *p=(struct student*)malloc(n*sizeof(struct student));
	for(int i=0;i<n;i++){
		printf("Entry Number :%d \n\n",i);
		printf("\n\n");
		printf("Roll :");
		scanf("%d",&p[i].roll);
		printf("\n\n");
		printf("Name :");
		scanf(" %c",&p[i].name);
		printf("\n\n");
		printf("Marks :");
		scanf(" %d",&p[i].marks);
		printf("\n\n");
		sum=sum+p[i].marks;
	}
	printf("Now Printing The Average");
	avg=sum/n;
	printf("%d",avg);
} 
