#include<stdio.h>
int main()
{
	int a;
	printf("enter 1 st no.");
	scanf("%d",&a);
	int i;
	int b=a+2;
	int flag=0;
	for(i=2;i<b/2;i++)
	{
		if(a%i==0 || b%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
    	printf("Twin Prime");
	}
	else
	{
		printf("Not twin prime");
	}
}
