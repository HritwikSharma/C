#include<stdio.h>
int main()
{
	int i,j,k,l=7,a=1,b=1,w=1,c=1,n;
	for(i=1;i<9;i=i+2)
	{
		a=1;
		b=c;
		for(k=l;k>0;k--)
		{
			printf(" ");
		}
		for(j=1;j<i;j=j+2)
		{
			printf("%d",a);
			a++;
		}
		for(n=1;n<=w;n++)
		{
			printf("%d",b);
			b--;
		}
		printf("\n");
		l--;
		c++;
		w++;
	}
}
