/*wap to do bubble sorting*/
#include<stdio.h>
int main()
{
    int a[100],n,i,j,s,r,low=0,high,mid,k,h;
    printf("enter the element to be searched");
    scanf("%d",&s);
    printf("enter the range of the array\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("enter the array elements\n");
    	scanf("%d",&a[i]);
	}
	for(r=0;r<n-1;r++)
	{
		for(k=0;k<n-1-r;k++)
		{
			if(a[k]>a[k+1])
				{
					h=a[k+1];
					a[k+1]=a[k];
					a[k]=h;
				}
		}
	}
	for(j=0;j<n;j++)
	{
		printf("%d",a[j]);
	}
	high=n;
	for(j=0;j<n;j++)
    {
    	mid=(low+high)/2;
    	if(a[mid]==s)
    	{
    		printf("the element is present in position %d",mid);
		}
		if(a[mid]<s)
		{
			high=mid-1;
		}
		if(a[mid>s])
		{
			low=mid+1;
		}
	}
	
}
