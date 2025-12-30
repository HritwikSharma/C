#include<stdio.h>
int main()
{
	int i,j,a=5,b=1;
	for(i=1;i<6;i++)
	{
		for(j=0;j<a;j++)
		{
			printf(" ");
		}
		a--;
		printf("*");
		if(i!=1)
		{
			for(j=0;j<b;j++)
			{
				printf(" ");
			}
			b=b+2;
			printf("*");
		}
		printf("\n");
	}
	for(i=6;i>=1;i--)
	{
		for(j=a;j>0;j--)
		{
			printf(" ");
		}
		a++;
		printf("*");
		if(i!=1)
		{
			for(j=b;j>0;j--)
			{
				printf(" ");
			}
			b=b-2;
			printf("*");
		}
		printf("\n");
	}
}
