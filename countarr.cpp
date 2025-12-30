#include<stdio.h>
int main()
{
	int sum,c=0;
	scanf("%d",&sum);
	int arr[5]={1,2,3,4,5};
	for(int i=0;i<5;i++)
	{
		if(arr[i]==sum)
		{
			c+=1;
		}
	}
	printf("%d",c);
}
