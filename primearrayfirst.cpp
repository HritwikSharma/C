#include<stdio.h>
void prime(int arr[])
{
	int c=0;
	for(int i=0;i<10;i++)
	{
		for(int j=1;j<=arr[i];j++)
		{
			if(arr[i]%j==0)
			{
				c+=1;
			}
		}
		if(c==2)
		{
			printf("%d",arr[i]);
			break;
		}
		c=0;
	}
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	prime(arr);
}
