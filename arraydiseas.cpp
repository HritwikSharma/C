#include<stdio.h>
#include<math.h>
int main()
{
	printf("Enter the difference");
	int k;
	scanf("%d",&k);
	
	printf("Enter the range");
	int l;
	scanf("%d",&l);
	
	int a[l];
	printf("Enter the values");
	int i=0,j=0;
	for(i=0;i<l;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<l;i++)
	{
		for(j=i;j<l;j++)
		{
			if(abs(a[i]-a[j])==k)
			{
				printf("Found at %d and  %d",i+1,j+1);
			}
		}
	}
}
