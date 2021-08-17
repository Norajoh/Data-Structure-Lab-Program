#include<stdio.h>
#include<conio.h>
#define max 5
int stack[max],top=-1;
int push();
int pop();
int peek();
int display();
int main(void)
{
	int op;
	clrscr();
	do
	{
	    printf("\n------stack------");
	    printf("\n 1,push");
	    printf("\n 2,pop");
	    printf("\n 3.peek");
	    printf("\n 4.display");
	    printf("\n 5.exit");
	    printf("\n enter your option\n");
	    scanf("%d",&op);
	    switch(op)
	    {
		case 1:
		     push();
		     break;
		case 2:
		     pop();
		     break;
		case 3:
		     peek();
		     break;
		case 4:
		     display();
		     break;
		default:
		     printf("\ninvalid");
	    }
	}while(op!=5);
	getch();
	return 0;
}
	int push()
	{
	    int item;

	    if(top==max-1)
	    {
		printf("overflow");
	    }
	    else
	    {
		 printf("enter the element");
	    scanf("%d",&item);
		top=top+1;
		stack[top]=item;
	    }
	    return 0;
	}
	int pop()
	{
	    int val;
	    if(top==-1)
	    {
		printf("underflow");
	    }
	    else
	    {
		val=stack[top];
		top=top-1;
		printf("the popped element is %d",val);
	    }
	    return 0;
	}
	int peek()
	{
	    if(top==-1)
	    {
		printf("stack is empty");
	    }
	    else
	    {
		printf("top element is %d",stack[top]);
	    }
	    return 0;
	}
	int display()
	{
	    int i;
	    if(top==-1)
	    {
		printf("stack is empty");
	    }
	    else
	    {
		printf("------stack-------\n");
		for(i=0;i<top;i++)
		{
		   printf("%d\t",stack[i]);
		}
	    }
	    return 0;
	}
