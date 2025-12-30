#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name;
    int marks;
};
int main()
{

    int i,n,avg=0 ;
    struct student *p;

    printf("Enter no. of students for entry: \n\n");
    scanf("%d",&n);

    p=(struct student*)malloc(n*sizeof(struct student));

    if(n==0)
    {
        printf(" No entries made! \n\n");
        exit(0);
    }
    else
    {
    
    

    for(i=0;i<n;i++)
    {
        printf("\nEnter %dth student's info: \n\n",(i+1));
        printf("\n\nRoll: ");
        scanf("%d",&p[i].roll);
        printf("\n\nName: ");
        scanf(" %c",&p[i].name);
        printf("\n\nEnter Marks: ");
        scanf("%d",&p[i].marks);

    }
    }
    for(i=0;i<n;i++)
    {
        printf("\n\n Student's entry details: \n\n Roll: %d\n Name: %c\n Marks: %d\n",p[i].roll,p[i].name,p[i].marks);

    }
    for(i=0;i<n;i++)
    {
        avg=p[i].marks+avg;
    }

    avg=avg/i;

    printf("\\n Average of marks: %d",avg);

    return 0;





}
