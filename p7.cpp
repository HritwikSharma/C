#include<stdio.h>
int main()
{
	int i,j,a=10,k,b=0,c=5,m=1;
	for(i=1;i<=a;i++)
	{
		for(j=1;j<=a;j++)
		{
			printf("*");
			b++;
			if(b==c)
			{
				for(k=1;k<m;k++)
				{
					printf(" ");
				}
			}
		}
		c--;
		b=0;
		m=m+2;
		a=a-2;
		printf("\n");
	}
	a=2;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=a;j++)
		{
			printf("*");
			b++;
			if(b==c)
			{
				for(k=m;k>1;k--)
				{
					printf(" ");
				}
			}
		}
		c++;
		a=a+2;
		b=0;
		m=m-2;
		printf("\n");
	}
}
