#include<stdio.h>
int main()
{
	int i,j,k,l=4,a=1,b=0;
	for(i=1;i<6;i++)
	{
		a=b;
		b++;
		for(k=l;k>0;k--)
		{
			printf(" ");
		}
		for(j=1;j<i;j++)
		{
			printf("%d",a);
			a--;
		}
		printf("\n");
		l--;
	}
}
