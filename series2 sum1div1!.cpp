#include<stdio.h>
int f(float a)
{
	if(a==1)
	{
		return 1;
	}
	else
	{
		return a*f(a-1);
	}
}
int main()
{
	float a=7,sum=0,i,c;
	for(i=1;i<=a;i++)
	{
		sum=sum+i/f(i);
	}
	printf("%f \n",sum);
}
