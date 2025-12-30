#include<stdio.h>
void rev(int arr[])
{
	int temp;
	int j=6;
	for(int i=0;i<=6;i++)
	{
		if(i>j)
		{
			temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
		j--;
	}
	for(int i=0;i<7;i++)
	{
		printf("%d",arr[i]);
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7};
	rev(arr);
}
