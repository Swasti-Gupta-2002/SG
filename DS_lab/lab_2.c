#include<stdio.h>

int stack[50],top;
int Push(int);
int Pop();
int Display();
int main()
{
	int ch,n;
    top=-1;
    printf("\n Enter the size of STACK:");
    scanf("%d",&n);
    printf("\n\tSelect Your choise\n");
    printf("\n 1.Push\n 2.Pop\n 3.Display\n 4.Exit");
    do
    {
        printf("\n\tEnter the Choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                	Push(n);
                	break;
            case 2:
               		Pop();
                	break;
            case 3:
                	Display();
                	break;
            case 4:
                	printf("\n  Exit the program!!! ");
                	break;
            default:
                	printf ("\n  Please Enter a Valid Choice(1/2/3/4)");
                
        }
    }
    while(ch!=4);
    return 0;
}
int Push(n)
{
	int x;
    if(top>=n-1)
    {
        printf("\n Stack is overflowing");
        
    }
    else
    {
        printf("\nEnter a value to be pushed:");
        scanf("%d",&x);
        top++;
        stack[top]=x;
    }
}
int Pop()
{
    if(top<=-1)
    {
        printf("\n  Stack is underflowing");
    }
    else
    {
        printf("\n  The Popped element is %d\n",stack[top]);
        top--;
    }
}
int Display()
{
	int i;
    if(top>=0)
    {
        printf("\n The elements in stack are:\n ");
        for(i=top; i>=0; i--)
            printf("%d\n ",stack[i]);
    }
    else
    {
        printf("\n The stack is empty");
    }
   
}
