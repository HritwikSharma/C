#include<stdio.h>
int main()
{
	int flag=0;
	int c;
	scanf("%d",&c);
	int i;
	for(i=2;i<c/2;i++)
	{
		if(c%i==0){
			flag++;
		}
	}
	if(flag==0)
	{
		printf("Prime");
	}
	else{printf("Not Prime");
	}
}
