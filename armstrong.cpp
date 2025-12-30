#include<stdio.h>
int main()
{
	int c;
	scanf("%d",&c);
	int b=c;
	int s=0;
	int a;
	while(c!=0)
	{
		a=c%10;
		c=c/10;
		s=s+a*a*a;
	}
	if(s==b)
	{
		printf("armstrong");
	}
	else
	{
		printf("Not armstrong");
	}
}
