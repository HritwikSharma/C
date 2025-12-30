#include<stdio.h>
#include<stdlib.h>
int main()
{
    int max;
    int n;
    int j=1;
    printf("Enter the range");
    scanf("%d",&n);
    int *p=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the element");
        scanf("%d",&p[i]);
    }
    max=p[0];
    while(j<n){
        if(p[j]>max){
            max=p[j];
        }
        j=j+1;
    }
    printf("The biggest number is %d",max);
}
