#include<stdio.h>
int main()
{
	int target;
	scanf("%d",&target);
	int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	int sum=0;
	int a[15];
	int first;
	int last;
	
	
	
	
	for(int i=0;i<15;i++)
	{
		for(int j=i;j<15;j++)
		{
			sum+=arr[j];
			if(sum==target)
			{
				printf("found \n");
				first=i;
				last=j;
				for(int i=first;i<=last;i++ )
				{
					printf("%d \n",arr[i]);
				}
				break;
			}
		}
		sum=0;
	}
}






