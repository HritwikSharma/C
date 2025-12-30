#include<stdio.h>
#include<string.h>
int main(){
	printf("Enter the text");
	char str[50];
	gets(str);
	printf("Enter the text");
	char str2[10];
	gets(str2);
	int i,j;
	int l=strlen(str);
	int l2=strlen(str2);
	int d=0;
	int flag=0;
	int c=0;
	for(i=0;i<l;i++)
	{
		flag=0;
		if(str[i]==str2[0]){
			flag=flag+1;
			for(j=1;j<l2;j++)
			{
				i++;
				if(str[i]==str2[j])
				{
					flag=flag+1;
				}
				if(flag==l2)
				{
					d=d+1;
				}
			}
		}
	}
	printf("%d",d);
}




