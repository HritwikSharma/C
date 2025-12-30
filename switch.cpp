#include<stdio.h>
#include<string.h>
int main()
{
	char c;
	printf("Enter ur choice");
	scanf("%c",&c);
	printf("Enter 1st Number \n");
	int a;
	scanf("%d",&a);
	printf("Enter 2nd Number \n");
	int b;
	scanf("%d",&b);
	int s;
	switch(c)
	{
		case '+':
			s=a+b;
			printf("%d",s);
			break;
		case '-':
			s=a-b;
			printf("%d",s);
			break;
		case '*':
			s=a*b;
			printf("%d",s);
			break;
		case '/':
			s=a/b;
			printf("%d",s);
			break;
		default:
			printf("Wrong choice");
			break;
	}
}
