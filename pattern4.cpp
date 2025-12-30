#include<stdio.h>
int main()
{
	int a=5;
	for(int i=1;i<6
	;i++)
	{
		for(int k=a;k>=0;k--)
		{
			printf(" ");
		}
		a--;
		for(int j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
