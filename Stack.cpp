#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int top;
    int arr[];

};


    
int isfull(struct stack *st,int size)
{
    if(st->top==size){
    	return 0;
}
else 
return 1;
}

int isempty(struct stack *st)
{
    if(st->top==-1)
    {
        return 1;
    }
    
}

int push(struct stack *st,int size)
{
    int n;
    if(isfull(st,size)==0)
    {
                printf("Stack is full!!\n\n");
                return 0;


    }
    else{
        printf("Enter data: %\n");
        scanf("%d",&n);
        st->top++;
        st->arr[st->top]=n;

    }
}

int pop(struct stack *st)
{
if(st->top==-1)
{
    printf("stack is empty!!!\n\n");
    return 0;
}
else
{
    printf("popped elememnt: %d\n",st->arr[st->top]);
    st->top--;

}
}

int main()
{
    int size,ch;
    
    printf("Enter size of stack: \n\n");
    scanf("%d",&size);
    struct stack *st=(struct stack *)malloc(sizeof(struct stack));
    st->arr[size];
    st->top=-1;

    while(1)
    {
        printf("Enter your choice: \n\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:
            {
                push(st,size);
                break;
            }
            case 2:
            {
                pop(st);
                break;
            }
            case 3:
            {
                exit(0);
            
            }
            default:
            {
                printf("Invalid Input!!\n\n");
                break;
            }
        }
    
	}
	free(st);
    return 0;
}
