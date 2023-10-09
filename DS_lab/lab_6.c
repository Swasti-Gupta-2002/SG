// C Program to Implement a Queue using an Array
#include <stdio.h>
#include <stdlib.h>
 
#define MAX 50
 
void enqueue();
void dequeue();
void display();
int queue[MAX];
int rear = - 1;
int front = - 1;
int main()
{
    int choice;
    do
    {	
    	printf("\n\t  Main Menu!!!\n");
        printf("Enter 1 to Insert element to queue \n");
        printf("Enter 2 to Delete element from queue \n");
        printf("Enter 3 to Display element of queue \n");
        printf("Enter 4 to Quit \n");
        printf("Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
            		enqueue();
            		break;
            case 2:
            		dequeue();
            		break;
            case 3:
            		display();
            		break;
            case 4:
            		printf("You have succesfully exited the Program");
                	break;
            default:
            		printf("The choise is not available ");
                	break;
                	
            return 0;
        } 
    } while (choice != 4);
} 
 
void enqueue()
{
    int x;
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)
        	front = 0;
        printf("Inset the element in queue : ");
        scanf("%d", &x);
        rear = rear + 1;
        queue[rear] = x;
    }
} 
 
void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("Element deleted from queue is : %d\n", queue[front]);
        front = front + 1;
    }
} 

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
} 
