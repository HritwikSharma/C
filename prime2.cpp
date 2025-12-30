#include<stdio.h>
int main()
{
	int r;
	scanf("%d",&r);
	int c=0;
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=r;j++)
		{
			if(i%j==0)
			{
				c=c+1;
			}
		}
		if(c==2)
		{
			printf("%d \n",i);
		}
		c=0;
	}
}
