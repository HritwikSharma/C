#include<stdio.h>
int main()
{
	int i,j=4,k,l=0;
	for(i=1;i<4;i++)
	{
		for(k=j;k>=l;k--)
		{
			printf("%d",k);
		}
		printf("\n");
		j--;
		l++;
	}
}
