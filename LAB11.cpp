// wap to implement linear search
#include<stdio.h>
int ls(int[],int,int);
int main()
{
	int a[100],n,i,s,m;
    printf("enter the range of the array\n");
    scanf("%d",&n);
    printf("enter the array elements\n");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter the element to be searched");
    scanf("%d",&s);
    m=ls(a,s,n);
}
int ls(int a[],int s,int n)
{
	int j,r,c=1;
	for(j=0;j<n;j++)
    {
    	r=a[j];
    	if(r==s)
    	{
    		c=0;
    		printf("element found at position %d",j);
    		break;
		}
	}
	if(c){
		printf("Not Found");
	}
	
}
