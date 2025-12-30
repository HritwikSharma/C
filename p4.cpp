#include<stdio.h>
int main()
{
	int i,j,k,l=10,a=1,b=0,c=1,n=0,m,p=0;
	for(i=1;i<8;i++)
	{
		for(k=l;k>0;k--)
		{
			printf(" ");
		}
		for(j=1;j<=c;j++)
		{
			printf("%d ",j);
			if(b==2)
			{
				b=0;
				c++;
			}
		}
		b++;
		p++;
		for(m=a;m>=1;m--)
		{
			if(p!=1)
			{
				printf("%d ",m);
				if(n==2)
				{
					n=0;
					a++;
				}
			}
		}
		n++;
		printf("\n");
		l--;
	}
}
