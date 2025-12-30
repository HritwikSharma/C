#include<stdio.h>
int main()
{
	int a=5;
	for(int i=0;i<5;i++)
	{
		for(int k=a;k>=0;k--)
		{
			printf(" ");
		}
		a--;
		for(int j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
