#include<stdio.h>
#include<string.h>
int main(){
	int a[]={1,2,4,5};
	int b[]={2,4,6,8,10};
	int l2=sizeof(b)/sizeof(b[0]);
	int l1=sizeof(a)/sizeof(a[0]);
	int i=0;
	int j=0;
	int k=0;
	int l=0;
	int c=0,c2=0;
	for(i=0;i<l1;i++)
	{
		c=0;
		c2=0;
		k++;
		l=0;
		for(j=0;j<l2;j++)
		{
			l++;
			if(a[i]==b[j])
			{
				c=1;
			}
			if(b[k]==a[l])
			{
				c2=1;
			}
		}
		if(c==0)
		{
			printf("%d",a[i]);
		}
		if(c2==0)
		{
			printf("%d",b[k]);
		}
	}
}
