#include<stdio.h>
#include<string.h>
int le(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}
	return len;
}
int main()
{
	int a=0,b=0;
	char str[100];
	printf("Enter the string \n");
	fgets(str,sizeof(str)+1,stdin);
	a=le(str);
	b=strlen(str);
	printf("length without using function = %d \n",a);
	printf("length without using function = %d \n",b);
}
