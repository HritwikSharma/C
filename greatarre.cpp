#include<stdio.h>
int main()
{
	int sum=0;
	int arr[5]={1,2,3,4,5};
	sum=arr[0];
	for(int i=1;i<5;i++)
	{
		if(sum<arr[i])
		{
			sum=arr[i];
		}
	}
	printf("%d",sum);
}
