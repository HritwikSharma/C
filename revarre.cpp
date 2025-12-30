#include<stdio.h>
int main()
{
	int c=0;
	int arr[5]={1,2,3,4,5};
	int arr1[5];
	for(int i=4;i>=0;i--)
	{
		arr1[c]=arr[i];
		c+=1;
	}
	for(int i=0;i<5;i++)
	{
		printf("%d",arr1[i]);
	}
}
