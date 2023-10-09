#include<stdio.h>
#include<stdlib.h>

void enqueue();
void dequeue();
void display();
int count=0;

struct priorityqueue
{
	int data, pr;
	struct priorityqueue *next;
};

typedef struct priorityqueue node;
node *front=NULL;
node *rear=NULL;

int main()
{
	int choice;
    printf("Welcome\n");
    do
    {
        printf("Main Menu\n");
        printf("1.Enqueue the value in the Queue\n");
        printf("2.Dequeue the value from the Queue\n");
        printf("3.Display the Queue\n");
        printf("4.Exit the Program\n");
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch(choice)
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
                printf("Program Terminated\n");
                break;

            default:
                printf("Enter a valid input(1/2/3/4)"); 
        }
        printf("\n");
    }while(choice!=4);
}

void enqueue()
{
	int pri;
	node *list, *temp;
	list=(node*) malloc(sizeof(node));
	if (list==NULL)
	{
		printf("Oops! can't enqueue......Memory not available\n");
	}
	printf("Enter the element\n");
	scanf("%d",&list->data);
	printf("Enter the priority\n");
	scanf("%d",&pri);
	list->pr=pri;
	list->next=NULL;

	if (front==NULL)
	{
		front=list;
		rear=list;
		printf("%d enqueued with priority %d\n",list->data, list->pr);
		count++;
	}
	else if (front->pr > pri)
	{
		temp=front;
		front=list;
		list->next=temp;
		printf("%d enqueued with priority %d\n",list->data, list->pr);
		count++;
	}
	else
	{
		temp=front;
		while((temp->next!=NULL) && ((temp->next->pr) <= pri))
		{
			temp=temp->next;
		}
		list->next=temp->next;
		temp->next=list;
		printf("%d enqueued with priority %d\n",list->data, list->pr);
		count++;
	}
	printf("Total elements=%d\n",count);
}	

void dequeue()
{
	node *temp;
	if (front==NULL && rear==NULL)
    {
        printf("Oops! can't dequeue.....Queue is empty\n");
    }
    else
    {
    	temp=front;
    	front=front->next;
    	printf("%d dequeued with priority %d\n",temp->data, temp->pr);
    	count--;
    }
    printf("Total elements=%d\n",count);
}

void display()
{
    node *temp;
    if (front==NULL && rear==NULL)
    {
        printf("Oops! can't dequeue.....Queue is empty\n");
    }
    else
    {
        temp=front;
        while(temp!=NULL)
        {
            printf("%d with priority %d\t",temp->data, temp->pr);
            printf("\n");
            temp=temp->next;
        }
        printf("\nTotal elements=%d\n",count);
    }
}
