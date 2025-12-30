#include<stdio.h>
int main()
{
	int a1,a2,a3;
	
	printf("enter range of 1st array");
	scanf("%d",&a1);
	printf("enter range of 2nd array");
	scanf("%d",&a2);
	
	int arr[a1];
	int arr1[a2];
	
	printf("Enter elements of 1st array");
	for(int i=0;i<a1;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Enter elements of 2nd array");
	for(int i=0;i<a2;i++)
	{
		scanf("%d",&arr1[i]);
	}
	
	a3=a1+a2;
	int arr2[a3];
	
	for(int i=0;i<a1;i++)
	{
		arr2[i]=arr[i];
	}
	
	int c=0;
	for(int i=a1-1;i<a3-2;i++)
	{
		arr2[i]=arr[c];
		c++;
	}
	
	
	for(int i=0;i<a3;i++)
	{
		printf("%d",arr2[i]);
	}
}
